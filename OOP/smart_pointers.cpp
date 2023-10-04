#include<iostream>

using namespace std;

template <class T>
class myAutoPtr
{
	T* ptr;
public:
	explicit myAutoPtr(T* ptr = nullptr)
	{
		this->ptr = ptr;
	}
	~myAutoPtr()
	{
		delete ptr;
	}

	T& operator*() const
	{
		return *ptr;
	}

	T* operator->() const
	{
		return ptr;
	}

};

template <class T>
class Shared_pointer
{
private:
	T* ptr;
	size_t* count;
public:
	Shared_pointer() :ptr(nullptr), count(nullptr) {};
	
	Shared_pointer(T* ptr) : ptr(ptr), count(new size_t(1)) {};
	
	Shared_pointer(Shared_pointer<T>& other)
		: ptr(other.ptr), count(other.count)
	{
		(*count)++;
	}

	Shared_pointer<T>& operator=(Shared_pointer<T>& other)
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
		count = other.count;
		ptr = other.ptr;
		(*count)++;
		return this;
	}
	Shared_pointer<T>& operator=(T* ptr)
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
		this.count = new size_t(1);
		this.ptr = ptr;
		(*count)++;
		return this;
	}

	int use_count()
	{
		return *count;
	}

	T& operator*() const
	{
		return *ptr;
	}

	T* operator->() const
	{
		return ptr;
	}

	T& get() const
	{
		return ptr;
	}

	~Shared_pointer()
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
	}



};

myAutoPtr<int> foo()
{
	myAutoPtr<int> tmp(new int(5));
	cout << *tmp;

	return tmp;

}


auto_ptr<int> foo1()
{
	auto_ptr<int> tmp(new int(5));
	return tmp;
}

class Test
{
	string name;
	int* n;
public:
	Test(string name) :name{ name } {
		n = new int[100000];
		cout << this << "Object created!!!" << endl;
	};
	~Test()
	{
		delete[] n;
		cout << "Object destroyed" << endl;
	};
	void foo()
	{
		cout << name << "Foo" << endl;
	}

private:

};



int main()
{
	// smart pointers  - auto_ptr, shared_ptr, weak_ptr, unique_ptr, scoped_ptr

	/*myAutoPtr<int> tmp1 = foo();*/
	/*auto tmp2 = foo1();
	cout << *tmp2 << endl;*/

	Test* tst = new Test("first");
	/*shared_ptr<Test> tst_ptr(tst);
	cout << tst_ptr.use_count() << endl;
	{
		shared_ptr<Test> tst_ptr2(tst_ptr);
		cout << tst_ptr.use_count() << endl;
		{
			shared_ptr<Test> tst_ptr3(tst_ptr2);
			cout << tst_ptr.use_count() << endl;
		}
		cout << tst_ptr.use_count() << endl;
	}
	cout << tst_ptr.use_count() << endl;

	cout << tst_ptr.use_count() << endl;*/

	//shared_ptr<Test> ptr_shared(new Test("third"));
	//auto ptr_shared2 = ptr_shared;
	//ptr_shared->foo();
	//cout << ptr_shared.use_count()<<endl;  // 
	//cout << ptr_shared2.use_count()<<endl; 

	//auto ptr_sha = make_shared<Test>("second");
	//auto ptr_sha1 = ptr_sha;
	//cout << ptr_sha.use_count() << endl;
	//ptr_sha->foo();
	//ptr_sha1->foo();
	/*int* a;

	while (true)
	{
		auto_ptr<Test> ptr1(new Test("Salam"));
	}
	*/

	/*unique_ptr<Test> un_ptr(tst);
	//unique_ptr<Test> un_ptr1(un_ptr);*/

	//shared_ptr<Test> sh(tst);
	//weak_ptr<Test> ptr1(sh);
	///*{
	//	weak_ptr<Test>ptr2(sh);
	//}*/

	//((shared_ptr<Test>)ptr1)->foo();

	Shared_pointer<Test> st1 (tst);
	cout << st1.use_count() << endl;
	Shared_pointer<Test> st2 = st1;
	cout << st2.use_count() << endl;

}