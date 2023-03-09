#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    bool flag = false;
    int num[25];
    for(int i = 0;i < 25;i++){
        flag = false;
        num[i] = rand() % 25 + 1;
        for(int l = 0;l < i;l++){
            if(num[l] == num[i]) {
                flag = true;
                break;
            }   
        }    
        if(flag == false){
            cout << num[i] << " ";
        }else{
            i--;
            continue;
        }
        if((i + 1)%5 == 0){
            cout << "\n";
        }
    }
}   
