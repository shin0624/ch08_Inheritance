#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class TV {
	int size;//��ũ�� ũ��
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }//�Ű������� ���� �⺻ Ŭ���� ������
	int getSize() { return size; }//size�� �����ϴ� �޼���
};

class WideTV : public TV{//TV�� ��ӹ޴� WIDETV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) { this->videoIn = videoIn; }//wideTVȣ�� �� �⺻ Ŭ������ �Ű������� ���� TV �����ڿ� �� ����
	bool getVideoIn() { return videoIn; }
};

class SmartTV :public WideTV {//wideTV�� ��ӹ޴� SmartTV. wideTV�� �θ�Ŭ������ TV Ŭ������ ������� ���� ����
	string ipAddr;// ip�ּ�
public:
	SmartTV(string ipAddr, int size) :WideTV(size, true) { this->ipAddr = ipAddr; }//smartTVȣ�� �� wideTV �����ڿ� �� ����
	string getIpAddr() { return ipAddr; }
	
};
int main() {
	//32��ġ ũ�⿡ 192.0.0.1�� ���ͳ� �ּҸ� ������ ����Ʈ tv��ü�� ����.
	SmartTV htv("192.0.0.1", 32);

	cout << "size = " << htv.getSize() << endl;
	cout << "videoIn = "<< boolalpha << htv.getVideoIn() << endl;// boolalpha = 0 ��� false, 1 ��� true�� ����Ѵ�
	cout << "IP = " << htv.getIpAddr() << endl;
}