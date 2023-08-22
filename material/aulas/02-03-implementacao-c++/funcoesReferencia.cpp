#include <iostream>
using namespace std;

int sqr_it(int& x); //assinatura da função

int main() {
    int t = 100;
    cout << sqr_it(t) << endl;
    cout << "valor de t = " << t << endl;
    return 0;

}

// Indica a passagem por referencia

int sqr_it(int& x){
    x = x*x;
    return x;
}