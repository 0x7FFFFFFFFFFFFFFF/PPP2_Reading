// PPP2_Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

void p60()
{
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "First name is: " << first_name << "!" << endl;
}


void p63()
{
    int a = 3;
    double pi = 3.14;
    string s = "Edde";
    char c = '.';
    bool true_or_false = true; // This is int 1

    cout << a << endl << pi << endl << s << endl << c << endl << true_or_false << endl;
    if (true_or_false == 1)
    {
        cout << "true == 1";
    }
    else
    {
        cout << "true != 1";
    }
}

void p64_version1()
{
    string name;
    int age;
    cout << "Your fucking name: \n";
    cin >> name;
    cout << "Your fucking age: \n";
    cin >> age;
    cout << "You are " << name << ", and you are " << age - 1 << " years old last year." << endl;
}

void p64_version2()
{
    string name;
    int age;
    cout << "Input your fucking name and fucking age (separate with a space): \n";
    cin >> name;
    cin >> age;
    cout << "You are " << name << ", and you are " << age - 1 << " years old last year." << endl;
}

void p64_version3()
{
    string name;
    int age, age2;
    cout << "Input your fucking name and fucking age (separate with a space): \n";
    //读取的每个变量之间的space, tab, newline都是被忽略的
    cin >> name >> age >> age2;
    cout << "You are " << name << ", and you are " << age - 1 << " years old last year." << endl;
    cout << age2 << endl;
}

void p65()
{
    // 如果用户输入内容可能包含空格，那么也许你得把这个输入分成多个变量
    string name1, name2;
    cin >> name1 >> name2;
    cout << "name1 = " << name1 << endl << "name2 = " << name2 << endl;
}

void p64_try_this()
{
    double d;
    int i;
    cin >> d >> i;
    cout << "d = " << d * 10 << endl << "i = " << i * 2 << endl;
}

void p67()
{
    cout << "Type a double: \n";
    double d;
    cin >> d;
    cout << "d = " << d << endl
        << "d*2 = " << d * 2 << endl
        << "d/2 = " << d / 2 << endl
        << "sqrt(d) = " << sqrt(d) << endl
        << "d++ = " << d++ << endl;
}

void p68_1()
{
    string name1, name2;
    cin >> name1 >> name2;
    string name = name1 + ' ' + name2;
    // string name = name1 + " " + name2;  // This works too
    cout << name;
}

void p68_2()
{
    string name1, name2;
    cin >> name1 >> name2;
    cout << "name1 = " << name1 << endl << "name2 = " << name2 << endl;
    if (name1 == name2)
    {
        cout << "That's the same name twice!";
    }
    if (name1 < name2)
    {
        cout << "name1 is alphabetically before name2";
    }
    if (name1 > name2)
    {
        cout << "name1 is alphabetically after name2";
    }
}

void p71()
{
    string previous = "", current;
    while (cin >> current)
    {
        if (current == previous)
        {
            cout << "Duplicate word found: " << current << endl;
        }
        previous = current;
    }
}

void p78_vs2019_doesnt_compile()
{
    // double x;
    // double y = x + 3;
    // double z = y;
    // cout << x << endl << y << endl << z << endl;
}

void p79()
{
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;
    cout << c << ' ' << i1 << ' ' << c2 << '\n';
}

void p80()
{
    int a = 20000;
    char c = a; // try to squeeze a large int into a small char
    int b = c;
    if (a != b) // != means “not equal”
        cout << "oops!: " << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters\n";
}

void p81()
{
    double d = 0;
    while (cin >> d)
    {
        // repeat the statements below
        // as long as we type in numbers
        int i = d; // try to squeeze a double into an int
        char c = i; // try to squeeze an int into a char
        int i2 = c; // get the integer value of the character
        cout << "d==" << d // the original double
            << " i==" << i // converted to int
            << " i2==" << i2 // int value of char
            << " char(" << c << ")\n"; // the char
    }
}

