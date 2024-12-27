#include <iostream>
#include <vector>
#include <map>
using namespace std;

//Solución 1:
// bool isUnique (string word) {
//     if (word.length() > 128){
//         return false;
//     }
//     vector<bool> conteo(128,false);
//     for (char c: word){
//         if (!conteo[c]){
//             conteo[c] = true;
//         } else {
//             return false;
//         }
//     }
//     return true;
// }


//Solución
bool isUnique(string word) {
    map<int,int> letras; //para el valor ascii
    for (int i = 0; i < word.length(); i++){
        letras[static_cast<int>(word[i])] = i;
        //cout <<letras[i]<<endl;
    }

    if (letras.size() != word.length()){
        return false;
    }else {
        return true;
    }   
}

int main() {
    bool resultado = isUnique("aba");
    cout<<resultado;
    return 0;
}

