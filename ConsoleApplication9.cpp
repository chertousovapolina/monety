// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Чертоусова утренняя пробежка-2
#include <iostream>
using namespace std;
int main()
{  
    int o, r, n, m;// орел герб колво монет монеты
    cin >> n;
    o = r = 0;  
    for (int i = 0; i<n; i++) {
        cin >> m;
        if (m = 1) r++;
        else n-=r;
    }
    cout << min(o,r);
    
}

