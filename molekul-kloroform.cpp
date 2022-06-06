%%writefile molekul-kloroform.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
    int counter = 0;

    // deklarasi molekul kloroform
    float CHx, CHy, CHz;
    float Cl1x, Cl1y, CH1z;
    float Cl2x, Cl2y, Cl2z;
    float Cl3x, Cl3y, Cl3z;

    /*           CH
               /  | \
              Cl Cl Cl
            molekul kloroform itu bentuk rigid
    */

    float rB_CHx = 0.0;
    float rB_CHy = 0.0;
    float rB_CHz = 0.0;

    float rB_Cl1x = sin(109.5*pi/180.0) * 1.090;
    float rB_Cl1y = 0.0;
    float rB_Cl1z = cos (109.5*pi/180.0) * 1.090;

    float rB_Cl2x = - rB_H1x;
    float rB_Cl2y = rB_H1y;
    float rB_Cl2z = rB_H1z;

    float rB_Cl3x = 0.0;
    float rB_Cl3y = cos(54.75*pi/180) * 1.090;
    float rB_Cl3z = - sin(54.75*pi/180) * 1.090;     
    
    // iterasi untuk setiap molekul kloroform
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                
                CHx[counter] = rB_CHx + (i*3.01);
                CHy[counter] = rB_CHy + (j*3.01);
                CHz[counter] = rB_CHz + (k*3.01);

                Cl1x[counter] = CHx[counter] + rB_Cl1x;
                Cl1y[counter] = CHy[counter] + rB_Cl1y;
                Cl1z[counter] = CHz[counter] + rB_Cl1z;

                Cl2x[counter] = CHx[counter] + rB_Cl2x;
                Cl2y[counter] = CHy[counter] + rB_Cl2y;
                Cl2z[counter] = CHz[counter] + rB_Cl2z;

                Cl3x[counter] = CHx[counter] + rB_Cl3x;
                Cl3y[counter] = CHy[counter] + rB_Cl3y;
                Cl3z[counter] = CHz[counter] + rB_Cl3z;


                 counter += 1;
            }
        }
    }

