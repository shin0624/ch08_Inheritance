#include<iostream>
using namespace std;

class Base {
public:
	int a;//public으로 바꿔주어야 함. private상태에서는 main()에서 오류 발생
//protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived :public Base {//기본클래스의 protected, public멤버들은 private로 접근지정이 변경되어 상속됨.
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