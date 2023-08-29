#include <iostream>
#include <fstream> // Biblioteca para trabalhar com arquivos.

using namespace std;

int main(){
    string nomeArquivo = "exemplo.txt";

    // Abrir o arquivo para a escrita:
    ofstream arq(nomeArquivo); // Variavel chamada arq

    // Verificando se o arquivo foi aberto com sucesso:
    if (!arq.is_open()) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    // Escrevendo texto no arquivo:
    arq << "Olá, este é um exemplo de texto em arquivo."<<endl;
    arq <<"Mais uma linha no arquivo."<< endl;
    arq << "Agora chega!"<< endl;
    arq << "Fimmm!"<< endl;

    // Fechar o arquivo:
    arq.close();
    cout << "Arquivo gerado com sucesso! \n";

    // Abrir aquivo para leitura:
    ifstream meu_arquivo("exemplo.txt");

    // Verificando se o arquivo foi aberto com sucesso:
    if (!meu_arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    string linha;
    while( getline(meu_arquivo,linha)){
        cout << linha<< endl;
    }

    // Fecha o arquiv(o:
    meu_arquivo.close();

    return 0;
}

