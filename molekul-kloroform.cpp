
%%writefile triklorometana-ruah.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
    int counter = 0;

    // deklarasi molekul triklorometana
    float Cx[125], Cy[125], Cz[125];
    float Hx[125], Hy[125], Hz[125];
    float CL1x[125], CL1y[125], CL1z[125];
    float CL2x[125], CL2y[125], CL2z[125];
    float CL3x[125], CL3y[125], CL3z[125];

    /*            H
                  |
                  C
                / | \
              CL CL CL
            molekul triklorometana itu bentuk rigid
    */

    float rB_Cx = 0.0;
    float rB_Cy = 0.0;
    float rB_Cz = 0.0;

    float rB_Hx = sin(109.5*pi/180) * 1.090;
    float rB_Hy = 0.0;
    float rB_Hz = cos(109.5*pi/180) * 1.090;

    float rB_CL1x = sin(53.8*pi/180) * 1.760;
    float rB_CL1y = 0.0;
    float rB_CL1z = cos(53.8*pi/180) * 1.760;

    float rB_CL2x = 0.0;
    float rB_CL2y = cos(55.6*pi/180) * 1.760;
    float rB_CL2z = sin(55.6*pi/180) * 1.760;

    float rB_CL3x = 0.0;
    float rB_CL3y = cos (55.6*pi/180) * 1.760;
    float rB_CL3z = sin(55.6*pi/180) * 1.760;

    // iterasi untuk setiap molekul triklorometana
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                
                Cx[counter] = rB_Cx + (i*3.01);
                Cy[counter] = rB_Cy + (j*3.01);
                Cz[counter] = rB_Cz + (k*3.01);

                Hx[counter] = Cx[counter] + rB_Hx;
                Hy[counter] = Cy[counter] + rB_Hy;
                Hz[counter] = Cz[counter] + rB_Hz;

                CL1x[counter] = Cx[counter] + rB_CL1x;
                CL1y[counter] = Cy[counter] + rB_CL1y;
                CL1z[counter] = Cz[counter] + rB_CL1z;

                CL2x[counter] = Cx[counter] + rB_CL2x;
                CL2y[counter] = Cy[counter] + rB_CL2y;
                CL2z[counter] = Cz[counter] + rB_CL2z;

                CL3x[counter] = Cx[counter] + rB_CL3x;
                CL3y[counter] = Cy[counter] + rB_CL3y;
                CL3z[counter] = Cz[counter] + rB_CL3z;

                 counter += 1;
            }
        }
    }

    // hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("triklorometana-ruah.xyz");
    int N = 125 * 5;
    file << N << "\n" << endl;

    // iterasi dalam output array
    for(int m = 0; m < 125; m++){
        file << setw(5) << "C" << setw(5) << " " \
             << fixed << setprecision(5) << Cx[m] << setw(5) << " " \
             << fixed << setprecision(5) << Cy[m] << setw(5) << " " \
             << fixed << setprecision(5) << Cz[m] << "\n";

        file << setw(5) << "H" << setw(5) << " " \
             << fixed << setprecision(5) << Hx[m] << setw(5) << " " \
             << fixed << setprecision(5) << Hy[m] << setw(5) << " " \
             << fixed << setprecision(5) << Hz[m] << "\n";

       file << setw(5) << "CL" << setw(5) << " " \
             << fixed << setprecision(5) << CL1x[m] << setw(5) << " " \
             << fixed << setprecision(5) << CL1y[m] << setw(5) << " " \
             << fixed << setprecision(5) << CL1z[m] << "\n";

       file << setw(5) << "CL" << setw(5) << " " \
             << fixed << setprecision(5) << CL2x[m] << setw(5) << " " \
             << fixed << setprecision(5) << CL2y[m] << setw(5) << " " \
             << fixed << setprecision(5) << CL2z[m] << "\n";

      file << setw(5) << "CL" << setw(5) << " " \
             << fixed << setprecision(5) << CL3x[m] << setw(5) << " " \
             << fixed << setprecision(5) << CL3y[m] << setw(5) << " " \
             << fixed << setprecision(5) << CL3z[m] << "\n";
    }   

    file.close();

    cout << "Program telah selesai";

    return 0;      
}
