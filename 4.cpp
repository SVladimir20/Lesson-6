#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
int FileCreate1(string *f1);
int FileCreate2(string *f2);
int FileConnect(string *f1, string *f2, string *f3);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string file1;
    string file2;
    string file3;
    string *f1 = &file1;
    string *f2 = &file2;
    string *f3 = &file3;
    FileCreate1(f1);
    FileCreate2(f2);
    FileConnect(f1, f2, f3);
    return 0;
}
int FileCreate1(string *f1)
{
    cout << "������� ��� ������� �����: ";
    getline(cin, *f1);
    ofstream fout1(*f1 + ".txt");
    if (fout1.is_open())
    {
        for (int i = 0; i < 51; i++)
        {
            fout1 << i << " ";
        }
    }
    return 0;
}
int FileCreate2(string *f2)
{
    cout << "������� ��� ������� �����: ";
    getline(cin, *f2);
    ofstream fout2(*f2 + ".txt");
    if (fout2.is_open())
    {
        for (int i = 51; i < 151; i++)
        {
            fout2 << i << " ";
        }
    }
    return 0;
}
int FileConnect(string *f1, string *f2, string *f3)
{
    cout << "������� ��� �������� �����: ";
    getline(cin, *f3);
    unsigned int choose;
    ifstream fout1(*f1 + ".txt");
    ifstream fout2(*f2 + ".txt");
    if (!fout1 || !fout2)
    {
        cout << "����� �� ���������";
    }
    else
    {
        ofstream fout3(*f3 + ".txt");
        cout << "������� 1, ���� ���������� ����������� ������ ���� �� ����� ������, 0 - ���� ���: ";
        cin >> choose;
        switch (choose)
        {
        case 0:
            fout3 << fout1.rdbuf() << fout2.rdbuf();
            break;
        case 1:
            fout3 << fout1.rdbuf() << endl << fout2.rdbuf();
            break;
        default:
            fout3 << fout1.rdbuf() << fout2.rdbuf();
            break;
        }
        cout << "���� " << *f1 + ".txt" << " � " << *f2 + ".txt" << " ������� ����������� � " << *f3 + ".txt";
    }
    return 0;
}