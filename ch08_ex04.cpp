#include<iostream>
using namespace std;

class Base {
public:
	int a;//public���� �ٲ��־�� ��. private���¿����� main()���� ���� �߻�
//protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived :public Base {//�⺻Ŭ������ protected, public������� private�� ���������� ����Ǿ� ��ӵ�.
public://private:
	int b;
public://protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5;
	x.setA(10);
	x.showA();
	x.b = 10;
	x.setB(10);
	x.showB();

}