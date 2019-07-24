#include<iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main(){

    string frase;

    while(getline(cin,frase)){

        int tam = frase.size();
        int num=0;
        int qtd=0;
        string token;

        istringstream iss(frase);
        while ( getline(iss, token, ' ') ){

            bool b = false;
            int tam = token.size();
            int num_aux = 0;

            for(int i=0 ; i<tam ; i++){
                if( isdigit(token[i] ) || token[i] == '.' && i!=tam-1){
                    b=true;
                    break;
                }else if(token[i] == '.'){
                }else{
                    num_aux++;
                }
            }
            if(b==false){
                num+=num_aux;
                qtd++;
            }
        }
        int comprim_medio;
        (qtd == 0) ? comprim_medio = 0 : comprim_medio = num/qtd;
        if(comprim_medio <=3){
            cout<<"250"<<endl;
        }else if(comprim_medio == 4 || comprim_medio == 5 ){
            cout<<"500"<<endl;
        }else{
            cout<<"1000"<<endl;
        }
    }
}
