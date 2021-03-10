
#include <iostream>
#include <stdint.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int b; //параметр N
    cout << "ведите N \n" << endl;
    cin >> b;
    cout << "четные" << endl;

    for (int x = 0; x <= b; x += 2)
    {
        cout << x << " ";
    }

    cout << "\n" << "нечетные"<< endl;




  
    int z = 0;
        
    do {
        
        if
            (z % 2 == 0);
        else
            cout<<z<<" ";
            z++;
        
        

    } while (z <= b);
        
    
}
