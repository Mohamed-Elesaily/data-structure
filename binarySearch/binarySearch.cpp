#include<iostream>
#include<vector>
template<class T>
int binarySearch(std::vector<T> data,T item){
    int start = 0;
    int end = data.size();
    int mid;
    while((mid != data.size()-1)||(mid != 0)){
        mid = (start + end)/2;
        if(item == data[mid]) return mid;
        else if(item > data[mid]) start = mid;
        else if(item < data[mid])   end = mid;
    }
    return -1;
}
int main(){
    int b=6;
    std::vector<int> a = {0,1,2,3,4,5,6,7,8,9};
    std::cout<< binarySearch(a, b);

    return 0;
}