//#include <iostream>
//
//using namespace std;
//
//enum Weekdays {
//	Mon = 1, Tue, Wen, Sat 
//};
//
//struct date {
//	int day;
//	int month;
//	int year;
//	Weekdays weekday;
//	char month_name[15];
//};
//
//struct person {
//	char* firstName;
//	char* secondName;
//	char* email;
//	date birthDate;
//};
//
//void printDate(date dateToPrint) {
//	cout << dateToPrint.day << '.'
//		<< dateToPrint.month 
//		<< '.' << dateToPrint.year 
//		<< " -- " << dateToPrint.weekday
//		<< ' ' << dateToPrint.month_name;
//}
//
//struct fieldbyte {
//	unsigned char field1 : 1;
//	unsigned char field2 : 3;
//	unsigned char field3 : 4;
//
//};
//
//union Data {
//	char c;
//	bool b;
//	int i;
//};
//
//int main() {
//
//	cout << sizeof(Data) << "bytes" << endl;
//
//	Data b = { 0 };
//
//	cout << b.c << ' ' << b.c << ' ' << b.i << ' ' << endl;
//
//
//	date today = { 20, 06, 2026, Sat, "June" };
//
//
//
//	printDate(today);
//
//	date* datePtr = &today;
//	cout << endl;
//
//	//cout << (*datePtr).day;
//	cout << datePtr->day;
//
//	date copy = today;
//
//	today.day++;
//	printDate(today);
//	cout << endl;
//	printDate(copy);
//}
//
