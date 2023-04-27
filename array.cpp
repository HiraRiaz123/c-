#include <iostream>
#include <algorithm>
using namespace std;
void input_numbers()
{
    int i, arr[5], sum = 0, avg;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter a number";
        cin >> arr[i];
    }
    cout << "Numbers in array are" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
        sum = sum + arr[i];
    }
    cout << endl;
    cout << "Numbers in array are also access as" << endl;
    cout << arr[1] << "\t";
    cout << arr[0] << "\t";
    cout << arr[2] << "\t";
    cout << arr[3] << "\t";
    cout << arr[4] << "\t" << endl;
    avg = sum / 5;
    cout << "Sum is"
         << "\t" << sum << endl;
    cout << "Average is"
         << "\t" << avg << endl;
}
void total_days()
{
    int days, months, total;
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Enter days and months:" << endl;
    cin >> days >> months;
    total = days;
    if ((days >= 1 && days <= 31) && (months >= 1 && months <= 12))
    {
        for (int i = 0; i < months - 1; i++)
        {
            total = total + days_per_month[i];
        }
        cout << "Number of days in this year till this date are: " << total;
    }
    else
    {
        cout << "Invalid days or months";
    }
}
void age()
{
    int age[150], a, count = 0, i;
    cout << "Enter the number of persons required: ";
    cin >> a;
    cout << "Enter ages of " << a << " persons:" << endl;
    for (i = 0; i < a; i++)
    {
        cin >> age[i];
        if (age[i] >= 50 && age[i] <= 60)
        {
            count++;
        }
    }
    cout << count << " persons are between 50 and 60";
}
void size_of()
{
    int arr[150] = {23, 5, 6, 4, 4};
    int age[5] = {34, 6, 45, 98, 45};
    int *p = arr, count = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << age[i] << "\t";
    }
    cout << endl;
    // using sizeof() opeartor
    cout << (sizeof(arr) / sizeof(arr[0])) << endl;
    cout << (sizeof(age) / sizeof(age[0])) << endl;
    // using pointer arithmetic
    cout << *(&arr + 1) - arr << endl;
    cout << *(&age + 1) - age << endl;
    // using count function to find total values exist in array
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + count) << "\t";
        count++;
    }
    cout << endl;
    cout << "Total values in array are " << count;
}
void while_loop()
{
    int marks[4] = {34, 56, 89, 23};
    int i = 0;
    // while (i <= 3)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }
    // do
    // {
    //     cout << marks[i] << "\t";
    //     i++;
    // } while (i <= 3);
    for (int i = 0; i <= 3; i++)
    {
        cout << marks[i] << "\t";
    }
}
void reverse_array()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int arr[n];
    int i;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Input values are:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "Array values in reverse order:" << endl;
    for (int j = n; j > 0; j--)
    {
        cout << arr[j] << "\t";
    }
}
void sum_total()
{
    int size = 5, i, total = 0;
    int num[size], sq[size], cube[size], sum[size];
    for (i = 0; i < size; i++)
    {
        num[i] = i;
        sq[i] = i * i;
        cube[i] = i * i * i;
        sum[i] = num[i] + sq[i] + cube[i];
    }
    cout << "Numbers:"
         << "\t";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << "\t";
    }
    cout << endl;
    cout << "Squares: "
         << "\t";
    for (int i = 0; i < size; i++)
    {
        cout << sq[i] << "\t";
    }
    cout << endl;
    cout << "Cubes: "
         << "\t\t";
    for (int i = 0; i < size; i++)
    {
        cout << cube[i] << "\t";
    }
    cout << endl;
    cout << "Sums: "
         << "\t\t";
    for (int i = 0; i < size; i++)
    {
        cout << sum[i] << "\t";
    }
    for (int i = 0; i < size; i++)
    {
        total = total + sum[i];
    }
    cout << endl;
    cout << "Grand total:" << total;
}
void max()
{
    int a = 10, i, max = 0, min = 0;
    int arr[a];
    for (i = 0; i < a; i++)
    {
        cout << "Enter a number:";
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < a; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Maximum number in array is: " << max << endl;
    cout << "Minimum number in array is: " << min << endl;
}
void sequential_search()
{
    int n, size, i, loc = -1;
    cout << "how many numbers are in a array?" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter numbers:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "Sequential search number in array?" << endl;
    cin >> n;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == n)
            loc = i;
    }
    if (loc == -1)
    {
        cout << n << " not exist in array" << endl;
    }
    else
    {
        cout << n << " exist in array at index " << loc << endl;
    }
    cout << endl;
}
void binary_search()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n, loc = -1, start = 0, end = 9, mid;
    cout << "Binary Search number in array?" << endl;
    cin >> n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == n)
        {
            loc = mid;
            break;
        }
        else if (n < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (loc == -1)
    {
        cout << n << " not exist in array" << endl;
    }
    else
    {
        cout << n << " exist in array at index " << loc << endl;
    }
}
void selection_sort()
{
    int size, n, i, j, min, temp;
    cout << "size of array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter values in array for selection sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in orignal order is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "Selection sorted array is:" << endl;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
void bubble_sort()
{
    int size, n, i, j, min, temp;
    cout << "size of array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter values in array for bubble sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in orignal order is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Bubble sorted array in assending order is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "Bubble sorted array in decending order is:" << endl;
    for (int j = size - 1; j >= 0; j--)
    {
        cout << arr[j] << "\t";
    }
}
void insertion_sort()
{

    int size, n, i, j;
    cout << "size of array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter values in array for insertion sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in orignal order is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    cout << endl;
    cout << "Insertion sorted array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
void sum_2d()
{
    int r1, r2, c1, c2, avg, totalsum = 0;
    cout << "Enter number of rows and columns of 1st matrix:" << endl;
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of 2nd matrix:" << endl;
    cin >> r2 >> c2;
    int a[r1][c1], b[r2][c2], sum[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter " << i << " *" << j << " element of first matrix:";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter " << i << " *" << j << " element of 2nd matrix:";
            cin >> b[i][j];
        }
    }
    cout << endl;
    cout << "1st matrix is:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "2nd matrix is:" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sum of 1st and 2nd matrix is:" << endl;
    if ((r1 != r2) || (c1 != c2))
    {
        cout << "Matrices addition is not possible because of wrong order.";
    }
    else
    {
        int i, j;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                cout << sum[i][j] << "\t";
            }
            cout << endl;
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                totalsum = totalsum + sum[i][j];
            }
        }
        cout << endl;
        avg = totalsum / (i * j);
        cout << "Total sum is " << totalsum << endl;
        cout << "Average is " << avg << endl;
    }
}
void sum_rc()
{
    int arr[3][4] = {2, 3, 4, 5, 3, 4, 6, 1, 1, 3, 5, 2}, rowsum = 0, colsum = 0, diasum = 0, remsum = 0, totalsum = 0;
    // row sum
    for (int i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
            rowsum = rowsum + arr[i][j];
        }
        cout << rowsum;
        rowsum = 0;
        cout << endl;
    }
    // column sum
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            colsum = colsum + arr[i][j];
        }
        cout << colsum << "\t";
        colsum = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 4; j++)
        {
            // diagonal sum
            if (i == j)
            {
                diasum = diasum + arr[i][j];
            }
            // remaining portion sum
            else
            {
                remsum = remsum + arr[i][j];
            }
            // total matrix sum
            totalsum = totalsum + arr[i][j];
        }
    }
    cout << endl;
    cout << diasum << endl;
    cout << remsum << endl;
    cout << totalsum << endl;
}
int main()
{
    // input_numbers();
    // total_days();
    // age();
    // size_of();
    // while_loop();
    // reverse_array();
    // sum_total();
    // max();
    // sequential_search();
    // binary_search();
    // selection_sort();
    // bubble_sort();
    // insertion_sort();
    // sum_2d();
    // sum_rc();
    return 0;
}