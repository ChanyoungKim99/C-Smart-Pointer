#include <iostream>

int main()
{
	int* p = new int;
	*p = 10;
	delete p;


	// smart pointer
	// leak, dangling pointer �غ����� �������
	
	std::unique_ptr<int> p2(new int);
	*p2 = 10;
	// �����͸� Ŭ����ȭ��
	// Ŭ�����ϱ� �Ҹ��� ���� = delete ���ص���!

	// �Ϲ� �����Ϳ� ȣȯ
	int* p3;
	p3 = p2.get();

	std::cout << *p3 << std::endl;
}

// Modern C++ PDF 16-1-2 �� �ڼ��� ����Ǿ��ִ�.