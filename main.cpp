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

void DisparoOfensivo( Do disparoO,Dd disparoD,int Voo){
    float x,y;
    float Vxo,Vyo;
    float Vini =0;
    int t= 0;
    int angle =0;
    for ( Vini = Voo;;Vini+=5){
        for(angle =0;angle < 90;angle++){
            Vxo = Vini*cos(angle*pi/180);
            Vyo = Vini*sin(angle*pi/180);
            for(t = 0;;t++){
                x= Vxo*t;
                y= disparoO.Yo + Vyo*t - (0.5*G*t*t);
                if (sqrt(pow((disparoD.Xd-x),2)+pow((disparoD.Yd-y),2)) < disparoO.d0){

            }
            }
        }
    }
}

int main()
{
    Do disparoO;
    Dd disparoD;
    int Voo;
    cout << "Ingrese la Vo para la simulacion:";
    cin>>Voo;
    return 0;
}
