#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char* s)
{
  int l = 0,r = strlen(s) - 1;
  if(*s == '\0')
	  return true;
  while(l < r)
  {
	if(isalnum(*(s+r)) == 0)
	{
		--r;
		continue;
    }
	if(isalnum(*(s+l)) == 0)
	{
		++l;
		continue;
	}
	if((tolower(*(s+r--)) != tolower(*(s+l++))))
		return false;
  }
    return true;
}


int main()
{
  char s[] = "race a car";
 // int i = isalnum(' ');
  isPalindrome(s);
  return 0;
}



