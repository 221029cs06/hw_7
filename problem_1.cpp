#include <iostream>
using namespace std;
void numb(int n, int reversed_number = 0){
    int remainder;
while (n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
}

cout<<reversed_number;
}
int main() {

    int m, number = 0, remainde;

    
    cin >> m;
    numb( m);
  

   

    return 0;
}
