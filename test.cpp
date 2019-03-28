#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  string texto;
  cin >> texto;
  map<char,int> mapa;
  for(int x=0;x<texto.size();x++){
    if(mapa.count(texto[x])!=0){
      mapa[texto[x]]=mapa[texto[x]]+1;
    }
    else{
      mapa[texto[x]]=1;
    }
  }
  for (std::map<char,int>::iterator it=mapa.begin(); it!=mapa.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';
}
