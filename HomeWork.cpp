#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

struct Car {
    double length;
    double clearance;
    double engineVolume;
    int power;
    double wheelDiameter;
    char color[20];
    char transmission[20];
};
struct Book {
    char title[50];
    char author[50];
    char publisher[50];
    char genre[30];
};
union CarNumber {
    int digits;
    char word[9];
};
struct Machine {
    char color[20];
    char model[30];
    bool isWordNumber;
    CarNumber number;
};
union EntityFeature {
    double flySpeed;
    bool isArtiodactyl;
    int iq;
};
struct LivingEntity {
    double speed;
    int type;
    char color[20];
    EntityFeature feature;
};
struct Student {
    char surname[40];
    char group[20];
    int grades[5];
};
struct Date {
    int day;
    int month;
    int year;
};
struct Man {
    char surname[40];
    char name[40];
    int age;
    Date birthday;
};

bool isEqual(const char* str1, const char* str2);
void copyStr(char* dest, const char* src);
bool isGreater(const char* str1, const char* str2);
Complex addComplex(Complex a, Complex b);
Complex subComplex(Complex a, Complex b);
Complex mulComplex(Complex a, Complex b);
Complex divComplex(Complex a, Complex b);
void showCar(Car c);
void printMachine(Machine m);
void printEntity(LivingEntity e);

int main() {
    // task 1
    /*
    Complex c1 = { 4.0, 5.0 };
    Complex c2 = { 2.0, -3.0 };
    Complex resSum = addComplex(c1, c2);
    Complex resMul = mulComplex(c1, c2);
    */

    // task 2
    /*
    Car car1 = { 4.5, 15.0, 2.0, 150, 17.0, "Black", "Automatic" };
    if (car1.power > 100) {
        showCar(car1);
    }
    */
    // task 3
    /*
    Book library[10];
    copyStr(library[0].title, "C++ Basics");
    copyStr(library[0].author, "Prata");
    copyStr(library[1].title, "Alpha");
    copyStr(library[1].author, "King");

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (isGreater(library[j].title, library[j + 1].title)) {
                Book temp = library[j];
                library[j] = library[j + 1];
                library[j + 1] = temp;
            }
        }
    }
    */
    // task 4
    /*
    Machine garage[10];
    garage[0].isWordNumber = false;
    garage[0].number.digits = 77777;
    copyStr(garage[0].model, "Audi");
    copyStr(garage[0].color, "Red");

    garage[1].isWordNumber = true;
    copyStr(garage[1].number.word, "BOSS");
    copyStr(garage[1].model, "BMW");
    copyStr(garage[1].color, "Black");
    */
    // task 5
    /*
    LivingEntity world[10];
    world[0].type = 3;
    world[0].speed = 5.5;
    copyStr(world[0].color, "White");
    world[0].feature.iq = 120;
    */
    // task 6
    /*
    int studSize = 2;
    Student* students = new Student[studSize];
    copyStr(students[0].surname, "Ivanov");
    students[0].grades[0] = 5; students[0].grades[1] = 5; students[0].grades[2] = 5; students[0].grades[3] = 4; students[0].grades[4] = 5;

    copyStr(students[1].surname, "Petrov");
    students[1].grades[0] = 2; students[1].grades[1] = 3; students[1].grades[2] = 2; students[1].grades[3] = 5; students[1].grades[4] = 3;

    int newStudSize = studSize + 1;
    Student* tempStuds = new Student[newStudSize];
    for (int i = 0; i < studSize; i++) {
        tempStuds[i] = students[i];
    }
    delete[] students;
    students = tempStuds;
    studSize = newStudSize;

    for (int i = 0; i < studSize - 1; i++) {
        int excelentCount = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] == 5) excelentCount++;
        }
        if (excelentCount >= 4) {
            cout << "Excelent student: " << students[i].surname << endl;
        }
    }
    delete[] students;
    */
    // task 7
    int menSize = 2;
    Man* men = new Man[menSize];
    copyStr(men[0].surname, "Sidorov");
    copyStr(men[0].name, "Oleg");
    men[0].birthday = { 15, 6, 1995 };

    copyStr(men[1].surname, "Abramov");
    copyStr(men[1].name, "Antony");
    men[1].birthday = { 20, 6, 1998 };

    for (int i = 0; i < menSize - 1; i++) {
        for (int j = 0; j < menSize - 1 - i; j++) {
            if (isGreater(men[j].surname, men[j + 1].surname)) {
                Man temp = men[j];
                men[j] = men[j + 1];
                men[j + 1] = temp;
            }
        }
    }

    int currentMonth = 6;
    for (int i = 0; i < menSize; i++) {
        if (men[i].birthday.month == currentMonth) {
            cout << "Birthday boy: " << men[i].surname << " " << men[i].birthday.day << "." << men[i].birthday.month << endl;
        }
    }

    delete[] men;
}

bool isEqual(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return false;
        i++;
    }
    return str1[i] == str2[i];
}
void copyStr(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
bool isGreater(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) return true;
        if (str1[i] < str2[i]) return false;
        i++;
    }
    return str1[i] != '\0';
}
Complex addComplex(Complex a, Complex b) {
    return { a.real + b.real, a.imag + b.imag };
}
Complex subComplex(Complex a, Complex b) {
    return { a.real - b.real, a.imag - b.imag };
}
Complex mulComplex(Complex a, Complex b) {
    return { a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real };
}
Complex divComplex(Complex a, Complex b) {
    double denom = b.real * b.real + b.imag * b.imag;
    return { (a.real * b.real + a.imag * b.imag) / denom, (a.imag * b.real - a.real * b.imag) / denom };
}
void showCar(Car c) {
    cout << c.color << " | Engine: " << c.engineVolume << "L, " << c.power << "hp" << endl;
}
void printMachine(Machine m) {
    cout << m.model << " (" << m.color << ") Num: ";
    if (m.isWordNumber) cout << m.number.word;
    else cout << m.number.digits;
    cout << endl;
}
void printEntity(LivingEntity e) {
    cout << "Type: " << e.type << " Speed: " << e.speed << " Color: " << e.color;
    if (e.type == 1) cout << " Fly Speed: " << e.feature.flySpeed;
    else if (e.type == 2) cout << " Artiodactyl: " << (e.feature.isArtiodactyl ? "Yes" : "No");
    else if (e.type == 3) cout << " IQ: " << e.feature.iq;
    cout << endl;
}