#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void numbersinreverse(int set[], int start, int end)
{
    while (start < end)
    {
        int temp = set[start]; 
        set[start] = set[end];
        set[end] = temp;
        start++;
        end--;
    } 
}     
 
/* Utility function to print an array */
void numbersinset(int set[], int size)
{
   for (int i = 0; i < size; i++)
   cout << set[i] << " ";
 
   cout << endl;
} 
// Function for calculating variance 
int variance(int set[], int n) 
{ 
    // Compute mean (average of elements) 
    int sum = 0; 
    for (int i = 0; i < n; i++) 
        sum += set[i]; 
    double mean = (double)sum /  
                  (double)n; 
  
    // Compute sum squared  
    // differences with mean. 
    double sqDiff = 0; 
    for (int i = 0; i < n; i++)  
        sqDiff += (set[i] - mean) *  
                  (set[i] - mean); 
    return sqDiff / n; 
} 
  
double standardDeviation(int set[],  
                         int n) 
{ 
    return sqrt(variance(set, n)); 
} 
 
/* Driver function to test above functions */
int main() 
{
    int set[] = {5, 10, 15, 20, 25, 30, 35, 40};
     
    int n = sizeof(set) / sizeof(set[0]); 
 
    // To print original array 
    cout << "The number in set are :" << endl;
    numbersinset(set, n);
     
    // Function calling
    numbersinreverse(set, 0, n-1);
     
    cout << "The number in reverse order :" << endl;
     
    // To print the Reversed array
    numbersinset(set, n);
     
    cout << "The Standard Devision is : "
         << standardDeviation(set, n) << "\n";
     
    return 0;
}