#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void BubbleSort( int arr[] , int size ){
    for ( int i = 0 ; i < size ; i++ ){
        for ( int j = 0 ; j < size - i ; j++ ){
            if( arr[i] > arr[i+1] ){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void SelectionSort( int arr[] , int size ){
    for ( int i = 0 ; i < size-1 ; i++ ){
        int minindex = i ;
        for ( int j = i+1 ; i < size ; i++ ){
            if ( arr[i] < arr[minindex]){
                minindex = i ;
            }
        }

        swap( arr[minindex], arr[i] ) ;
    }

}

void InsertionSort( int arr[] , int size ){
    for ( int i = 1 ; i < size ; i++ ){
        int key = arr[i] ;
        int j = i - 1 ;
        while ( j >= 0 && key < arr[j] ){
            arr[ j+1 ] = arr[ j ] ;
            --j ;
        }
        arr[ j + 1 ] = key ;
    }

}

// MERGE SORT
void merge( int arr[], int left ,int mid, int right ){
    int n1 = mid - left + 1 ;
    int n2 = right - mid ;

    int L[n1],R[n2] ;

    for ( int i = 0 ; i < n1 ; i++ ){
        L[i] = arr[left + i] ;
    }
    for ( int j = 0 ; j < n2 ; j++ ){
        R[j] = arr[mid + 1 + j] ;
    }
    int i = 0, j =0 ;
    int k = left ;

    while ( i < n1 && j < n2 ) {
        if ( L[i] <= R[j] ){
            arr[k] = L[i] ;
            i++;
        }else{
            arr[k] = R[j] ;
            j++ ;
        }
        k++ ;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

   
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }



}

void MergeSort( int arr[], int l, int r ){
    if ( l < r ){
        int m = l + (r-l) / 2 ;
        MergeSort( arr, l , m ) ;
        MergeSort( arr, m + 1, r ) ;
        merge( arr, l, m, r ) ;
    }

}

// QuickSort

int partition( int arr[], int low, int high ){
    int pivot = arr[high] ;

    int i  = ( low - 1 ) ;

    for ( int j = low ; j < high ; j++ ){
        if ( arr[j] <= pivot ){
            i++;

            swap( arr[i], arr[j] ) ;
        }
    }

    swap(arr[i+1],arr[high]);

    return (i+1) ;
}

void QuickSort( int arr[], int low, int high ){
    if ( low < high ){
        int pi = partition(arr,low,high) ;
        QuickSort(arr, low, pi - 1) ;
        QuickSort(arr , pi + 1 , high) ;    
    }
}



int main(){
    
    return 0;
}