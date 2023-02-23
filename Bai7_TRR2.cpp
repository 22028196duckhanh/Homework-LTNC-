#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int a[], int x, int start, int end,int &count)
{
	int mid, location;
    while (start<end){
    	count++;
    	mid = (start+end)/2;    	
    	count++; // so sanh a[mid] voi x
    	if (a[mid] == x) {return mid+1;}
    	if (a[mid] > x) end = mid - 1;
    	else start = mid+1;
    	
	}
	count++; // thoat vong lap
	if (a[start] > x) location = start; else location = start+1;	
	count++; // so sanh a[start] voi x
	return location;
}

void insertionSort(int a[], int n,int &count)
{
    int i, pos, j, tmp; 
    for (i = 1; i < n; i++)
    {
        j = i - 1;
       	tmp = a[i];
        pos = binarySearch(a, tmp, 0, j,count); 
        while (pos <= j)
        {
        	count++;
            a[j + 1] = a[j];
            j--;
        }
        count++; // thoat vong lap
        a[j + 1] = tmp;
    }
}
 
int main()
{
    int n=8;
    int count=0; // dem so phep so sanh
	int a[n] = {7,4,3,8,1,5,4,2};
 
    insertionSort(a, n,count);
 
    for (int i = 0; i < n; i++)
        cout << a[i]<<" ";
 	
 	cout << endl <<"So phep so sanh cua insertion binary sort : "<< count;
    return 0;
}
