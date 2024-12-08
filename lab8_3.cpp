#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int age ;
    int height ;
    int bounty ;
    
    cout << "Enter your age: " ;
    cin >> age ;
    
    if(age <= 25){
        cout << "Enter your height: " ;
        cin >> height ;
        if(height < 100){
            cout << "Your character = " << "Chopper" ;
        }else{
            if(height < 180){
                cout << "Your character = " << "Usopp" ;
            }else{
                cout << "Enter your bounty: " ;
                cin >> bounty ;
                
                if(bounty > 11 * pow(10,8)){
                    cout << "Your character = " << "Zoro" ;
                }else{
                    cout << "Your character = " << "Sanji" ;
                }
            }
        }
    }else{
        if(age <= 60){
            cout << "Enter your bounty: " ;
            cin >> bounty ;
            
            if(bounty > 50 * pow(10,7)){
                cout << "Your character = " << "Jinbe" ;
            }else{
                cout << "Your character = " << "Franky" ;
            }
        }else{
            cout << "Your character = " << "Brook" ;
        }
    }
    
    return 0 ;
}
