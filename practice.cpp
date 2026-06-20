//#include <iostream>
//
//using namespace std;
//
//struct point {
//    int x;
//    int y;
//};
//struct fraction {
//    int num;
//    int den;
//};
//struct WashingMachine {
//    char company[20];
//    char color[20];
//
//    int width;
//    int length;
//    int height;
//
//    int power;
//    int speed;
//    int temp;
//};
//struct Animal {
//    char name[20];
//    char type[20];
//    char nick[20];
//};
//union Number {
//    int s;
//    unsigned int u;
//};
//struct Student {
//    char name[40];
//
//    unsigned m1 : 1;
//    unsigned m2 : 1;
//    unsigned m3 : 1;
//    unsigned m4 : 1;
//    unsigned m5 : 1;
//    unsigned m6 : 1;
//    unsigned m7 : 1;
//    unsigned m8 : 1;
//    unsigned m9 : 1;
//    unsigned m10 : 1;
//};
//
//int distance(point a, point b);
//void voice(Animal a);
//
//int main() {
    // task 1
    /*
    point A = { 2, 3 };
    point B = { 5, 7 };

    cout << distance(A, B);
    */
    // task 2
    /*
    fraction a = { 1, 3 };
    fraction b = { 5, 8 };
    fraction c;

    c.num = a.num * b.den + b.num * a.den;
    c.den = a.den * b.den;

    cout << c.num << "/" << c.den;
    */
    // task 3
    /*
    WashingMachine w = {"Samasung", "snow-white", 50, 45, 65, 2500, 14400, 90 };

    cout << w.company << endl;
    cout << w.color << endl;
    */

    // task 4
    /*
    Animal a = { "Home", "Cat", "Murchik" };

    cout << a.name << endl;
    cout << a.type << endl;
    cout << a.nick << endl;

    voice(a);
    */
    // task 5
    /*
    Number n;

    n.s = -10;

    cout << n.s << endl;
    cout << n.u << endl;
    */
    // task 6 
    /*
    Student s = { "Lev Slesarev" ,1,1,1,1,1,1,0,1,1,1 };

    cout << s.name << endl;

    cout << s.m1 << ' ' 
        << s.m2 << ' '
        << s.m3 << ' '
        << s.m4 << ' '
        << s.m5 << ' '
        << s.m6 << ' '
        << s.m7 << ' '
        << s.m8 << ' '
        << s.m9 << ' '
        << s.m10 << ' ';
     */
//}
//
//int distance(point a, point b) {
//    int dx = a.x - b.x;
//    int dy = a.y - b.y;
//
//    return dx * dx + dy * dy;
//}
//void voice(Animal a) {
//    cout << "The creature gives a voice" << endl;
//}