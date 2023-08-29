#include <iostream>
#include <vector>

using namespace std;

int main(){
    const int linhas = 3;
    const int colunas = 3;

    //Instanciar uma matriz com todos os valores zerados:
    vector<vector<int>> matriz(linhas, vector<int>(colunas,0));

    //Preenchendo a matriz com valores informados pelo usuário:
    for (int i=0; i<linhas;i++){
        for (int j=0; j < colunas; j++){
            cout << "Digite o valor para a posição [" << i << "]["<<j<<"]: ";
            cin >> matriz[i][j];
        }
        cout << endl;
    }
    
    // Imprimindo a matriz:
    cout << "Matriz:\n";
    for (int i=0; i<linhas;i++){
        for (int j=0; j < colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}