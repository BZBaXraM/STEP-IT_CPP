#include <cstring>
#include <iostream>
#include <istream>
#include <ostream>

using namespace std;

class myString {
private:
  size_t _length = 0;
  size_t _capacity = 16;
  char *_text = nullptr;

  void setText(const char *text);

public:
  myString() = default;

  myString(const char *text);

  myString(const myString &other);

  myString(const size_t count, const char text);

  myString &operator=(const myString &other);

  myString &operator+(const myString &other);

  myString &operator+=(const myString &other);

  bool &operator>(const myString &other);

  bool &operator<(const myString &other);

  bool operator==(const myString &other);

  char &operator[](int index) { return _text[index]; }

  ~myString() { delete[] _text; }

  friend ostream &operator<<(ostream &os, const myString &other);

  friend istream &operator>>(istream &in, myString &other);

  myString &cin(char c);

  char &front();

  char &back();

  char &at(size_t index);

  size_t capacity() const;

  size_t size() const;

  size_t find(char chr) const; // Не смог

  size_t rfind(char chr) const; // Не смог…

  void clear();

  void resize(size_t newSize);

  void reserve(size_t newCapacity);

  void shrink_to_fit();

  bool empty() const;

  myString append(const char *text);

  int compare(const myString right); // Не смог

  const char *print() const { return _text; }

  void printStr() {
    cout << _text;
  } // сделал для себя, чтобы иногда не вводить cout…
};

myString &myString::operator=(const myString &other) {
  if (this != &other) {
    if (_text)
      delete[] _text;
    _text = new char[other._length];
    strcpy(_text, other._text);
    _length = other._length;
    _capacity = other._capacity;
  }
  return *this;
}

myString::myString(const char *text) {
  _length = strlen(text);
  _capacity = _length * 2;
  _text = new char[_capacity];
  strcpy(_text, text);
}

void myString::setText(const char *text) {
  _text = new char[strlen(text) + 1];
  strcpy(_text, text);
}

myString &myString::operator+(const myString &other) {
  char *tmp = _text;
  _text = new char[other._length + _length];
  if (tmp) {
    strcpy(_text, tmp);
    delete[] tmp;
  }
  strcpy(_text + _length, other._text);
  _length += other._length;
  _capacity += other._capacity;

  return *this;
}

myString &myString::operator+=(const myString &other) { return *this + other; }

bool &myString::operator>(const myString &other) {
  if (this > &other) {
    delete[] _text;
    _text = other._text;
    _length = other._length;
    _capacity = other._capacity;
  }
  return (bool &)*this;
}

char &myString::front() { return _text[0]; }

char &myString::back() { return _text[_length - 1]; }

char &myString::at(size_t index) {
  if (index >= _length) {
    cout << "Error! " << endl;
  }
  return _text[index];
}

size_t myString::size() const { return _length; }

size_t myString::capacity() const { return _length; }

void myString::clear() {
  for (int i = 0; i < _length; ++i) {
    _text[i] = ' ';
  }
}

void myString::resize(size_t newSize) {
  char *tmp = new char[newSize + 1];

  for (int i = 0; i < newSize; ++i) {
    tmp[i] = _text[i];
  }
  delete[] _text;
  _text = tmp;

  _length = newSize;
  _capacity = _length * 2;
}

void myString::reserve(size_t newCapacity) {
  char *n = new char[newCapacity + 1];
  _capacity = newCapacity;
  _text = n;
}

bool myString::empty() const { return _length > 0; }

myString::myString(const myString &other) {
  _length = other._length;
  _text = new char[_length + 1];
  strcpy(_text, other._text);
  //    cout << "Copy Constructor is called " << endl;
}

myString myString::append(const char *text) {
  myString tmp(text);
  return *this += tmp;
}

myString &myString::cin(char c) {
  char tmp[] = {c, 0};
  append(tmp);
  return *this;
}

void myString::shrink_to_fit() {
  char *str = new char[_length + 1];
  for (int i = 0; i < _length; ++i) {
    str[i] = _text[i];
  }
  delete[] _text;
  _text = str;
}

bool &myString::operator<(const myString &other) {
  if (this < &other) {
    delete[] _text;
    _text = other._text;
    _length = other._length;
    _capacity = other._capacity;
  }
  return (bool &)other;
}

myString::myString(const size_t count, const char text) {
  _text = new char[count + 1];
  for (int i = 0; i < count; ++i) {
    _text[i] = text;
  }
  _text[count] = '\0';
}

bool myString::operator==(const myString &other) {
  if (this->_text == other._text && this->_length == other._length &&
      this->_capacity == other._capacity) {
    return true;
  } else {
    return false;
  }
}

ostream &operator<<(ostream &os, const myString &other) {
  os << other._text;
  return os;
}

istream &operator>>(istream &in, myString &other) {
  char temp;
  do {
    temp = in.get();
    if (temp == '\n' || temp == '\0')
      break;
    other.cin(temp);
  } while (true);
  return in;
}

int main() {

  cout << "\t\tCustom String Class by Bahram Bayramzade " << endl;

  myString str = ("Bahram");
  myString str2 = str;  // Copy constructor is working!
  cout << str2.print(); // Print copy…
  cout << "\n";
  cout << str.print() << endl;
  cout << str2.print();

  cout << "\n";
  myString str3;
  str3 = "STEP ";
  str3 += "IT"; // перегпузка +=
  str3 += " Academy";
  str3.printStr();

  myString name;
  cin >> name;
  cout << "Hello, " << name << endl; // Работает!!!!!

  cout << "\n";
  myString str4;
  str4 + "Abdullah"; // перегпузка +
  str4.printStr();

  cout << "\n";
  myString str5;
  str5 = "Moquda";
  str5.shrink_to_fit();
  str5.printStr();

  myString s(5, 'a'); //Работает !
  s.printStr();

  myString indexStr("Bahram");
  cout << indexStr[3] << endl; // Работает!

  cout << str.at(1); //Работает!
  str.resize(4);     //Работает!
  cout << str;
  cout << str.size(); //Работает!

  myString sl = "Salam";
  sl.reserve(10);
  cout << sl.print();

  myString s2(10, 'a'); // Второй тест
  cout << s2.print();

  return 0;
}