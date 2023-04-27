#include <iostream>
#include <math.h>
using namespace std;
// control structures=> sequence, selection, repetition(loop),functional call
void if_conditions()
{
    // *********find max,min numbers***********
    int a, b, c, max, min;
    cout << "Enter marks" << endl;
    cin >> a >> b >> c;
    // *****************first method**********
    max = min = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    cout << "Maximun number is " << max << endl;
    cout << "Minimum number is " << min << endl;
}
void if_else_conditions()
{
    //******grater than numbers then show message*******
    int a, b;
    cout << "Enter marks" << endl;
    cin >> a >> b;
    // if (a == b)
    // if (a * a == b)
    if (a >= 40)
    {
        cout << "Congratulations! You have passed";
    }
    else
    {
        cout << "You have failed";
    }
    // ****************even odd number****************
    if (a % 2 == 0)
    {
        cout << a << "is even" << endl;
    }
    else
    {
        cout << a << "is odd" << endl;
    }
}
void if_elseif_conditions()
{
    //*********performing opertion on input numbers*********
    int a, net;
    cout << "Enter number" << endl;
    cin >> a;
    if (a > 20000)
    {
        net = a - (a * 7 / 100);
    }
    else if ((a > 10000) && (a < 20000))
    {
        net = a - 1000;
    }
    else
    {
        net = a;
    }
    cout << "Net salary is " << net << endl;
}
void nested_if()
{
    //*****************min number*****************
    int a, b, c;
    cout << "Enter numbers" << endl;
    cin >> a >> b >> c;
    cout << a << "  " << b << "  " << c << endl;
    if (a < b)
    {
        if (a < c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (b < c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
    // ****************equal numbers or not****************
    if (a == b)
    {
        if (a == c)
        {
            cout << "equal";
        }
        else
        {
            cout << "not equal";
        }
    }
    else
    {
        cout << "not equal";
    }
}
void compound()
{
    char a, b, c, max, min, net;
    cout << "Enter numbers" << endl;
    cin >> a >> b >> c;
    cout << a << "  " << b << "  " << c << endl;
    // *****************2nd method**********
    if ((a < b) && (a < c)) // for min value
        if ((a > b) && (a > c))
        {
            cout << "Maximun number is " << a << endl;
            cout << "Minimum number is " << a << endl;
        }
        else if ((b > a) && (b > c))
        {
            cout << "Maximun number is " << b << endl;
        }
        else
        {
            cout << "Maximun number is " << c << endl;
        }
    // **********letter is vowel,capital,small,symbol,digit****************
    if ((a == 'A') || (a == 'a') || (a == 'E') || (a == 'e') || (a == 'I') || (a == 'i') || (a == 'O') || (a == 'o') || (a == 'U') || (a == 'u'))
    {
        cout << a << " is vowel letter";
    }
    else
    {
        if ((a >= 'A') && (a <= 'Z'))
        {
            cout << a << " is capital letter";
        }
        else if ((a >= 'a') && (a <= 'z'))
        {
            cout << a << " is small letter";
        }
        else if ((a >= '0') && (a <= '9'))
        {
            cout << a << " is a digit";
        }
        else
        {
            cout << a << " is a symbol";
        }
    }
}
void switch_case()
{
    int a;
    cout << "Enter number:" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Friday";
        break;
    case 2:
        cout << "Saturday";
        break;

    case 3:
        cout << "Sunday";
        break;

    case 4:
        cout << "Monday";
        break;

    case 5:
        cout << "Tuesday";
        break;

    case 6:
        cout << "Wednesday";
        break;

    case 7:
        cout << "Thursday";
        break;
    default:
        cout << "Invalid number";
        break;
    }
}
void conditional_operator()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    cout << ((a > 40) ? "Pass" : "Fail") << endl;
    //*******divisible or not**********
    cout << (((a % 3) == 0) ? "Divisible" : "Not divisible");
}
void goto_statement()
{
    int n = 1;
loop:
    cout << n << " C++" << endl;
    n++;
    if (n <= 10)
        goto loop;
    cout << "End of program";
}
void common_divisor()
{
    //*******a is common divisible or not*******
    int a, b, c;
    cout << "Enter three numbers:" << endl;
    cin >> a >> b >> c;
    if (a != 0)
    {
        if ((b % a == 0) && (c % a == 0))
        {
            cout << "a is divisor of b and c" << endl;
        }
        else
        {
            cout << "a is not divisor of b and c";
        }
    }
    else
    {
        cout << "a is zero";
    }
}
void check_status()
{
    int a = 400, b = 275;
    char status;
    cout << "Enter status:" << endl;
    cin >> status;
    if ((status == 's') || (status == 'S'))
    {
        cout << a;
    }
    else if ((status == 'j') || (status == 'J'))
    {
        cout << b;
    }
    else
    {
        cout << "Invalid Status";
    }
}
void leap_year()
{
    int y;
    cout << "Enter year:" << endl;
    cin >> y;
    if ((y % 4 == 0) && (y % 100 != 0))
    {
        cout << "Leap year";
    }
    else if ((y % 100 == 0) && (y % 400 == 0))
    {
        cout << "It is a Leap year";
    }
    else
    {
        cout << "Not leap year";
    }
}
void real_numbers()
{
    float a, b, c;
    double x, y;
    cout << "Enter numbers:" << endl;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c >= 0)
    {
        x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        y = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "\nRoots of the equation are " << x << " and " << y;
    }
    else
    {
        cout << "\nSorry the roots are not real";
    }
}
void total_days()
{
    int y, m;
    cout << "Enter a year and month" << endl;
    cin >> y >> m;
    if (m == 1)
    {
        cout << "January " << y << " has 31 days.";
    }
    else if (m == 2)
    {
        if (y % 4 != 0)
        {
            cout << "February " << y << " has 28 days.";
        }
        else
        {
            cout << "February " << y << " has 29 days.";
        }
    }
    else if (m == 3)
    {
        cout << "March " << y << " has 31 days.";
    }
    else if (m == 4)
    {
        cout << "April " << y << " has 30 days.";
    }
    else if (m == 5)
    {
        cout << "May " << y << " has 31 days.";
    }
    else if (m == 6)
    {
        cout << "June " << y << " has 30 days.";
    }
    else if (m == 7)
    {
        cout << "July " << y << " has 31 days.";
    }
    else if (m == 8)
    {
        cout << "August " << y << " has 31 days.";
    }
    else if (m == 9)
    {
        cout << "September " << y << " has 30 days.";
    }
    else if (m == 10)
    {
        cout << "October " << y << " has 31 days.";
    }
    else if (m == 11)
    {
        cout << "November " << y << " has 30 days.";
    }
    else if (m == 12)
    {
        cout << "December " << y << " has 31 days.";
    }
    else
    {
        cout << "The valid input for month is from 1 to 12.";
    }
}
void military_time()
{
    //************1st method***********
    int h, m, s;
    cout << "\nEnter Military Time in hh:mm:ss format : " << endl;
    cin >> h >> m >> s;
    if ((h >= 13 && h <= 24) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        h = h - 12;
        cout << h << ":" << m << ":" << s << "PM" << endl;
    }
    else if ((h > 0 && h <= 12) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        cout << h << ":" << m << ":" << s << "AM" << endl;
    }
    else if ((h == 0) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        h = h + 12;
        cout << h << ":" << m << ":" << s << "AM" << endl;
    }
    else
    {
        cout << "Wrong input.";
    }
    // //************2nd method***********
    // int t, h, m, H;
    // cout << "Enter Military time=";
    // cin >> t;
    // h = t / 100;
    // m = t % 100;
    // if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59))
    // {
    //     if (h > 12)
    //     {
    //         H = h % 12;
    //         cout << "The standard time of" << h << ":" << m << "is=" << H << ":" << m << "PM";
    //     }
    //     else if (h == 0)
    //     {
    //         H = 12;
    //         cout << "The standard time of" << h << ":" << m << "is=" << H << ":" << m << "AM";
    //     }
    //     else
    //     {
    //         H = h;
    //         cout << "The standard time of" << h << ":" << m << "is=" << H << ":" << m << "AM";
    //     }
    // }
    // else
    // {
    //     cout << "wrong input.";
    // }
}
int main()
{
    // if_conditions();
    // if_else_conditions();
    // if_elseif_conditions();
    // nested_if();
    // compound();
    // switch_case();
    // conditional_operator();
    // goto_statement();
    // common_divisor();
    // check_status();
    // leap_year();
    // real_numbers();
    // total_days();
    // military_time();
    return 0;
}
