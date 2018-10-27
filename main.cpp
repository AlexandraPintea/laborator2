#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int a[20], i, nr;
    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (int i=0; i<nr; i++)
    {
        cout << "introduceti elementul nr " << i+1 << " ";
        cin >> a[i];
    }

    cout << "Sirul de numere rezultat ";
    for (int i=0; i<nr; i++){
         if (a[i]<0)
            a[i] = -a[i];
            cout << a[i] << ", ";
    }
    return 0;
}

