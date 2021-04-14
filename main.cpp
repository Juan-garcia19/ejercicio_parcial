#include <iostream>
#include <math.h>
#define G 9.81
#define pi 3.141617

using namespace std;

struct Do{
    float d = 800;
    float Ho = 100;
    float Xo = 0;
    float Yo = Ho;
    float d0=0.05*d;
};
struct Dd{
    float d = 800;
    float Hd = 200;
    float Xd = d;
    float Yd = Hd;
    float d0=0.025*d;
};

int main()
{
    Do disparoO;
    Dd disparoD;
    int Voo;
    cout << "Ingrese la Vo para la simulacion:";
    cin>>Voo;
    return 0;
}
