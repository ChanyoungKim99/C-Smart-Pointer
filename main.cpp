#include <iostream>

int main()
{
	int* p = new int;
	*p = 10;
	delete p;


	// smart pointer
	// leak, dangling pointer 극복위해 만들어짐
	
	std::unique_ptr<int> p2(new int);
	*p2 = 10;
	// 포인터를 클래스화함
	// 클래스니까 소멸자 존재 = delete 안해도됨!

	// 일반 포인터와 호환
	int* p3;
	p3 = p2.get();

	std::cout << *p3 << std::endl;
}

// Modern C++ PDF 16-1-2 에 자세히 설명되어있다.