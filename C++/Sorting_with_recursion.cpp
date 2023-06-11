#include <iostream>
using namespace std;

void insertion(int *arr, int i, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    if (i == n)
    {
        return;
    }

    int ans = arr[i];

    int j;
    for (j = i - 1; j >= 0; j--)
    {
        if (arr[j] > ans)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = ans;
    insertion(arr, i + 1, n);
}

int merge(int *arr, int s, int e)
{

    int mid = s + (e - s) / 2;

    int length1 = mid - s + 1;
    int length2 = e - mid;

    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    int ind = s; // copying array element to two arrays
    for (int i = 0; i < length1; i++)
    {
        arr1[i] = arr[ind++];
    }

    for (int i = 0; i < length2; i++)
    {
        arr2[i] = arr[ind++];
    }

    int index1 = 0, index2 = 0;
    int mainindex = s;
    // merge 2 sorted array.

    while (index1 < length1 && index2 < length2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainindex++] = arr1[index1++];
        }
        else
        {
            arr[mainindex++] = arr2[index2++];
        }
    }
    while (index1 < length1)
    {
        arr[mainindex++] = arr1[index1++];
    }
    while (index2 < length2)
    {
        arr[mainindex++] = arr2[index2++];
    }

    delete[] arr1;
    delete[] arr2;
}
int mergesort(int *arr, int s, int e)
{
    
    if (s >= e)
        return 0;
    int mid = s + (e - s) / 2;

     mergesort(arr, s, mid);
     mergesort(arr, mid + 1, e);

     merge(arr, s, e);
    return c;
}

int merging(int *arr, int s, int e)
{
    int inv = 0;
    int mid = s + (e - s) / 2;

    int length1 = mid - s + 1;
    int length2 = e - mid;

    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    int ind = s; // copying array element to two arrays
    for (int i = 0; i < length1; i++)
    {
        arr1[i] = arr[ind++];
    }

    for (int i = 0; i < length2; i++)
    {
        arr2[i] = arr[ind++];
    }

    int index1 = 0, index2 = 0;
    int mainindex = s;
    // merge 2 sorted array.

    while (index1 < length1 && index2 < length2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainindex++] = arr1[index1++];
        }
        else
        {
           
            arr[mainindex++] = arr2[index2++];
            inv+= length1 - index1;
        }
    }
    while (index1 < length1)
    {
        arr[mainindex++] = arr1[index1++];
    }
    while (index2 < length2)
    {
        arr[mainindex++] = arr2[index2++];
    }

    return inv;
    delete[] arr1;
    delete[] arr2;
}
int mergesorting(int *arr, int s, int e)
{
    int inv = 0;
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        inv += mergesorting(arr, s, mid);
        inv += mergesorting(arr, mid + 1, e);
        inv += merging(arr, s, e);
    } 
    return inv; 
}

int partition(int *arr,int s,int e){
    int cnt_less_pivot=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[s]){
            cnt_less_pivot++; 
        }
    }  
    int index=s+cnt_less_pivot; 
    swap(arr[s],arr[index]); 

    int i=s,j=e; 
    while(i<index && j>index){
        if(arr[i]<=arr[index] && arr[j]>=arr[index]) i++,j--; 
        else if(arr[i]<=arr[index] && arr[j]<arr[index]) i++; 
        else if(arr[i]>=arr[index] && arr[j]>arr[index]) j--; 
        else{
            swap(arr[i],arr[j]);
            i++,j--;  
        }
    } 
    return index; 

}

void quicksort(int *arr,int s,int e){

    if(s>=e) return ; 

    int index= partition(arr,s,e);  

    quicksort(arr,s,index-1); 
    quicksort(arr,index+1,e); 

}



int main()
{
    /*   int arr[4] = {4, 20, 1, 100};
        int i = 1, n = 4;
        insertion(arr, i, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
             cout << endl;
    */
   /*    int arr[5] = {8,4,2,1};
       int n = 4;
       int s = 0, e = n - 1;
       cout<<mergesort(arr, s, e)<<endl;

       for (int i = 0; i < n; i++)
       {
           cout << arr[i] << " ";
       }
        cout << endl;

   

    int arr[6] = {5, 4, 3, 2, 1,0};
      int n = 6;
      cout << "count is: " << mergesorting(arr, 0, n - 1) << endl;
 */
   
  int arr[8]={6,-6,-2,-4,-6,2,-6}; 
    int n=8; 
    quicksort(arr,0,n-1); 

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" "; 
   } 
   cout<<"\n"; 

   
   
   
    return 0;
}

