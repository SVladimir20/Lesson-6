#include <iostream>
#include <fstream> 
using namespace std;
int FileCreate1(string file1);
int FileCreate2(string file2);
int main()
{
    setlocale(LC_ALL, "Russian");
    string file1;
    string file2;
    string file3;
    FileCreate1(file1);
    FileCreate2(file2);
	return 0;
}
int FileCreate1(string file1)
{
    cout << "Введите имя файла: ";
    cin >> file1;
    ofstream fout1(file1 + ".txt");
    if (fout1.is_open())
    {
        for (int i = 0; i < 51; i++)
        {
            fout1 << "Символ " << i << " ";
        }
        fout1.close();
    }
    return 0;
}
int FileCreate2(string file2)
{
    cout << "Введите имя файла: ";
    cin >> file2;
    ofstream fout2(file2 + ".txt");
    if (fout2.is_open())
    {
        for (int i = 0; i < 101; i++)
        {
            fout2 << "Символ " << i << " ";
        }
        fout2.close();
    }
    return 0;
}