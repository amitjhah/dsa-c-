#include<iostream>
void normalPattern(int n){
    for(int i = 0;i<=n;i++){
        for(int j= 0; j<=i;j++){
           std:: cout<<"*"; 
        }
        std::cout<<"\n";
    }
}
void secondPattern(int row, int column){
    for(int i = 0;i<=row;i++){
        for(int j = 0;j<=column;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}
int main(){
   
    normalPattern(6);
    secondPattern(4,5);
    return 0;

}
 