void p83_drill()
{
    string name, friend_name;
    cout << "What's your name?\n";
    cin >> name;
    cout << "Type your friend's name.\n";
    cin >> friend_name;

    char friend_sex = 0;
    cout << "What's the sex of " << friend_name << "? Enter m for male, f for female.\n";
    cin >> friend_sex;

    int age;
    cout << "How old is your friend?\n";
    cin >> age;

    cout << endl;
    cout << "Dear " << name << "," << endl
        << "  How are you? I'm fine. I miss you." << endl
        << "Have you seen " << friend_name << " recently?" << endl
        << "If you see " << friend_name <<
        " recently, please ask " << (friend_sex == 'm' ? "him" : "her") <<
        " to call me" << endl;
    if (age <= 0 || age >= 100)
    {
        simple_error("Your must be kidding!");
    }
    else
    {
        cout << "I heard you just had a birthday and your are " << age << " years old." << endl;
        if (age < 12)
        {
            cout << "Next year you will be " << age + 1 << "." << endl;
        }

        if (age == 17)
        {
            cout << "Next year you will be able to vote." << endl;
        }

        if (age > 70)
        {
            cout << "I hope you are enjoying your retirement." << endl;
        }
    }

    cout << "Yours sincerely,\n\n\n" << name << endl;
}

void p85_2()
{
    double miles;
    cout << "This program converts miles to kilometers.\n\n";
    while (true)
    {
        cout << "Type the number of miles:\n";
        cin >> miles;
        cout << miles << " miles = " << miles * 1.609 << " kilometers. \n\n";
    }
}

void p119_vector_iteration()
{
    vector<int> v1 = {1, 2, 3};
    v1.push_back(4);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " << endl;
    }

    vector<string> v2{"Edde", "Yang"};
    v2.push_back("rocks!");
    for (string s : v2)
    {
        cout << s << " " << endl;
    }
}

void p121()
{
    vector<double> data;
    for (double current = 0; cin >> current;)
    {
        data.push_back(current);
    }

    cout << "original data" << endl
        << "-------------" << endl;
    for (double d : data)
    {
        cout << d << ", ";
    }

    cout << "\n\n";

    cout << "Sorted data" << endl
        << "-----------" << endl;
    sort(data);
    for (double d : data)
    {
        cout << d << ", ";
    }
}

void p125_try_this()
{
    vector<string> dislike{"fuck", "damn"};
    bool bleeped = false;

    for (string s; cin >> s;)
    {
        for (string e : dislike)
        {
            if (s == e)
            {
                cout << "BLEEP" << endl;
                bleeped = true;
                break;
            }
        }

        if (bleeped)
        {
            bleeped = false;
        }
        else
        {
            cout << s << endl;
        }
    }
}

void p126_drill_1_to_5()
{
    while (true)
    {
        double a, b;
        if (!(cin >> a))
        {
            break;
        }
        if (!(cin >> b))
        {
            break;
        }
        // cin >> a >> b;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

        if (a == b)
        {
            cout << "the numbers are equal" << endl;
        }
        else
        {
            if (a > b)
            {
                cout << "the smaller value is: " << b << endl;
                cout << "the larger value is: " << a << endl;
            }
            else
            {
                cout << "the smaller value is: " << a << endl;
                cout << "the larger value is: " << b << endl;
            }

            if (abs(a - b) < (1.0 / 100))
            {
                cout << "the numbers are almost equal" << endl;
            }
        }
    }
}

void p126_drill_6()
{
    double smallest = 0, largest = 0;
    while (true)
    {
        double d;
        if (!(cin >> d))
        {
            break;
        }

        cout << "You entered: " << d << endl;
        if (d < smallest)
        {
            smallest = d;
            cout << "The smallest so far" << endl;
        }

        if (d > largest)
        {
            largest = d;
            cout << "The largest so far" << endl;
        }
    }
}

void p126_drill_7_to_11()
{
    double smallest = 0, largest = 0, sum = 0;
    int number_of_valid_values = 0;
    vector<double> data;
    vector<string> raw_data;
    while (true)
    {
        cout << "Please enter something like 10cm, 2.5in, 5ft or 3.33m" << endl;
        double d;
        if (!(cin >> d))
        {
            break;
        }

        string unit;
        if (!(cin >> unit))
        {
            break;
        }

        if (unit != "cm" && unit != "in" && unit != "ft" && unit != "m")
        {
            cout << "Wrong unit " << unit << " entered. Try again please." << endl;
            cout << "           ";
            for (int i = 0; i < unit.size(); i++) cout << "^";
            cout << endl;
        }

        raw_data.push_back(to_string(d) + unit);
        number_of_valid_values++;

        cout << "You entered: " << d << unit << endl;
        // Change unit to meter
        if (unit == "cm")
        {
            d /= 100.0;
        }
        else if (unit == "in")
        {
            d = d * 2.54 / 100;
        }
        else if (unit == "ft")
        {
            d = d * 12.0 * 2.54 / 100;
        }

        if (d < smallest)
        {
            smallest = d;
        }

        if (d > largest)
        {
            largest = d;
        }

        data.push_back(d);
        sum += d;
        cout << endl;
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    cout << "Sum: " << sum << endl;
    cout << "Number of values: " << number_of_valid_values << endl;
    cout << "The data you entered:" << endl;
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "(" << raw_data[i] << "), ";
    }
}

