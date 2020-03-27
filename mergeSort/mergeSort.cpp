#include<iostream>


using namespace std;
void merge(int left[],int right[],int size_l,int size_r, int result[]);
void merge_sort(int arr[], int length, int sorted_arr[]);
int main(){
//     int left[]={3,4};
//     int right[]={0,10,2,3};
//     int result[4];
//     merge_sort(right, 4,result);
//    for(int i=0;i<4;i++) cout<<result[i];
//     return 0;
}
void merge(int left[],int right[],int size_l,int size_r, int result[]){
   int index_r = 0;
   int index_l = 0;
   int index=0;
   while((index_l < size_l) && (index_r<size_r)){
      
      if(left[index_l] <= right[index_r]) result[index++] = left[index_l++];
      else result[index++] = right[index_r++];
   }
    while(index_l<size_l) result[index++] = left[index_l++];
    while(index_r<size_r) result[index++] = right[index_r++];     
}
void merge_sort(int arr[], int length, int sorted_arr[]){
    if(length == 1) return;
    int half = length/2;
    int *arr_l = new int[half];
    int *arr_r = new int[length -half];
   
    int i=0;
    for(;i<half;i++){
        arr_l[i] = arr[i];
        // cout<<arr_l[i]<<'\n';
    }
       cout<<'\n';
    for(int j=0;i<length;j++){
        arr_r[j] = arr[i];
    //   cout<<arr_r[j]<<'\n';
      i++;
    }
    merge_sort(arr_l,half,sorted_arr);
    merge_sort(arr_r,length-half,sorted_arr);
    merge(arr_l,arr_r,half,length-half,sorted_arr);
    delete []arr_l;
    delete []arr_r;
 
}