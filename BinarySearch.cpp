#include<iostream>
#include<cmath>
using namespace std;

bool BinarySearch(int arr[],int size,int key){
    int start = 0 ;
    int end = size - 1 ;
    int mid = start + ( ( end - start ) / 2 ) ;
    while ( start<end ){
        if( arr[mid] == key ){
            return true ;
        }else if( arr[mid] > key ){
            end = mid - 1 ;
        }else{
            start = mid + 1 ;
        }
        mid = start + ( ( end - start ) / 2 ) ;

    }

    return false ;
}
int main() {
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    cout << (BinarySearch(arr1, 10, 10) ? "Found" : "Not Found") << endl ;
    return 0 ;
}