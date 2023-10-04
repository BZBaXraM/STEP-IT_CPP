#pragma once
#include <iostream>
#include <string.h>


using namespace std;

class Person {
private:
  char name[50];
  char surname[50];
  int age;
  static int count;

public:
  Person(const char name[50], const char surname[50], int age);
  static int get_count();
  void show_info();
  ~Person();
};
