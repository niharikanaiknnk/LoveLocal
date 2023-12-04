#include <bits/stdc++.h>
using namespace std;
  
// Function to find Majority element
// in an array
void findMajority(int arr[], int n){
      int count1 = 0, count2 = 0;
    int first=INT_MAX, second=INT_MAX;
    int flag=0;
    for (int i = 0; i < n; i++) {
  
        // if this element is previously seen, increment count1.
        if (first == arr[i])
            count1++;
  
        // if this element is previously seen, increment count2.
        else if (second == arr[i])
            count2++;
      
        else if (count1 == 0) {
            count1++;
            first = arr[i];
        }
  
        else if (count2 == 0) {
            count2++;
            second = arr[i];
        }
  
        // if current element is different from both the previously seen variables, decrement both the counts.
        else {
            count1--;
            count2--;
        }
    }
  
    count1 = 0;
    count2 = 0;
  
    // Again traverse the array and find the actual counts.
    for (int i = 0; i < n; i++) {
        if (arr[i] == first)
            count1++;
  
        else if (arr[i] == second)
            count2++;
    }
      
    if (count1 > n / 3){
        cout << first << " ";
          flag=1;
    }
    if (count2 > n / 3){
        cout << second << " ";
          flag=1;
    }
      if(flag==0){
          cout << "No Majority Element" << endl;
    }
}
   
int main() {
 
    int arr[] = {3,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Function calling
    findMajority(arr, n);
  
    return 0;
}