#include <iostream>
#include <fstream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned int choose;
    ifstream fout;
    string search, s, buf;
    cout << "Введите номер файла от 1 до 3, в котором необходимо искать слово: ";
    cin >> choose;
    switch (choose)
    {
    case 1:
        fout.open("Input 1.txt");
    break;
    case 2:
        fout.open("Input 2.txt");
        break;
    case 3:
        fout.open("Input 3.txt");
        break;
    default:
        cout << "Такого файла нет.";
    break;
    }
    if (fout.is_open())
    {
        cout << "Введите латиницей искомое слово: ";
        cin >> search;
        while (fout.peek() >= 0 && !fout.eof())
        {
            fout >> s;
            buf += s;
        }
        fout.close();
        if ((buf.find(search, 0)) != string::npos)
        {
            cout << "Слово " << search << " найдено в файле";
        }
        else
        {
            cout << "Слово не найдено";
        }
    }
    return 0;
}