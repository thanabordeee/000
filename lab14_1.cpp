#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
  
}
#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N, double B[])
{
     double x,y,z,h,o;
     double min = A[0],max = A[0];
     h = 1/(double)N;
     B[2] = 1;
  
  for (int i = 0; i < N; i++)
  {
  
    B[0] += A[i];
    B[1] += pow(A[i],2);
    x = B[1];
    B[2] *= A[i];
    o += 1/A[i]; 
  }
 for (int i = 1; i < N; i++)
 {
   if(A[i]>max) max = A[i];
   if(A[i]<min) min = A[i];
 }
 
 z = B[2];
 B[0]/=N;
 y = B[0];
 B[1] = sqrt((x/N)-pow(y,2));
 B[2] = pow(z,h);
 B[3] = N/o;
B[4] = max;
B[5] = min;
  
}