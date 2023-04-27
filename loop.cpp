#include <iostream>
#include <iomanip>
using namespace std;
void prime_number()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    int n = 2;
    if (a >= 2)
    {
        while (n < a)
        {
            int div = 2;
            while (div < n)
            {
                if (n % div == 0)
                {
                    n++;
                }
                div++;
            }
            cout << n << endl;
            n++;
        }
    }
    else
    {
        cout << "No prime number exist";
    }
}
void check_prime()
{
    int i, n;
    cout << "Enter number" << endl;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " not prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << i << " prime";
    }
}
void two_number_prime()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    bool is_prime;
    if (a >= b)
    {
        cout << "Wrong Input";
    }
    while (a < b)
    {
        if ((a == 0 || a == 1) && (b == 0 || b == 1))
        {
            is_prime = false;
            cout << "No prime numbers found";
        }
        for (int i = 2; i < a; i++)
        {
            is_prime = true;
            if (a % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << a << ",";
        }
        a++;
    }
}
void table()
{
    int a;
    cout << "Enter number:\n";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            // break; //8 vli value sy nichy kuch b print ni ho gha
            continue; // 8 vli value print ni ho ghi
        }
        cout << a * i << endl;
    }
}
void sum()
{
    int a;
    cout << "Enter number:\n";
    cin >> a;
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}
void positive_no()
{
    int a;
    cout << "Enter number:\n";
    cin >> a;
    while (a > 0)
    {
        cout << a << endl;
        cin >> a;
    }
    if (a < 0)
    {
        cout << "negative number entered";
    }
}
void skip_no()
{
    for (int i = 0; i <= 10; i++)
    {
        if ((i % 3) == 0)
        {
            continue;
        }
        cout << i << endl;
    }
}
void total_sum()
{
    int a;
    int b, c = 0;
    cout << "Enter number\n";
    cin >> a;
    while (a != 0)
    {
        b = a % 10;
        if (b == 0)
        {
            c = c + a;
        }
        else
        {
            c = c + b;
            a = a / 10;
        }
    }
    cout << c;
}
void factorial()
{
    int a, b, c;
    cout << "Enter number\n";
    cin >> a;
    b = 1;
    c = 1;
    while (c <= a)
    {
        b = b * c;
        c++;
    }
    cout << b << "\t";
}
void fractional_sum()
{
    float a = 1, b = 2;
    while (b <= 100)
    {
        a = a + (1 / b);
        b = b + 2;
    }
    cout << a << "\t";
}
void odd_even()
{
    int a, evensum = 0, oddsum = 0;
    cout << "Enter number\n";
    cin >> a;
    while (a != 0)
    {
        if (a % 2 == 0)
        {
            evensum = evensum + a;
        }
        else
        {
            oddsum = oddsum + a;
        }
        a--;
    }
    cout << evensum << endl;
    cout << oddsum << endl;
}
void avg_max_min()
{
    float a, count, sum = 0, min, max, avg;
    cout << "Enter number\n";
    cin >> a;
    count = 1;
    max = a;
    min = a;
    while (a >= 0)
    {
        sum = sum + a;
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
        cout << "Enter number\n";
        cin >> a;
        if (a >= 0)
        {

            count++;
        }
    }
    avg = sum / count;
    cout << "total number entered are " << count << endl;
    cout << "average " << avg << endl;
    cout << "maximum " << max << endl;
    cout << "minimum " << min << endl;
}
void multiple_3and5()
{
    int t, num = 1, sum = 0;
    cout << "Enter number" << endl;
    cin >> t;

    for (int i = 1; i < t; ++i)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            sum = sum + num;
        }
        num++;
    }
    cout << sum;
}
void fibonacci()
{
    int a = 0, b = 1, next = 1, n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << a << "\t" << b;
    for (int i = 3; i <= n; i++)
    {
        next = a + b;
        cout << "\t" << next;
        a = b;
        b = next;
    }
}
void do_while()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    do
    {
        cout << a << endl;
        a--;
    } while (a >= 1);
}
void raise_to_power()
{
    int a, b;
    cout << "Enter numbers" << endl;
    cin >> a >> b;
    int c = 1, r = 1;
    do
    {
        r = r * a;
        c++;
    } while (c <= b);
    cout << r;
}
void pattern1()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    for (int i = a; i >= 1; i--)

    {
        for (int j = 1; j < i; j++)
        {
            cout << "*"
                 << "\t";
            ;
        }
        cout << endl;
    }
}
void pattern2()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    for (int i = 1; i <= a; i++)

    {
        for (int j = 1; j <= a; j++)
        {
            cout << "*"
                 << "\t";
            ;
        }
        cout << endl;
    }
}
void pattern3()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    for (int i = a; i >= 1; i--)

    {
        for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4()
{
    int n;
    cout << "enter number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern5()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    for (int i = a; i >= 1; i--)

    {
        for (int j = i; j >= 1; j--)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
}
void pattern6()
{
    int n;
    cout << "enter number";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << "\n";
    }
}
void pattern7()
{
    int a;
    cout << "enter number";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << setw(2) << i;
        }
        cout << "\n";
    }
}
void pattern8()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if ((j == i) || (i + j == 10))
            {
                cout << "&";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern9()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if ((j == i) || (i + j == 10))
            {
                cout << "&";
            }
            else if ((i < j) && ((i + j <= 10)))
            {
                cout << "&";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern10()
{
    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= 9; j++)
        {
            if ((j == i) || (i + j == 10) || (i == 1))
            {
                cout << "&";
            }
            // else if ((i < j) && ((i + j <= 10)))
            // {
            //     cout << "&";
            // }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern11()
{
    int row, col;
    cout << "Enter rows and columns";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i == 1) || (i == row) || (j == 1) || (j == col))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void pattern12()
{
    for (int i = 1; i <= 7; i++)
    {

        for (int j = 1; j <= 7 + 1 - i; j++)
        {
            cout << j;
        }
        for (int s = i; s > 1; s--)
        {
            cout << " ";
        }

        for (int k = 6; k >= 1; k--)
        {
            if (k <= 7 + 1 - i)
                cout << k;
        }
        cout << endl;
    }
    // for (int i = 6; i >= 1; i--)
    // {
    //     cout << i;
    // }
}
void check()
{
    int a, b;
    cout << "enter no";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        for (int div = 2; div < a / 2; div++)
        {
            if (a % div == 0)
            {
                a++;
            }
        }
        cout << a << endl;
        a++;
    }
}
int main()
{
    // prime_number();
    // check_prime();
    // two_number_prime();
    // table();
    // sum();
    // positive_no();
    // skip_no();
    // total_sum();
    // factorial();
    // fractional_sum();
    // odd_even();
    // avg_max_min();
    // multiple_3and5();
    // fibonacci();
    // do_while();
    // raise_to_power();
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern12();
    // check();
}
