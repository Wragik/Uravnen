// Uvarn.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// stoi

#include <iostream>

#include <string>

using namespace std;
int main()
{
    string z,f;
    double x=0,p=0,a=0,b=0;
    bool a1 = false, b1 = false, p1 = false;
    setlocale(LC_ALL, "rus");
    cout << "Введите уравнение ";
    getline(cin, z);
    if (z[0] != 'x')
    {
        f = z[0];
        a = stoi(f);
    }
    else
    {
        a1 = true;
    }
    if (z[2] != 'x')
    {
        f = z[2];
        b = stoi(f);
    }
    else
    {
        b1 = true;
    }
    if (z[4] != 'x')
    {
        f = z[4];
        p = stoi(f);
    }
    else
    {
        p1 = true;
    }
    try
    {
        if (z[1] == '+') // +
        {
            if (a1)
            {
                x = p - b;
                
            }
            if (b1)
            {

                x = p - a;
                
            }
            if (p1)
            {
                x = a + b;
                
            }
        }
        if (z[1] == '-') // -
        {
            if (a1)
            {
                x = p + b;
                
            }
            if (b1)
            {
                x = a - p;
                
            }
            if (p1)
            {
                x = a - b;
                
            }
        }
        if (z[1] == '*') // *
        {
            if (b != 0)
            {
                if (a1)
                {
                    x = p / b;

                }
            }
            else
            {
                throw 1;
            }
            if (a != 0)
            {
                if (b1)
                {
                    x = p / a;

                }
            }
            else
            {
                throw 1;
            }
        }
        if (z[1] == '/') // 
        {
            if (a1)
            {
                x = 3 * 2;
                
            }
            if (p != 0)
            {
                if (b1)
                {
                    x = a / p;
                    
                }
            }
            else
            {
                throw 1;
            }

            if (b != 0)
            {
                if (p1)
                {
                    x = a / b;

                }
            }
            else
            {
                throw 1;
            }
        }
        cout << x;
    }
    catch (...)
    {
        cout << "Решения нет (на ноль делить нельзя)";
    }
}