int p128_2()
{
    vector<double> temps; // temperatures
    for (double temp; cin >> temp;) // read into temp
        temps.push_back(temp); // put temp into vector

    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;

    size_t size = temps.size();
    if (size == 0) return 0;

    cout << "Average temperature: " << sum / size << '\n';

    // compute median temperature:
    sort(temps); // sort temperatures
    if (size % 2 == 0)
        cout << "Median temperature: " << (temps[size / 2] + temps[size / 2 - 1]) / 2.0 << '\n';
    else
        cout << "Median temperature: " << temps[size / 2] << '\n';

    return 0;
}

void p147()
{
    class MyFuckingError
    {
    };

    class MyFuckingError2
    {
    };

    try
    {
        int i = 0;
        if (i == 0)
        {
            throw MyFuckingError2{};
        }
    }
    catch (MyFuckingError)
    {
        cout << "MyFuckingError occurred." << endl;
    }
    catch (...)
    {
        cout << "A fucking error occurred." << endl;
    }
}

void p149()
{
    try
    {
        vector<int> v{1, 2, 3};

        throw exception("asdf");
        // v[3] = 7;

        //throw runtime_error("fff");
        //throw out_of_range("fasdf");
    }
    catch (out_of_range)
    {
        cout << "out_of_range" << endl;
    }
    catch (...)
    {
        cout << "some error" << endl;
    }
}

int p167_drill()
{
    try
    {
        cout << "Success!\n";
        cout << "Success!\n";
        cout << "Success" << "!\n";
        cout << "success!" << '\n';
        int res = 7;
        vector<int> v(10);
        v[5] = res;
        cout << "Success!\n";
        vector<int> v1(10);
        v1[5] = 77;
        if (v1[5] != 7) cout << "Success!\n";
        if ("cond") cout << "Success!\n";
        else cout << "Fail!\n";
        bool c = false;
        if (!c) cout << "Success!\n";
        else cout << "Fail!\n";
        string s = "ape";
        bool c2 = ("fool" > s);
        if (c2) cout << "Success!\n";
        string s2 = "fool";
        if (s2 == "fool") cout << "Success!\n";
        string s3 = "fool";
        if (s3 == "fool") cout << "Success!\n";
        string s4 = "ape";
        if (s4 < "fool") cout << "Success!\n";
        vector<char> v2 = {'1'};
        for (int i = 0; i < v2.size(); ++i) cout << "Success!\n";
        vector<char> v3 = {'2'};
        for (int i = 0; i <= v3.size(); ++i) cout << "Success!\n";
        string s5 = "Success!\n";
        for (int i = 0; i < s5.size(); ++i) cout << s5[i];
        if (true) cout << "Success!\n";
        else cout << "Fail!\n";
        int x = 2000;
        char c3 = x;
        if (x == 2000) cout << "Success!\n";
        string s6 = "Success!\n";
        for (int i = 0; i < s6.size(); ++i) cout << s6[i];
        vector<int> v4(5);
        for (int i = 0; i <= v4.size(); ++i);
        cout << "Success!\n";
        int i = 0;
        int j = 9;
        while (i < 10) ++i;
        if (j < i) cout << "Success!\n";
        int x2 = 2;
        double d = 4.5;
        if (d == 2 * x2 + 0.5) cout << "Success!\n";
        string s7 = "Success!\n";
        for (int i = 0; i < s7.size(); ++i) cout << s7[i];
        int i2 = 0, j2 = 3;
        while (i2 < 10) ++i2;
        if (j2 < i2) cout << "Success!\n";
        cout << "Success!\n";
        cout << "Success!\n";
        keep_window_open();
        return 0;
    }
    catch (exception& e)
    {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...)
    {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}

int main()
{
    return p167_drill();
}
