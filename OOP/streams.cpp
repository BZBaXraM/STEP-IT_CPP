#include<iostream>

using namespace std;

int main()
{
	// cin - istream class object	>>
	// cout - ostream class object  <<
	// cerr - ostream class object
	// clog - ostream class object
	
	// istream& operator >>(istream&, type_name&)
	// ostream& operator <<(ostream&, type_name&)

	
	// ofstream
	// ifstream
	// fstream
	
	/*
		fstream() -  создает поток, не открsвая файл

		fstream(const char* name, int omode, int filebuff)

		fstream(int f)

		fstream(int f, char* buffer, int len)
	*/

	//enum _Openmode {
	//	in = 0x01, //открыть только для чтения 
	//	out = 0x02, //открыть только для записи
	//	ate = 0x04, //установить указатель на конец файла
	//	app = 0x08, //дописывать данные в конец файла
	//	trunc = 0x10, //усечь файл до нулевой длины
	//	_Nocreate = 0x40, //если файл не существует, ошибка открытия
	//	_Noreplace = 0x80, //если файл уже существует, ошибка открытия 
	//	binary = 0x20 //открыть файл для двоичного обмена 
	//};



	/*void open(const char* fileName, int mode = знач_по_ум, int protection = знач_по_ум);*/

	/*int close();*/

	/*istream& amp; istream::read(unsigned char* buf, int len);
	istream& amp; istream::read(signed char* buf, int len);*/

	/*ostream& amp;
	osteram::write(const unsigned char* buf, int n);
	ostream& amp;
	osteram::write(const signed char* buf, int n);*/

	/*int istream::get();
	istream& istream::get(unsigned char&);
	istream& istream::get(signed char&);*/

	/*ostream& ostream::put(char);*/

	/*istream& istream::get(unsigned char* buf, int n, char c = '\n');
	istream& istream::get(signed char* buf, int n,	char c = '\n');*/

	/*istream& istream::getline(unsigned char* buf, int n, char c = '\n');
	istream& istream::getline(signed char* buf, int n, 	char c = '\n');*/

	/*istream& istream::ignore(int n = 1, int d = EOF);*/

	/*int istream::gcount();*/

	/*int istream::peek();*/

	/*istream& istream::putback(char cc);*/

	/*istream& istream::seekg(long pos);*/

	/*istream& istream::seekg(long off, ios::seek_dir dir);*/
	// beg, end, cur

	/*ostream& ostream::seekp(long pos);*/

	/*ostream& ostream::seekp(long off, ios::seek_dir dir);*/

	/*long istream::tellg();*/

	/*long ostream::tellp()*/
}