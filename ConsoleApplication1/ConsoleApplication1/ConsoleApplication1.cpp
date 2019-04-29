// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class Fan
private:
	int year;
	int month;
	int day;
public:
	CFan();
	CFan(int year, int momth, int day);
	void exportCMyDate();
	int setMyDate();
};
CFan::CFan() {
	int year = 2019;
	int month = 1;
	int day = 1;
}
CFan::CFan(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

int main()
{
    return 0;
}

