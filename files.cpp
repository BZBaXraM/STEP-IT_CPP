#include<iostream>
#include<io.h>
#include<conio.h>
#include<string.h>

using namespace std;

struct Student
{
	char name[50];
	char surname[50];
	short age;
	float average_mark;
};

void show_info(Student s) {
	cout << "Name:\t\t" << s.name << endl;
	cout << "Surname:\t" << s.surname << endl;
	cout << "Age:\t\t" << s.age << endl;
	cout << "Mark:\t\t" << s.average_mark << endl;
	cout << "____________________________________\n";
}

void show_all(Student* students, int length) {
	for (size_t i = 0; i < length; i++)
	{
		show_info(students[i]);
	}
}

int main() {
	FILE* file;
	char word[] = "STEP IT - Uroven";
	///*
	//w - открыте файла для записи информации
	//r - открыте файла для чтения информации
	//a - открыте файла для добавления информации

	//wb - открыте файла для записи информации в бинарном режиме
	//rb - открыте файла для чтения информации в бинарном режиме
	//ab - открыте файла для добавления информации в бинарном режиме
	//*/
#pragma region putc_getc
	//fopen_s(&file, "test.txt", "w");

	//
	//// putc(int symb, File* file)
	//if (file != NULL) {
	//	for (size_t i = 0; word[i] != '\0'; i++)
	//	{
	//		putc(word[i], file);
	//	}
	//	fclose(file);
	//}

	// getc(File* file)
	/*fopen_s(&file, "test.txt", "r");

	if (file == NULL) {
		cout << "Nema" << endl;
		return 0;
	}
	char word2[100];
	int i = 0;
	while ((word2[i] = getc(file)) != EOF)
	{
		i++;
	}
	word2[i] = '\0';
	fclose(file);
	cout << word2 << endl;*/
#pragma endregion	

#pragma region fputs_fgets
	//fopen_s(&file, "test_string.txt", "w");
	//// fputs(const char* str, file* file);
	//if (file != NULL)
	//{
	//	fputs(word, file);
	//	fclose(file);
	//}

	//fopen_s(&file, "test_string.txt", "r");
	//// fgets(char* str, int nax_count, File* stream)
	//char word_str[100];
	//if (file == NULL) {
	//	cout << "Nema takoy file" << endl;
	//	return 0;
	//}
	//fgets(word_str, sizeof(word_str), file);
	//fclose(file);
	//cout << word_str << endl;
	//system("test_string.txt");
#pragma endregion

#pragma region fprintf_fscanf

	/*Student st1{ "Suleyman", "Babayev", 16, 11.5 };
	fopen_s(&file, "test_student.dat", "w");
	if (file != NULL)
	{
		fprintf(file, "%s | %s | %d | %.2f |",
			st1.name,
			st1.surname,
			st1.age,
			st1.average_mark);
			fclose(file);
	}

	if (file == NULL) {
		cout << "Nema takoy file" << endl;
		return 0;
	}
	fopen_s(&file, "test_student.txt", "r");
	Student st2;
	fscanf_s(file, "%s | %s | %hd | %f|",
		st2.name, sizeof(st2.name),
		st2.surname, sizeof(st2.surname),
		&st2.age,
		&st2.average_mark);
	fclose(file);
	cout << "Name:\t\t" << st2.name << endl;
	cout << "Surname:\t" << st2.surname << endl;
	cout << "Age:\t\t" << st2.age << endl;
	cout << "Mark:\t\t" << st2.average_mark << endl;*/
#pragma endregion


#pragma region fwrite fread
	// запись в файл одного элементов
	/*int numb = 13861185;

	fopen_s(&file, "numb.dat", "wb");

	fwrite((char*)&numb, sizeof(int), 1, file);
	fclose(file);

	int numb1 = 0;
	fopen_s(&file, "numb.dat", "rb");
	fread((char*)&numb1, sizeof(int), 1, file);
	fclose(file);
	cout << numb1 << endl;*/

	// запись в файл массива элементов
	/*int arr[7]{ 5, 9, 8, 4, 752, 13, 1313 };

	fopen_s(&file, "numb_arr.dat", "wb");

	fwrite((char*)arr, sizeof(int), 7, file);
	fclose(file);

	int numb1[7];
	fopen_s(&file, "numb_arr.dat", "rb");
	fread((char*)numb1, sizeof(int), 7, file);
	fclose(file);
	for (int i = 0; i < 7; i++)
	{
		cout << numb1[i] << " ";
	}
	cout << '\n';*/

	// запись в файл структур

//Student st = { "Raul", "Isgandarov", 21, 1.5 };
//fopen_s(&file, "struct.dat", "wb");
//
//fwrite((char*)&st, sizeof(Student), 1, file);
//fclose(file);

	/*Student st3;
	fopen_s(&file, "struct.dat", "rb");

	fread((char*)&st3, sizeof(Student), 1, file);
	fclose(file);

	show_info(st3);*/


	// запись в файл массив структур

	Student students[3]{
		{"Raul", "Isgandarov", 21, 2.3},
		{"Bahram", "Bayramzade", 24, 25},
		{"Murad", "Huseynli", 19, 1000.32},
	};
	//fopen_s(&file, "struct_arr.dat", "wb");
	//fwrite((char*)students, sizeof(Student), 3, file);
	//fclose(file);

	/*Student students_new[3]{};
	fopen_s(&file, "struct_arr.dat", "rb");
	fread((char*)students_new, sizeof(Student), 3, file);
	fclose(file);
	show_all(students_new, 3);*/

#pragma endregion


#pragma region fseek ftell
	// fseek() - устанавливает позицию
	// ftell() - возвращает текущую позицию
	// SEEK_END
	// SEEK_SET
	// SEEK_CUR

	/*fopen_s(&file, "test.txt", "r");
	char symbol;
	fseek(file, 0, SEEK_END);
	int length = ftell(file);
	cout << length << endl;

	for (int i = 3; i < 9; i++)
	{
		fseek(file, i, SEEK_SET);
		symbol = getc(file);
		cout << symbol;
	}
	fclose(file);*/



	/*fopen_s(&file, "name.txt", "r");
	char symbol;
	fseek(file, 0, SEEK_END);
	int length = ftell(file);

	for (int i = 0; i < length; i++)
	{
		fseek(file, i, SEEK_SET);
		if ((symbol = getc(file)) == '|') {
			cout << '\n';
			continue;
		}
		cout << symbol;
	}
	fclose(file);*/
#pragma endregion

#pragma region remove rename
	/*if (remove("name - Copy.txt") != 0) cout << "Obshivka udaleniya" << endl;
	else cout << "DELETED HOHOHO" << endl;*/

	/*if (rename("name - Copy.txt", "name - NeCopy.txt") != 0) cout << "Obshivka perimenovaniyaya" << endl;
	else cout << "RENAME HOHOHO" << endl;*/

	// copy
	/*rename("name - NeCopy.txt", "../name - NeCopy.txt");*/

	// cut
	/*rename("cutable.txt", "../cutable.txt");
	remove("cutable.txt");*/

#pragma endregion


#pragma region find file
	struct _finddata_t myfileinfo;
	long done = _findfirst("C:/Users/n.zamanov/downloads/*.txt", &myfileinfo);
	char path[100] = "C:/Users/n.zamanov/downloads/";
	while (_findnext(done, &myfileinfo) == 0) {
		
		if (strcmp(myfileinfo.name, "SeaBattle.txt") == 0){
		strcat_s(path, 100, myfileinfo.name);
		break;
		}
	}
	cout << path << endl;
	fopen_s(&file, path, "r");
	char text[1500]{};
	fread((char*)text, 1, 1500, file);
	fclose(file);
	cout << text << endl;
	



#pragma endregion






}