#include <map>
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    map<int, string> scrable =
    { {1,"213487534"},
      {2,"2315"},
    };
    string str;
    int k = 0;
    int d = 0;
    cout << "Ââåäèòå ID: ";
    cin >> str;
    for (auto letter : str)
    {
        for (auto pair : scrable)
        {
            for (auto i : pair.second)
            {
                if (i == letter)
                {
                    k += pair.first;
                }
            }
        }
    }
    cout << "ID: " << k;
    cout << "ÔÈÎ:  " << d;
}