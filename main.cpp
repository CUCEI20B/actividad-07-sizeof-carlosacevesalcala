#include <iostream>
#include <float.h>
#include <string>

using namespace std;

int main() {
    int numero;
    string cadena;

    cin>>cadena;

    if (cadena == "char"){
        numero=CHAR_BIT;
    }
    if (cadena == "int"){
        numero=__SIZEOF_INT__;
    }
    if (cadena == "short"){
        numero=__SIZEOF_SHORT__;
    }
    if (cadena == "float"){
        numero=__SIZEOF_FLOAT__;
    }
    if (cadena == "double"){
        numero=__SIZEOF_DOUBLE__;
    }
    if (cadena == "long"){
        numero=__SIZEOF_LONG__;
    }

    cout<<numero;
    return 0;
}