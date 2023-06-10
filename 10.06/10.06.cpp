

#include <iostream>
#include <array>
#include<Windows.h>
using namespace std;






int main()
{
    array<double, 10>masuv = { -1,0,1,-2,2,-3,3,4,-4,6 };

    double sum = 0.0;
    for (double element : masuv) {
        if(element < 0){
            sum += element;
        }
    }

    cout << "ELement masuvy";
    for (double element : masuv) {
        cout << element << " ";

    }
    cout << endl;
    cout << "Summa vid`emnuh znachen`: " << sum << endl;
    return 0;



}

