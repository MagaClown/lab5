#include <iostream>
using namespace std;
 
int main()
{
    setlocale(0,"");
 
    const int N = 11; 
    int A[N] = {2,0,7,3,5,2,0,9,0,3,2};
 
    int k1 = 0; 
    while (k1 < N && A[k1] != 0) k1++;
 
    int k2 = N; 
    while (k2 > 0 && A[k2] != 0) k2--;
 
    int sum = 0; 
    for (int i = k1; i < k2; i++) sum += A[i];
 
    cout << "Array elements:\n";
    for (int i = 0; i < N; i++) cout << "  " << A[i];
 
    cout << "\n\nThe index of the first zero element:\n  " << k1
         << "\nIndex of the last zero element:\n  " << k2
         << "\nSum of elements between first and last zero elements:\n  " << sum
         << endl;
 
   
    return 0;
}
