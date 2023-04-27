#include <iostream>
#include <iomanip>
#define PI 3.14
using namespace std;
void info()
{
    // #include <iostream>    system header file
    // #include "prime_no.cpp" user-defined header file
    // #include <iomanip> manipulator used to formating the output
    // #define PI 3.14      define a constant
    // << insertion operator
    // >> extraction operator
    //:: scope resolution
}
int glo = 8, a = 4, b = 8; // global variable

void variables()
{
    bool b = true; // return 1 for true and 0 for false
    float r;
    char c = 'H';
    cout << "Enter radius:";
    cin >> r;
    cout << "Value of float r is:" << r << endl;
    cout << "Value of bool b is:" << b << endl;
    cout << "Value of char c is:" << c << endl;
    cout << "Area is: " << 3 * PI * r << endl;
}
void global_variables()
{
    cout << "Global variable value from sum fn:" << glo << endl;
}
void local_variables()
{
    int glo = 5; // this is local variablw with same name of global variable.preference given to local.
    glo = 67;
    cout << "Local variable value with same name as global:" << glo << endl;
    cout << "Print value of global inside function:" << ::glo << endl;
}
void literals_data_type()
{
    float f = 5.6; // by default take as double
    long double ld = 5.6;
    cout << "Values of float and double" << endl;
    cout << "size of 5.6 is: " << sizeof(5.6) << endl;
    cout << "size of 5.6f is: " << sizeof(5.6f) << endl;
    cout << "size of 5.6F is: " << sizeof(5.6F) << endl;
    cout << "size of 5.6l is: " << sizeof(5.6l) << endl;
    cout << "size of 5.6L is: " << sizeof(5.6L) << endl;
}
void arithmetic_operators()
{
    cout << "Arithmetic operators" << endl;
    cout << "Value of a+b is: " << a + b << endl;
    cout << "Value of a-b is:" << a - b << endl;
    cout << "Value of a*b is: " << a * b << endl;
    cout << "Value of a/b is: " << a / b << endl;
    cout << "Value of a%b is: " << a % b << endl;
    cout << "Value of a++ is: " << a++ << endl;
    cout << "Value of ++a is: " << ++a << endl;
    cout << "Value of a-- is: " << a-- << endl;
    cout << "Value of --a is: " << --a << endl;
    cout << "Value of b++ is: " << b++ << endl;
    cout << "Value of ++b is: " << ++b << endl;
    cout << "Value of b-- is: " << b-- << endl;
    cout << "Value of --b is: " << --b << endl;
}
void comparision_operators()
{
    cout << "Comparision operators" << endl;
    cout << "Value of a==b is: " << (a == b) << endl;
    cout << "Value of a!=b is: " << (a != b) << endl;
    cout << "Value of a>b is: " << (a > b) << endl;
    cout << "Value of a<b is: " << (a < b) << endl;
    cout << "Value of a>=b is: " << (a >= b) << endl;
    cout << "Value of a<=b is: " << (a <= b) << endl;
}
void assignment_operators()
{
    int assgn = 0; // use to asign values
}
void logical_operators()
{
    cout << "Logical operators" << endl;
    cout << "Value of (a==b) && (a < b) is: " << ((a == b) && (a < b)) << endl;
    cout << "Value of (a==b) || (a < b) is: " << ((a == b) || (a < b)) << endl;
    cout << "Value of !(a==b)  is: " << (!(a == b)) << endl;
}
void reference_variable()
{
    // variable ek h us k name do hai x bi wohi ha jo y ha (Meerab->Shahzadi->Manno (names are different but person is one/same))
    int x = 45;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
}
void typecasting()
{
    // chnage the datatype of the variable
    int a = 5;
    float t = 2.898;
    int h = int(t);
    char b;
    cout << "Enter the letter" << endl;
    cin >> b;
    int num = b;
    cout << "ASCII code of " << b << " is " << num << endl;
    cout << t << endl;
    cout << int(t) << endl;
    cout << (int)t << endl;
    cout << h << endl;
    cout << (a + t) << endl;
    cout << (a + int(t)) << endl;
    cout << (a + (int)t) << endl;
    cout << (a + h) << endl;
}
void constants()
{
    // its value is not change futher in function if trying it will give error
    const int a = 5;
    // a = 95;
    cout << a << endl;
}
void manipulator()
{
    // endl,setw
    int a = 365;
    cout << a << endl;
    cout << setw(4) << a << endl;
    cout << setw(8) << a << endl;
    cout << setw(12) << a << endl;
    cout << setw(16) << a << endl;
}
void oprator_precedence()
{
    int a = 4, b = 3, c = 2, d = 5;
    int e = (a + (5 * c));
    int f = ((((((a * 5) / e) - (100 % e)) + b) - c) + d);
    //
    cout << e << endl;
    cout << f << endl;
}
void divide()
{
    int div, dis, q, r;
    cout << "Enter divider $ divisor" << endl;
    cin >> div >> dis;
    q = div / dis;
    r = div % dis;
    cout << "Quotient " << q << endl;
    cout << "Reminder " << r << endl;
}
void swapping()
{
    int a, b, temp;
    cout << "Enter numbers" << endl;
    cin >> a >> b;
    cout << "Before swapping=> " << a << " " << b << endl;
    // *********first method**********
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping 1st mehtod=> " << a << " " << b << endl;
    // *********second method**********
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping 2nd mehtod=> " << a << " " << b << endl;
}
void reverse_no()
{
    // int a, b, c, d, n;
    // cout << "Enter 5-digit number" << endl;
    // cin >> n;
    // a = n / 10000;
    // n = n % 10000;
    // b = n / 1000;
    // n = n % 1000;
    // c = n / 100;
    // n = n % 100;
    // d = n / 10;
    // n = n % 10;
    // cout << "Reverse number is " << n << d << c << b << a << endl;
}
void calc(int price, int tax)
{
    int total;
    total = price + (price * tax);
    cout << total;
}

int main()
{
    // variables();
    // global_variables();
    // local_variables();
    // literals_data_type();
    // arithmetic_operators();
    // comparision_operators();
    // logical_operators();
    // reference_variable();
    // typecasting();
    // constants();
    // manipulator();
    // oprator_precedence();
    // divide();
    // swapping();
    // reverse_no();
    calc(4,8);
    return 0;
}