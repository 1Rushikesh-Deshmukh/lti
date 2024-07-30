#include<bits/stdc++.h>
using namespace std;

//hcf or gcd
//4,8 ,8-2 first number divisble hai wo hcf
int main(){
    int a = 24;
    int b = 36;
    for(int i =36;i>=2;i++){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// //remove vowels from string
// int main(){
//     string a = "abbecidoeb";
//     int n = a.length();
//     for(int i =0;i<n;i++){
//         if(a[i]=='a'|| a[i]=='e'|| a[i]=='i' || a[i]=='o'|| a[i]=='u' ){
//             a = a.substr(0,i) + a.substr(i+1);
//         }
//         i--;
//     }
//     cout<<a;
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

//how to reverse a string
// int main(){
//     string a ="how are you ?";
//     string b = a;
//     int l = a.length();
//     int i=0;
//     int j = l-1;
//     //i<l,
//     while(i<l){
//         a[i] = b[j]; 
//         i++;
//         j--;
//     }
//     cout<<a;

// }







//check weather no is amstrong or not
// 153 ,remainder ,cube at the end if 
// int main(){
//     int n = 153;
//     int n1 = 153;
//     int sum =0;
//     int x;
//     for(int i=0;n!=0;i++){
//         x = n%10; //3,5
//         n= n/10; //15,1
//         sum = sum + pow(x,3); //27+123
//     }
// if(sum==n1){
//     cout<<"it is a armstrong number"<<endl;
// }
// else{
//     cout<<"not a armstrong number"<<endl;
// }

//     return 0;
// }































// #include<bits/stdc++.h>
// using namespace std;

//     int main(){
//         //convert karo binary to decimal
//         int n = 111;
//         int x;
//         int sum = 0;
//         //khupach locha kela re mitra n cha jagi i and n cha jagi x
//         for(int i=0;n!=0;i++){
//             x = n % 10;
//             n = n/10;
//             sum = sum + x*pow(2,i);
//         }
//         cout<<sum<<endl;
//         return 0;
//     }
    


//#include<bits/stdc++.h>
//using namespace std;

    //reverse a string inplace
    //aadmi rupesh
    // int main(){
    //     string s = "aadmi";
    //     int n = s.length();
    //     int i = 0;
    //     int j = n-1;
    //     while(i<=j){
    //         swap(s[i],s[j]);
    //         i++;
    //         j--;
    //     }
    //     //i<=j hsepur imdaa
    //     cout<<s<<endl;
    // }

    // go to the end and print string in reverse order



    //lcm 
    // 4 : 4 ,8, 12
    // 6 : 6 12
    //hcf:
    // 4: 1,2,4
    //6:1,2,3,6
    // int (){


    //     return 0;
    // }



    // // int main(){
    //     string s = "take you forward";
    //     string str = "take you forward";
    //     //back loop ,space encouter push
    //     int n = s.length();
    //     for(int i=n-1;i>=0;i--){
    //         if(s[i] == ' '){
    //             str = str + s.substr(i+1);
    //         }

    //     }

    //     return 0;
    // }


// int main(){
//     //how to swap two numbers without using two variables
//     //a=5 b=8 , a - 13 b=8 (a+b) ,b=a-b b=5 ,a=a-b 
//     int a = 5;
//     int b = 8;
//     a = a + b;
//     b = a - b;
//     a = a -b;
//     cout<<"swapped a : "<<a<<" swapped b : "<<b;
//     return 0;
// }

// int main(){
//     //fiboanacci 0,1,1,2,3,5,8,13
//  
//     //a,b 1 print 
//     //jar -amg asa case asel 3,5
//     // sum ,prev  a-5 b-3 swap a,b
//     // a -8 b-5 cout<<
//     int a =1;
//     int b = 1;
//     int n=10;
//     for(int i = 1;i<n;i++){
//         if(i==0||i==1){
//             cout<<a<<" ";
//         }
//          //1,1,2,3,5,8
//         b= a+b;
//         cout<<b<<" ";
//         a = b - a;
//     }
//     return 0;
// }



// int main(){
//     //fiboanacci ,1,1,2,3,5,8,13
//     //a,b 1 print 
//     //jar mg asa case asel 3,5
//     // sum ,prev  a-5 b-3 swap a,b
//     // a -8 b-5 cout<<
//     int a =1;
//     int b = 1;
//     int n=10;
//     for(int i = 1;i<n;i++){
//         if(i==0||i==1){
//             cout<<a<<" ";
//         }
//         //i=2,1,1
//         a = a + b; //2,a-2,b-1
//         cout<<a<<" ";
//         swap(a,b); //a-1,b-2 that are the next two terms required for calculation
//         //a-3,3,b-2,swap ,b-3 a-2
//     }
//     return 0;
// }




// int main(){
//     // 1-20 ,loop ,individual,print 
//     // 7- ,1-7 divisible ,print
//     for(int i=1;i<=20;i++){
//         if(i==1){
//             continue;
//         }
//         int count = 0; // it should be zero here bcoz at next iteration 
//         for(int j= 1;j<=i;j++){
//             if(i%j==0){
//                 count++;
//             }
//         }
//         if(count==2){
//             cout<<i<<" ";
//         }
//         count =0;
//     }
//     return 0;
// }


// int main(){
//     int n = 9;
//     int count = 0;
//     // 1-n loop ,2 divisible prime if more than 2 not prime
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count= count + 1;
//         }
//     }
//     if(count==2){
//         cout<<"prime number"<<endl;
//     }
//     else{
//         cout<<"not a prime no"<<endl;
//     }
//     return 0;
// }
// divisble 1,no