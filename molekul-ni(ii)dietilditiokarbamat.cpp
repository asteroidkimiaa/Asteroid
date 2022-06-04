%%writefile molekul-ni(ii)dietilditiokarbamat.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
    int counter = 0;

    // deklarasi molekul ni(ii)dietilditiokarbamat
    float C1x, C1y, C1z;
    float C2x, C2y, C2z;
    float C3x, C3y, C3z;
    float C4x, C4y, C4z;
    float C5x, C5y, C5z;
    float C6x, C6y, C6z;
    float C7x, C7y, C7z;
    float C8x, C8y, C8z;
    float C9x, C9y, C9z;
    float C10x, C10y, C10z;
    float H1x, H1y, H1z;
    float H2x, H2y, H2z;
    float H3x, H3y, H3z;
    float H4x, H4y, H4z; 
    float H5x, H5y, H5z;
    float H6x, H6y, H6z;
    float H7x, H7y, H7z;
    float H8x, H8y, H8z;
    float H9x, H9y, H9z;
    float H10x, H10y, H10z;
    float H11x, H11y, H11z;
    float H12x, H12y, H12z;
    float H13x, H13y, H13z;
    float H14x, H14y, H14z;
    float H15x, H15y, H15z;
    float H16x, H16y, H16z;
    float H17x, H17y, H17z;
    float H18x, H18y, H18z;
    float H19x, H19y, H19z;
    float H20x, H20y, H20z;
    float N1x, N1y, N1z;
    float N2x, N2y, N2z;
    float Nix, Niy,Niz;
    float S1x, S1y, S1z;
    float S2x, S2y, S2z;
    float S3x, S3y, S3z;
    float S4x, S4y, S4z;
    
     /* C                                  C
        \                                /
         C    C                         C 
          \  /                         / \
           C       S        S         C   C
            \     /  \    /    \     /
             N - C    Ni  Ni    C - N
            /     \   /   \    /     \
           C        S        S        C    C
          /  \                         \  /
         C    C                         C
        /                                \
       C                                  C
       
       molekul ni(ii) dietildikarbamat
    /*
    
    // masukkan nilai untuk setiap variabel C10H20N2NiS4
    Nix = Niy = Niz = 0.0;
    C1x = C1y = C1z = 2.2;
    C6x = C6y = C6z = -2,-2;
    N1x = N1y = N1z = 3,3;
    N2x = N2y = N2z = -3,-3;
  
    S1x = sin(109.5*pi/180) * 1.090;
    S1y = 0.0;
    S1z = - cos(109.5*pi/180) * 1.090;

    S2x = - S1x;
    S2y = S1y;
    S2z = S1z;

    S3x = 0.0;
    S3y = cos(79,55*pi/180) * 1.090;
    S3z = - sin(79,5*pi/180) * 1.090;

    S4x = S3x;
    S4y = - S3y;
    S4z = S3z;
    
    C2x = sin(109.5*pi/180) * 1.090;
    C2y = 0.0;
    C2z = - cos(109.5*pi/180) * 1.090;

    C7x = - C2x;
    C7y = C2y;
    C7z = C2z;

    C4x = sin(109.5*pi/180) * 1.090;
    C4y = 0.0;
    C4z = - cos(109.5*pi/180) * 1.090;

    C9x = - C4x;
    C9y = C4y;
    C9z = C4z;

    C3x = 0.0;
    C3y = cos(79,55*pi/180) * 1.090;
    C3z = - sin(79,5*pi/180) * 1.090;

    C8x = C3x;
    C8y = - C3y;
    C8z = C3z;

    C5x = 0.0;
    C5y = cos(79,55*pi/180) * 1.090;
    C5z = - sin(79,5*pi/180) * 1.090;

    C10x = C5x;
    C10y = - C5y;
    C10z = C5z;

    H1x = sin(109.5*pi/180) * 1.090;
    H1y = 0.0;
    H1z = - cos(109.5*pi/180) * 1.090;

    H2x = sin(109.5*pi/180) * 1.090;
    H2y = 0.0;
    H2z = - cos(109.5*pi/180) * 1.090;

    H3x = sin(109.5*pi/180) * 1.090;
    H3y = 0.0;
    H3z = - cos(109.5*pi/180) * 1.090;

    H4x = sin(109.5*pi/180) * 1.090;
    H4y = 0.0;
    H4z = - cos(109.5*pi/180) * 1.090;
     
    H5x = sin(109.5*pi/180) * 1.090;
    H5y = 0.0;
    H5z = - cos(109.5*pi/180) * 1.090;

    H6x = 0.0;
    H6y = cos(79,55*pi/180) * 1.090;
    H6z = - sin(79,5*pi/180) * 1.090;

    H7x = 0.0;
    H7y = cos(79,55*pi/180) * 1.090;
    H7z = - sin(79,5*pi/180) * 1.090;

    H8x = 0.0;
    H8y = cos(79,55*pi/180) * 1.090;
    H8z = - sin(79,5*pi/180) * 1.090;

    H9x = 0.0;
    H9y = cos(79,55*pi/180) * 1.090;
    H9z = - sin(79,5*pi/180) * 1.090;

    H10x = 0.0;
    H10y = cos(79,55*pi/180) * 1.090;
    H10z = - sin(79,5*pi/180) * 1.090;

    H11x = - H1x;
    H11y = H1y;
    H11z = H1Z;

    H12x = - H2x;
    H12y = H2y;
    H12z = H2z;

    H13x = - H3x;
    H13y = H3y;
    H13z = H3z;

    H14x = - H4x;
    H14y = H4y;
    H14z = H4z;

    H15x = - H5x;
    H15y = H5y;
    H15z = H5z;

    H16x = H6x;
    H16y = - H6y;
    H16z = H6z;

    H17x = H7x;
    H17y = - H7y;
    H17z = H7z;

    H18x = H8x;
    H18y = - H8y;
    H18z = H8z;

    H19x = H9x;
    H19y = - H9y;
    H19z = H9z;

    H20x = H20x;
    H20y = - H20y;
    H20z = H20z;
  
    // memasukkan nilai tersebut ke dalam File
    ofstream file;
    file.open("molekul-Ni(II)dietilditiokarbamat.xyz");
    file << "37\n" << endl;
    file << setw(37) << "Ni" << setw(37) << " "\
    << fixed << setprecision(37) << Nix << setw(37) << " "\
    << fixed << setprecision(37) << Niy << setw(37) << " "\
    << fixed << setprecision(37) << Niz << "\n";

    file << setw(37) << "N1" << setw(37) << " "\
    << fixed << setprecision(37) << N1x << setw(37) << " "\
    << fixed << setprecision(37) << N1y << setw(37) << " "\
    << fixed << setprecision(37) << N1z << "\n";

    file << setw(37) << "N2" << setw(37) << " "\
    << fixed << setprecision(37) << N2x << setw(37) << " "\
    << fixed << setprecision(37) << N2y << setw(37) << " "\
    << fixed << setprecision(37) << N2z << "\n";

    file << setw(37) << "S1" << setw(37) << " "\
    << fixed << setprecision(37) << S1x << setw(37) << " "\
    << fixed << setprecision(37) << S1y << setw(37) << " "\
    << fixed << setprecision(37) << S1z << "\n";

    file << setw(37) << "S2" << setw(37) << " "\
    << fixed << setprecision(37) << S2x << setw(37) << " "\
    << fixed << setprecision(37) << S2y << setw(37) << " "\
    << fixed << setprecision(37) << S2z << "\n";

    file << setw(37) << "S3" << setw(37) << " "\
    << fixed << setprecision(37) << S3x << setw(37) << " "\
    << fixed << setprecision(37) << S3y << setw(37) << " "\
    << fixed << setprecision(37) << S3z << "\n";

    file << setw(37) << "S4" << setw(37) << " "\
    << fixed << setprecision(37) << S4x << setw(37) << " "\
    << fixed << setprecision(37) << S4y << setw(37) << " "\
    << fixed << setprecision(37) << S4z << "\n";

    file << setw(37) << C1" << setw(37) << " "\
    << fixed << setprecision(37) << C1x << setw(37) << " "\
    << fixed << setprecision(37) << C1y << setw(37) << " "\
    << fixed << setprecision(37) << C1z << "\n";

    file << setw(37) << C2" << setw(37) << " "\
    << fixed << setprecision(37) << C2x << setw(37) << " "\
    << fixed << setprecision(37) << C2y << setw(37) << " "\
    << fixed << setprecision(37) << C2z << "\n";

    file << setw(37) << C3" << setw(37) << " "\
    << fixed << setprecision(37) << C3x << setw(37) << " "\
    << fixed << setprecision(37) << C3y << setw(37) << " "\
    << fixed << setprecision(37) << C3z << "\n";

    file << setw(37) << C4" << setw(37) << " "\
    << fixed << setprecision(37) << C4x << setw(37) << " "\
    << fixed << setprecision(37) << C4y << setw(37) << " "\
    << fixed << setprecision(37) << C4z << "\n";

    file << setw(37) << C5" << setw(37) << " "\
    << fixed << setprecision(37) << C5x << setw(37) << " "\
    << fixed << setprecision(37) << C5y << setw(37) << " "\
    << fixed << setprecision(37) << C5z << "\n";

    file << setw(37) << C6" << setw(37) << " "\
    << fixed << setprecision(37) << C6x << setw(37) << " "\
    << fixed << setprecision(37) << C6y << setw(37) << " "\
    << fixed << setprecision(37) << C6z << "\n";

    file << setw(37) << C7" << setw(37) << " "\
    << fixed << setprecision(37) << C7x << setw(37) << " "\
    << fixed << setprecision(37) << C7y << setw(37) << " "\
    << fixed << setprecision(37) << C7z << "\n";

    file << setw(37) << C8" << setw(37) << " "\
    << fixed << setprecision(37) << C8x << setw(37) << " "\
    << fixed << setprecision(37) << C8y << setw(37) << " "\
    << fixed << setprecision(37) << C8z << "\n";

    file << setw(37) << C9" << setw(37) << " "\
    << fixed << setprecision(37) << C9x << setw(37) << " "\
    << fixed << setprecision(37) << C9y << setw(37) << " "\
    << fixed << setprecision(37) << C9z << "\n";

    file << setw(37) << C10" << setw(37) << " "\
    << fixed << setprecision(37) << C10x << setw(37) << " "\
    << fixed << setprecision(37) << C10y << setw(37) << " "\
    << fixed << setprecision(37) << C10z << "\n";

    file << setw(37) << H1" << setw(37) << " "\
    << fixed << setprecision(37) << H1x << setw(37) << " "\
    << fixed << setprecision(37) << H1y << setw(37) << " "\
    << fixed << setprecision(37) << H1z << "\n";

    file << setw(37) << H2" << setw(37) << " "\
    << fixed << setprecision(37) << H2x << setw(37) << " "\
    << fixed << setprecision(37) << H2y << setw(37) << " "\
    << fixed << setprecision(37) << H2z << "\n";

    file << setw(37) << H3" << setw(37) << " "\
    << fixed << setprecision(37) << H3x << setw(37) << " "\
    << fixed << setprecision(37) << H3y << setw(37) << " "\
    << fixed << setprecision(37) << H3z << "\n";

    file << setw(37) << H4" << setw(37) << " "\
    << fixed << setprecision(37) << H4x << setw(37) << " "\
    << fixed << setprecision(37) << H4y << setw(37) << " "\
    << fixed << setprecision(37) << H4z << "\n";

    file << setw(37) << H5" << setw(37) << " "\
    << fixed << setprecision(37) << H5x << setw(37) << " "\
    << fixed << setprecision(37) << H5y << setw(37) << " "\
    << fixed << setprecision(37) << H5z << "\n";

    file << setw(37) << H6" << setw(37) << " "\
    << fixed << setprecision(37) << H6x << setw(37) << " "\
    << fixed << setprecision(37) << H6y << setw(37) << " "\
    << fixed << setprecision(37) << H6z << "\n";

    file << setw(37) << H7" << setw(37) << " "\
    << fixed << setprecision(37) << H7x << setw(37) << " "\
    << fixed << setprecision(37) << H7y << setw(37) << " "\
    << fixed << setprecision(37) << H7z << "\n";

    file << setw(37) << H8" << setw(37) << " "\
    << fixed << setprecision(37) << H8x << setw(37) << " "\
    << fixed << setprecision(37) << H8y << setw(37) << " "\
    << fixed << setprecision(37) << H8z << "\n";

    file << setw(37) << H9" << setw(37) << " "\
    << fixed << setprecision(37) << H9x << setw(37) << " "\
    << fixed << setprecision(37) << H9y << setw(37) << " "\
    << fixed << setprecision(37) << H9z << "\n";

    file << setw(37) << H10" << setw(37) << " "\
    << fixed << setprecision(37) << H10x << setw(37) << " "\
    << fixed << setprecision(37) << H10y << setw(37) << " "\
    << fixed << setprecision(37) << H10z << "\n";

    file << setw(37) << H11" << setw(37) << " "\
    << fixed << setprecision(37) << H11x << setw(37) << " "\
    << fixed << setprecision(37) << H11y << setw(37) << " "\
    << fixed << setprecision(37) << H11z << "\n";

    file << setw(37) << H12" << setw(37) << " "\
    << fixed << setprecision(37) << H12x << setw(37) << " "\
    << fixed << setprecision(37) << H12y << setw(37) << " "\
    << fixed << setprecision(37) << H12z << "\n";

    file << setw(37) << H13" << setw(37) << " "\
    << fixed << setprecision(37) << H13x << setw(37) << " "\
    << fixed << setprecision(37) << H13y << setw(37) << " "\
    << fixed << setprecision(37) << H13z << "\n";

    file << setw(37) << H14" << setw(37) << " "\
    << fixed << setprecision(37) << H14x << setw(37) << " "\
    << fixed << setprecision(37) << H14y << setw(37) << " "\
    << fixed << setprecision(37) << H14z << "\n";

    file << setw(37) << H15" << setw(37) << " "\
    << fixed << setprecision(37) << H15x << setw(37) << " "\
    << fixed << setprecision(37) << H15y << setw(37) << " "\
    << fixed << setprecision(37) << H15z << "\n";

    file << setw(37) << H16" << setw(37) << " "\
    << fixed << setprecision(37) << H16x << setw(37) << " "\
    << fixed << setprecision(37) << H16y << setw(37) << " "\
    << fixed << setprecision(37) << H16z << "\n";

    file << setw(37) << H17" << setw(37) << " "\
    << fixed << setprecision(37) << H17x << setw(37) << " "\
    << fixed << setprecision(37) << H17y << setw(37) << " "\
    << fixed << setprecision(37) << H17z << "\n";

    file << setw(37) << H18" << setw(37) << " "\
    << fixed << setprecision(37) << H18x << setw(37) << " "\
    << fixed << setprecision(37) << H18y << setw(37) << " "\
    << fixed << setprecision(37) << H18z << "\n";

    file << setw(37) << H19" << setw(37) << " "\
    << fixed << setprecision(37) << H19x << setw(37) << " "\
    << fixed << setprecision(37) << H19y << setw(37) << " "\
    << fixed << setprecision(37) << H19z << "\n";

    file << setw(37) << H20" << setw(37) << " "\
    << fixed << setprecision(37) << H20x << setw(37) << " "\
    << fixed << setprecision(37) << H20y << setw(37) << " "\
    << fixed << setprecision(37) << H20z << "\n";

    file.close();
    
    cout << "program selesai!";

    return 0;
}
