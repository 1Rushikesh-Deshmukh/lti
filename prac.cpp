#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    int fnm1 = fact(n-1);
    int fn = n*fnm1;
    return fn;
}
int main(){
    cout<<fact(7);
    return 0;
}



//factorial programm
// int main(){
//     int n = 8;
//     int sum = 1;
//     for(int i = n;i>0;i--){
//         sum = sum*i;
//     }
//     cout<<sum;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// // lcm 4,8 --
// //
// int main(){
//     //a,b --- i=1;no
//     //agar mereko 3 numbers ka nikalna hai to hum greatest numbers se rest to element ko divide karenge 
//     int a = 27;
//     int b = 36;
//     int no;
//     for(int i=1;true;i++){
//         no = b*i;
//         if(no%a==0){
//             cout<<no;
//             break;
//         }
//     }
// }



// //hcf or gcd
// //4,8 ,8-2 first number divisble hai wo hcf
// int main(){
//     int a = 24;
//     int b = 36;
//     //might be baraych wela logic madhe pn problem asu shakto neet check kar
//     for(int i =36;i>=2;i--){
//         if(a%i==0 && b%i==0){
//             cout<<i;
//             break;     
//         }
//     }
//     return 0;
// }