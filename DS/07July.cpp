#include <iostream>
using namespace std;

// // 1 sum of elements:
// int main()
// {
//     int intArr[4];
//     int sum = 0;
//     for (int a = 0; a < 4; a++)
//     {
//         cin >> intArr[a];
//         sum += intArr[a];
//     }
//     cout << "Sum of elements: " << sum;
//     return 0;
// }

// // 2 max and min in an array:
// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0], min = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     cout << "Max: " << max << " Min: " << min;
// }

// //3 Reverse an array:
// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int newArr[n];
//     for (int i = n-1; i>=0 ; i--){
//         newArr[i] = arr[n-i-1];
//     }
//     cout<<"Rev arr: \n";
//     for (int i =0; i<n;i++){
//         cout<<newArr[i]<<endl;
//     }
// }

//// 4 freq of elements: 
int main(){
    int arr[5]={1,2,2,3,3};
    int vis[5]={0};
    for (int a=0;a<5;a++){
        if(vis[a]!=0){
            continue;
        }
        int freq=0;
        for (int b =0;b<5;b++){
            if (arr[a]==arr[b]){
                freq++;
                vis[b]=1;
            }
        }
        cout<<arr[a]<<": "<<freq<<endl;
        vis[a]=1;
    }
}
// //5 linear search: 
// int main(){
//     int n = 4;
//     int arr[n]={1,2,3,4};
//     int m ;
//     cout<<"Enter element to search: ";
//     cin>>m;
//     for (int a = 0 ;a <n;a++){
//         if (m==arr[a]){
//             cout<<"Element at position: "<<a+1;
//             return 0;
//         }
//     }
//     cout<<"ELement not found";
//     return 0;
// }a