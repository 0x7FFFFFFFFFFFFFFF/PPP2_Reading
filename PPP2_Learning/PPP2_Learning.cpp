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

int main()
{
    vector<int> v1 = {1, 2, 3};
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " << endl;
    }

    vector<string> v2{"Edde", "Yang"};
    for(string s: v2)
    {
        cout << s << " " << endl;
    }
}
