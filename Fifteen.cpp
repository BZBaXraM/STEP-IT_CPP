#include <conio.h>
#include <iomanip>
#include <iostream>
#include <time.h>
#include <windows.h>


using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

FILE *file;

enum arrows { UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77 };

enum colors {
  BLACK = 0,
  DARKBLUE,
  DARKGREEN,
  DARKCYAN,
  DARKRED,
  DARKMAGENTA,
  DARKYELLOW,
  DARKGRAY,
  GRAY,
  BLUE,
  GREEN,
  CYAN,
  RED,
  MAGENTA,
  YELLOW,
  WHITE
};

void fill_fields(int fields[][4]);
void show_fields(int fields[][4]);

void find_empty(int fields[][4], int &x, int &y);
void swap_values(int &a, int &b);
void set_color(int cell, int value);

void move_up(int fields[][4]);
void move_down(int fields[][4]);
void move_left(int fields[][4]);
void move_right(int fields[][4]);
void movies(int fields[][4], int side);

void start_position(int fields[][4]);
bool is_win(int fields[][4]);

void win_animation();

void save_game(int fields[][4]);
void load_game(int fields[][4]);

int main() {
  srand(time(NULL));
  int fields[4][4]{};
  fill_fields(fields);

  int menu = 0;
  cout << "1. Start new game!" << endl;
  cout << "2. Load game!" << endl;
  cin >> menu;
  switch (menu) {
  case 1:
    start_position(fields);
    break;
  case 2:
    load_game(fields);
    break;
  }

  int kbd = 0;
  while (!is_win(fields)) {
    show_fields(fields);
    kbd = _getch();
    kbd = _getch();
    movies(fields, kbd);
    save_game(fields);
  }
  win_animation();
}

void fill_fields(int fields[][4]) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      fields[i][j] = i * 4 + j + 1;
    }
  }
}
void show_fields(int fields[][4]) {
  system("cls");
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      if (fields[i][j] != 16) {
        set_color(i * 4 + j + 1, fields[i][j]);
        cout << setw(3) << fields[i][j] << ' ';
      } else {
        cout << setw(3) << "    ";
      }
    }
    cout << "\n\n";
  }
}

void find_empty(int fields[][4], int &x, int &y) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      if (fields[i][j] == 16) {
        x = i;
        y = j;
      }
    }
  }
}
void swap_values(int &a, int &b) {
  a = a + b;
  b = a - b;
  a = a - b;
}
void set_color(int cell, int value) {

  if (cell != value) {
    SetConsoleTextAttribute(h, (BLACK << 4) | DARKRED);
  } else {
    SetConsoleTextAttribute(h, (BLACK << 4) | GREEN);
  }
}

void move_up(int fields[][4]) {
  int x, y;
  find_empty(fields, x, y);
  if (x != 3) {
    swap_values(fields[x][y], fields[x + 1][y]);
  }
}
void move_down(int fields[][4]) {
  int x, y;
  find_empty(fields, x, y);
  if (x != 0) {
    swap_values(fields[x][y], fields[x - 1][y]);
  }
}
void move_left(int fields[][4]) {
  int x, y;
  find_empty(fields, x, y);
  if (y != 3) {
    swap_values(fields[x][y], fields[x][y + 1]);
  }
}
void move_right(int fields[][4]) {
  int x, y;
  find_empty(fields, x, y);
  if (y != 0) {
    swap_values(fields[x][y], fields[x][y - 1]);
  }
}
void movies(int fields[][4], int side) {
  switch (side) {
  case UP:
    move_up(fields);
    break;
  case DOWN:
    move_down(fields);
    break;
  case LEFT:
    move_left(fields);
    break;
  case RIGHT:
    move_right(fields);
    break;
  }
}

void start_position(int fields[][4]) {
  int side = 0;
  int sides[]{UP, DOWN, LEFT, RIGHT};
  for (size_t i = 0; i < 500; i++) {
    side = rand() % 4;
    movies(fields, sides[side]);
  }
}
bool is_win(int fields[][4]) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      if (fields[i][j] != i * 4 + j + 1) {
        return false;
      }
    }
  }
  return true;
}

void win_animation() {

  for (int i = 0; i < 15; i++) {
    system("cls");
    if (i % 2 == 0) {
      SetConsoleTextAttribute(h, (BLACK << 4) | DARKRED);
    } else {
      SetConsoleTextAttribute(h, (BLACK << 4) | WHITE);
    }
    cout << "Congratulation!!! You WIN!!!" << endl;
    Sleep(200);
  }
}

void save_game(int fields[][4]) {
  fopen_s(&file, "game.dat", "wb");
  fwrite((char *)fields, sizeof(int), 16, file);
  fclose(file);
}
void load_game(int fields[][4]) {
  fopen_s(&file, "game.dat", "rb");
  fread((char *)fields, sizeof(int), 16, file);
  fclose(file);
}