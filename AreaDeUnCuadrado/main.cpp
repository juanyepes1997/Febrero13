#include <iostream>

using namespace std;

int main()
{  // VARIABLE DEFINITON
     int x,y=0;
    //
    cout << "Ingrese Numero 1" << "  ";
    cin  >> x;
    cout << "Ingrese Numero 2" << "  ";
    cin  >> y;
    //OPERATION
    if  (x<y) {
    // IF NUMEMBER IS MAYOR
        cout << "orden " << x << "   " << y ;

    }//
    else {
        cout << " orden " << y << "  " << x ;
    }


    return 0;
}
