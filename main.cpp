#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i = 0, k;
    string texto;
    while (getline(cin, texto)){
        k = texto.length();
        i = 0;
        while(i < k){
            if (texto[i] == ' '){
                if (texto[i+1] == '.' || texto[i+1] == ','){
                    i++;
                }else{
                    cout << texto[i];
                    i++;
                }
            }else{
                cout << texto[i];
                i++;
            }
        }
        cout <<endl;
    }
    return 0;
}
