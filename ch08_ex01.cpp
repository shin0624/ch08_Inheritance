#include<iostream>
#include<string>
using namespace std;

class Point {//2차원 평면에서 한 점을 표현하는 클래스 point선언
	int x, y;
public:
	void set(int x, int y) { this->x = x, this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
};

class ColorPoint : public Point {//2차원 평면에서 컬러 점을 표현하는 클래스 colorpoint. Point를 상속받음
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();//point클래스의 showpoint()호출
}
int main() {
	Point p;
	ColorPoint cp;
	cp.set(3, 4);//cp는 파생클래스 객체, set은 부모클래스 메서드
	cp.setColor("red");
	cp.showColorPoint();
}