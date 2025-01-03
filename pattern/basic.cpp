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
void numberPattern(int n){
    for(int i = 0;i<=n;i++){
        for(int j= 1; j<=i;j++){
           std:: cout<<j; 
        }
        std::cout<<"\n";
    }
}

void number2Pattern(int n){
    int count = 1;
    for(int i = 1;i<=n;i++){
        for(int j= 1; j<=i;j++){
           std:: cout<<count++; 
        }
        std::cout<<"\n";
    }
}


void decreasepattern(int row,int column){
    for(int i = 0;i<=row;i++){
        for(int j = 1;j<=column-i;j++){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
}
void tranglepattern(int n ){
    for(int i =0;i<=n;i++){
        for(int j =0;j<n-i-1;j++){
            std::cout<<" ";
        }
        
        for(int j =0;j<(2*i-1);j++){
            std::cout<<"*";
        }
       
        for(int j =0;j<n-i-1;j++){
            std::cout<<" ";
        }
         std::cout<<"\n";
    }
}

void tranglereverse(int n ){
    for(int i =0;i<=n;i++){
        for(int j =0;j<i;j++){
            std::cout<<" ";
        }
        
        for(int j =0;j<2*n-(2*i -1);j++){
            std::cout<<"*";
        }
       
        for(int j =0;j<i;j++){
            std::cout<<" ";
        }
         std::cout<<"\n";
    }
}

int main(){
   decreasepattern(4,5);
    number2Pattern(6);
    secondPattern(4,5);
    tranglepattern(9);
    tranglereverse(9);
    return 0;

}
 
