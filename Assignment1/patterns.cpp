/*

*                *      * * * *    * * * *
* *            * *      * * *        * * *
* * *        * * *      * *            * *
* * * *    * * * *      *                *

    *        * * * * *    1           1
   * *        * * * *     2 2         2  3
  * * *        * * *      3 3 3       4  5  6 
 * * * *        * *       4 4 4 4     7  8  9  10
* * * * *        *        5 5 5 5 5   11 12 13 14 15

      1            1          A         A
    2 3          2 3 2        B B       B C
  3 4 5        3 4 5 4 3      C C C     D E F
4 5 6 7      4 5 6 7 6 5 4    D D D D   G H I J

*/

#include <iostream>
using namespace std;
void star_pattern(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<'*'<<" ";
    }
    cout<<endl;
  }
}
void reverse_star_pattern(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<"  ";
    }
    for(int k=0;k<=i;k++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}
void star_pattern2(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
void reverse_star_pattern2(int n){
  for(int i=0;i<n;i++){
    for(int k=0;k<i;k++){
      cout<<"  ";
    }
    for(int j=0;j<n-i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
void triangle(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    for(int k=0;k<=i;k++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}
void reverse_triangle(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int k=0;k<n-i;k++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}
void number_triangle(int n){
  int x=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<x<<" ";
    }
    x+=1;
    cout<<endl;
  }
}
void increase_number_triangle(int n){
  int x=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<x<<" ";
      x+=1; 
    }
    cout<<endl;
  }
}
void number_mirrorimage(int n){
  for(int i=0;i<n;i++){
    int x=i+1;
    for(int j=0;j<n-i-1;j++){
      cout<<"   ";
    }
    for(int k=0;k<=i;k++){
      cout<<x<<"  ";
      x++;
    }
    cout<<endl;
  }
}
void special_triangle(int n){
  for(int i=0;i<n;i++){
      int k=0;
      int j=i+1;
      for(k=0;k<n-i-1;k++){
        cout<<"  ";
      }
      for(int l=k;l<k+2*i+1;l++){
        cout<<j<<" ";
        if(l<n-1){
          j++;
        }
        else{
          j--;
        }
      } 
    cout<<endl;
  }
}
void alphabet_triangle(int n){
  char ch='A';
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<ch<<" ";
    }
    ch+=1;
    cout<<endl;
  }
}
void increase_alphabet_triangle(int n){
  char ch='A';
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<ch<<" ";
      ch+=1; 
    }
    cout<<endl;
  }
}
int main()
{
  return 0;
}