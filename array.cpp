// Given an array of marks of students, if the marks of any sudent is 
// less then 35 print its roll number
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[6];
//     for(int i = 0; i<=5; i++){
//         cin>>marks[i];
//     }
//     for(int i = 0; i<=5; i++){
//         if(marks[i] < 35) cout<<i<<" ";
//     }
// }

// // OR
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of stduents : ";
//     cin>>n;
//     int marks[n];
//     cout<<"Enter the marks of students : ";
//     for(int i = 1; i<=n-1; i++){
//         cin>>marks[i];
//     }
//     for(int i =1; i<=n-1; i++){
//         if(marks[i] < 35) cout<<i<<" ";
//     }
// }

// // Size of array 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {2, 4, 5, 6, 7, 8, 9, 12, 34, 56};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<size;
// }

// // calculate the sum of all the elements in given array
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     int arr[size];
//     int sum = 0;
//     cout<<"Enter size of array : ";
//     cin>>size;
//     cout<<"Enter the elements of array : ";
//     for(int i =0 ; i<size; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0; i<size; i++){
//         sum +=arr[i];
//     }
//     cout<<"sum = "<<sum<<endl;
// }

// // // LINEAR SEARCH 
// Find the elements X in the array. Take array and x as input
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     bool flag = false;
//     int x;
//     cout<<"Enter the value of x : "<<endl;
//     cin>>x;
//     for(int i =0; i<n; i++){
//         if(x == arr[i]) flag = true;
//         }
//     if(flag == true) cout<<"Found";
//     else cout<<"NOt found";
// }

// // Find the maximum elements out of all the elements in the array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {2, 5, 4, 6, 7};
//     int max = arr[0];
//     for(int i = 0; i<5; i++){
//         if(max < arr[i]) max = arr[i];
//     }
//     cout<<"max = "<<max;
// }

// // MATRIX MULTIPLICATION
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the value of m : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int p;
//     cout<<"Enter the value of p : ";
//     cin>>p;
//     int q;
//     cout<<"Enter the value of q : ";
//     cin>>q;

//     if(n==p){
//     int a[m][n];
//     cout<<"Enter the elements of first matrix : ";
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     int b[p][q];
//     cout<<"Enter the value of second matrix : ";
//     for(int i = 0; i<p; i++){
//         for(int j = 0; j<q; j++){
//             cin>>b[i][j];
//         }
//     }
//     //resultant matrix
//     int res[m][q];
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<q; j++){
//             res[i][j] = 0;
//             for(int k = 0; k<p; k++){
//                 res[i][j] += a[i][k] + b[k][j];
//             }
//         }
//     }
//     // print
//     cout<<"The resultant matrix is  "<<endl;
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<q; j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }else{
//     cout<<"The matrices cannot be  multiplied";
// }
// }

// // PRINT MATRIX IN WAVEFORM
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the value of m : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int a[m][n];
//     cout<<"Enter the elements of first matrix : ";
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i = 0; i<m; i++){
//     if(i%2== 0){
//         for(int j = 0; j<n; j++){
//             cout<<a[i][j]<<" ";
//         }
//         }else{
//             for(int j = n-1; j>=0; j--){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// // WAVEFROM2
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of cols : ";
//     cin>>n;
//     int a[m][n];
//     cout<<"Enter the elements of matrix : ";
//     for(int i =0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     //diplay
//     cout<<"Matrix is = "<<endl;
//     for(int i = m-1; i>=0; i--){
//         if(i % 2 ==0){
//         for(int j = 0; j<n; j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }else{
//         for(int j = n-1; j>=0; j--){
//             cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
//     }
// }
// }

// // column wise printing
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of cols : ";
//     cin>>n;
//     int a[m][n];
//     cout<<"Enter the elements of matrix : ";
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<endl;
//     for(int j = 0; j<m; j++){
//         if(j % 2 == 0){
//         for(int i = 0; i<n; i++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }else{
//         for(int i = m-1; i>=0; i--){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// }

// // SPIRAL MATRIX 
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of cols : ";
//     cin>>n;
//     int minc = 0, minr = 0;
//     int maxc = n-1;
//     int maxr = m-1;
//     int a[m][n];
//     cout<<"Enter the elements of matrix : ";
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<endl;
//     int count = 0;
//     int tne = n*m;
//     while(maxc>=minc && maxr>=minr){
//         for(int j = minc; j<=maxc && count<tne; j++){
//             cout<<a[minr][j]<<" ";
//             count++;
//         }
//         minr++;
//         for(int i = minr; i<=maxr && count<tne; i++){
//             cout<<a[i][maxc]<<" ";
//             count++;
//         }
//         maxc--;
//         for(int j = maxc; j>=minc && count<tne; j--){
//             cout<<a[maxr][j]<<" ";
//             count++;
//         }
//         maxr--;
//         for(int i = maxr; i>=minr && count<tne; i--){
//             cout<<a[i][minc]<<" ";
//             count++;
//         }
//         minc++;
//     }
// }

// SPIRAL MATRIX 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square matrix : ";
    cin>>n;
    int minc = 0, minr = 0;
    int maxc = n-1;
    int maxr = n-1;
    int a[n][n];
    cout<<"Enter the elements of matrix : ";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int count = 0;
    int tne = n*n;
    int num =1;
    while(maxc>=minc && maxr>=minr){
        for(int j = minc; j<=maxc && count<tne; j++){
            a[minr][j] = num++;
            count++;
        }
        minr++;
        for(int i = minr; i<=maxr && count<tne; i++){
            a[i][maxc] = num++;
            count++;
        }
        maxc--;
        for(int j = maxc; j>=minc && count<tne; j--){
            a[maxr][j] = num++;
            count++;
        }
        maxr--;
        for(int i = maxr; i>=minr && count<tne; i--){
            a[i][minc] = num ++;
            count++;
        }
        minc++;
    }
}