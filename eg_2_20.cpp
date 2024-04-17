#include<iostream>
using  namespace std;
int &f(int &i)
{
    i += 10;
    return i;
}
int main()
{
    int k = 0;
    int &m = f(k);//m已经是k的引用了
    cout << k << endl;
    m = 20;
    cout << k << ' ' << m << endl;
    k += 10;
    cout << k << ' ' << m << endl;
    return 0;

}