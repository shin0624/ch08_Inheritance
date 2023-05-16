#include<iostream>
#include<string>
using namespace std;

class TV {
	int size;//스크린 크기
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }//매개변수를 갖는 기본 클래스 생성자
	int getSize() { return size; }//size를 리턴하는 메서드
};

class WideTV : public TV{//TV를 상속받는 WIDETV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) { this->videoIn = videoIn; }//wideTV호출 시 기본 클래스의 매개변수를 갖는 TV 생성자에 값 전달
	bool getVideoIn() { return videoIn; }
};

class SmartTV :public WideTV {//wideTV를 상속받는 SmartTV. wideTV의 부모클래스인 TV 클래스의 멤버에도 접근 가능
	string ipAddr;// ip주소
public:
	SmartTV(string ipAddr, int size) :WideTV(size, true) { this->ipAddr = ipAddr; }//smartTV호출 시 wideTV 생성자에 값 전달
	string getIpAddr() { return ipAddr; }
	
};
int main() {
	//32인치 크기에 192.0.0.1의 인터넷 주소를 가지는 스마트 tv객체를 생성.
	SmartTV htv("192.0.0.1", 32);

	cout << "size = " << htv.getSize() << endl;
	cout << "videoIn = "<< boolalpha << htv.getVideoIn() << endl;// boolalpha = 0 대신 false, 1 대신 true를 출력한다
	cout << "IP = " << htv.getIpAddr() << endl;
}
