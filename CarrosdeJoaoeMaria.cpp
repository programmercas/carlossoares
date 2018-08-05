#include <iostream>
#include <iomanip>

using namespace std;


int main () {

    cout << fixed << setprecision(2);

    int ano;
    int maiorano = 0;
    float velocidade;
    float mediavelocidade = 0;
    float maiorvelocidade = 0;
    char opcao;
    float contador = 0;
    float somavelocidade = 0;


    cout << "Deseja cadastrar um carro ? Digite (s ou S) para CONTINUAR ou (n ou N ) para SAIR: " << endl;

    cin >> opcao;

    if (opcao=='n'||opcao=='N'){
        cout<<"zero"<<endl;
    }

    while (opcao == 'S' || opcao == 's') {
        cout << "Digite o ano do carro: " << endl;
        cin >> ano;
        cout << "Digite a velocidade do carro: " << endl;
        cin >> velocidade;

        somavelocidade = somavelocidade + velocidade;

        if (ano > maiorano){
            maiorano=ano;
        }
        if (velocidade>maiorvelocidade){
            maiorvelocidade=velocidade;
        }

        contador = contador +1 ;

        mediavelocidade = (somavelocidade/contador);

        cout << "Deseja cadastrar um carro ? Digite (s ou S) para CONTINUAR ou (n ou N ) para SAIR: " << endl;
        cin >> opcao;

        if (opcao=='N' || opcao=='n'){
            cout<<maiorvelocidade<<endl;
            cout<<maiorano<<endl;
            cout<<mediavelocidade<<endl;
        }
    }
    return 0;
}