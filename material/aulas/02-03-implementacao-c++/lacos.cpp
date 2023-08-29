#include <iostream>
#include <vector>

using namespace std;

void imprimir(vector<int> vetor);
void imprimir2(vector<int> vetor);
void construir(vector<int> &v, int t);

// Main:
int main(){
    int t;
    vector<int> v;
    cout <<"Escreve o tamanho do seu vetor: \n";
    cin >> t;
    // Imprimindo os valores do vetor
    construir(v,t);
    imprimir2(v);
    return 0;
    
}

// Função que imprime um vetor:
void imprimir(vector<int> vetor){
    cout << "Valores do vetor: \n";
    for (int i = 0; i <vetor.size();i++){
        cout <<vetor[i] << " ";
    }
}

void imprimir2(vector<int> vetor){
    cout <<"Valores do vetor: \n";
    for (int num: vetor){
        cout << num << " ";
    }
    cout << endl;
}

void construir(vector<int> &v, int t){
    
    int x;
    for (int i = 0; i < t;i++){
        cout <<"Digite o número da posição "<< i<<": ";
        cin >> x;
        v.push_back(x);
    }
    
}