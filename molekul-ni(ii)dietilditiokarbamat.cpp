
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
    
    // masukkan nilai untuk setiap variabel C10H20N2NiS4
    Nix = Niy = Niz = 0.0;
  
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
