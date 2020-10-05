#include <iostream>
#include <float.h>
#include <string>

using namespace std;

int main() {
    string cadena;

    cin>>cadena;

    if (cadena == "char"){
        cout<<endl<<sizeof(char)<<endl;
    }
    if (cadena == "int"){
        cout<<endl<<sizeof(int)<<endl;
    }
    if (cadena == "short"){
        cout<<endl<<sizeof(short)<<endl;
    }
    if (cadena == "float"){
        cout<<endl<<sizeof(float)<<endl;
    }
    if (cadena == "double"){
        cout<<endl<<sizeof(double)<<endl;
    }
    if (cadena == "long"){
        cout<<endl<<sizeof(long)<<endl;
    }

    return 0;
}