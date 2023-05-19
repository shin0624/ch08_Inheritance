#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
};
class Circle :public Shape {
public:
	int x;
	virtual void draw() {
		Shape::draw();//기본 클래스의 draw()호출
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;//업캐스팅
	
	pShape->draw();//동적바인딩 발생. 파생 객체를 가리키는 기본포인터는 파생클래스의 draw()를 호출한다. 파생클래스의 draw()는 기본클래스의 draw()를 호출하기 때문에, 1차적으로 기본 draw()를 호출한 후 Circle을 출력
	pShape->Shape::draw();//정적바인딩 발생. 기본 클래스의 draw()호출.
}