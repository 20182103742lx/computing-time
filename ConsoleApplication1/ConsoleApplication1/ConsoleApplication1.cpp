// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CLing{
private:
	int year;
	int month;
	int day;
public:
	CLing();
	CLing(int year, int month, int day);
	void exportCLing();
	int setLing(int y, int m, int d);
};
CLing::CLing() {
	int year = 2019;
	int month = 1;
	int day = 1;
}
CLing::CLing(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
int CLing::setLing(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
	return 0;
}
void CLing::exportCLing() {
	cout << year << "年" << month << "月" << day << "日" << endl;
}

int main()
{
	CLing od;
	od.setLing(2019,4,29);
		od.exportCLing();
    return 0;
}

