#include<iostream>
#include<string>
using namespace std;

class Point {
public:
	int x,y;//한 점 (x,y)좌표값
public:
	void set(int x, int y) { this->x = x, this->y = y; }
	void showPoint(){ cout << "(" << x << "," << y << ")" << endl; }
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();//point클래스의 showpoint함수 호출
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color)return true;
	else return false;
}

int main() {
	Point p;//기본 클래스의 객체 생성
	p.set(2,3); 
	p.x = 5;//기본 클래스의 x,y를 protected로 설정하면 접근할 수 없기 때문에 오류발생.
	p.y = 5;//기본 클래스의 x,y를 protected로 설정하면 접근할 수 없기 때문에 오류발생.
	p.showPoint();

	ColorPoint cp;//파생클래스의 객체 생성
	cp.x = 10;//기본 클래스의 x,y를 protected로 설정하면 접근할 수 없기 때문에 오류발생.
	cp.y = 10;//기본 클래스의 x,y를 protected로 설정하면 접근할 수 없기 때문에 오류발생.
	cp.set(3, 4);
	cp.setColor("blue");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("orange");
	cout << ((cp.equals(cp2)) ? "true" : "false");
}