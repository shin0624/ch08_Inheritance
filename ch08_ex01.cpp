#include<iostream>
#include<string>
using namespace std;

class Point {//2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� point����
	int x, y;
public:
	void set(int x, int y) { this->x = x, this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
};

class ColorPoint : public Point {//2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� colorpoint. Point�� ��ӹ���
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();//pointŬ������ showpoint()ȣ��
}
int main() {
	Point p;
	ColorPoint cp;
	cp.set(3, 4);//cp�� �Ļ�Ŭ���� ��ü, set�� �θ�Ŭ���� �޼���
	cp.setColor("red");
	cp.showColorPoint();
}