
#include <iostream>

void rec_tree(int n,int arr[],int &rez,int &max, int &amount){
    for(int i=0;i<amount;i++){
        if(arr[i]==n){
            rez++;
            rec_tree(i,arr,rez,max,amount);
        }
    }
    if(max<rez){
        max=rez;
    }
    rez--;
}

int main(){
    int amount;
    int rez=1;int max=0;
    std::cin>>amount;
    int *arr = new int[amount];
    for(int i=0;i<amount;i++) {
        std::cin >> arr[i];
    }
    for(int i=0;i<amount;i++){
        if(arr[i]==-1){
            rec_tree(i,arr,rez,max,amount);
            break;
        }
    }
    std::cout<<max;
}
