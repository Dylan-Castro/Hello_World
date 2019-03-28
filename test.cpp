#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  string texto;
  cin >> texto;
  map<string,int> mapa;
  for(int x=0;x<texto.size();x++){
    if(mapa.count(texto[x])!=0){
      mapa[texto[x]]=mapa[texto[x]]+1;
    }
    else{
      mapa[texto[x]]=1;
    }
  }


}
