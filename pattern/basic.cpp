#include<iostream>
void normalPattern(int n){
    for(int i = 0;i<=n;i++){
        for(int j= 0; j<=i;j++){
           std:: cout<<"*"; 
        }
        std::cout<<"\n";
    }
}
int main(){
    int n = 6;
    normalPattern(n);
    return 0;

}
 
