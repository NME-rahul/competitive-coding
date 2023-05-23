#include <iostream>
#include<string.h>
using namespace std;

string GetRuler(char kingdom[]) {
    unsigned long int length;
    length=strlen(kingdom);
    char vowel[11]={'A','E','I','O','U','a','e','i','o','u'};
    if(kingdom[length-1]=='y'|| kingdom[length-1]=='Y')
    {
        return "nobody";
    }
    else
    {
        for(int i=0;i<11;i++)
        {
            if(kingdom[length-1]==vowel[i])
            {
                return "Alice";
            }
        }
    }
  return "Bob";
}

int main() {
  int testcases;
  cin >> testcases;
  char kingdom[101];
  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
      //convert first lower letter in capital letter
      for(int i=97;i<=122;i++){
          if(kingdom[0]==i){
              kingdom[0] = kingdom[0]-32;
              break;
          }
        }
    cout << "Case #" << t << ": " << kingdom << " is ruled by "<<GetRuler(kingdom) << ".\n";
  }
  return 0;
}
