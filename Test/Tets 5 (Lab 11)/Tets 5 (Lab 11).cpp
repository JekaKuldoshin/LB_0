//Проверить, является ли натуральное число N с i - й по j - ю цифру палиндромом.

#include<iostream>

using namespace std;
 
char s[50];
int flag;
 
int IsPalindrome(char *s)
{
  int i = 0, j = strlen(s) - 1;
  while(i < j)
  {
    if (s[i] != s[j]) return 0;
    i++; j--;
  }
  return 1;
}
 
int main(void)
{
    gets_s(s);
 
  flag = IsPalindrome(s);
  if (flag == 1) cout << "Yes" << endl; else cout << "No" << endl;;
  return 0;
}