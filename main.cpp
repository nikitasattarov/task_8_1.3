#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    map <string, string> m;
    string a, b;
    ifstream input;
    input.open("input.txt"); // открываем файл
    int n;
    input >> n;
    for (int i = 0; i < n; i++)
    {
        input >> a >> b;
        m.insert(pair <string,string>(a,b));
        m.insert(pair <string,string>(b,a));
    }
    input >> a;
    cout << m.find(a) -> second;

    return 0;
}
