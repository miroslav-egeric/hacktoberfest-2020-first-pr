#include <iostream> 

using namespace std; 
  
void swap(int *a, int *b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}  
    
void bubbleSort(int arr[], int n)  
{    
    for (int i = 0; i < n-1; i++)      
    {
        for (int j = 0; j < n-i-1; ++ j)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);  
            }  
        }  
    }
}  

  
int main()  
{  
    int arr[] = { 7, 2, 1, 12, 14, 5, 25 };

    int n = 7;  
    
    bubbleSort(arr, n);  

    for (int i=0; i<n; ++ i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;  
}  
  