#include <iostream>
#include <map>
#include <algorithm>
#include <ext/hash_map>
using namespace __gnu_cxx;
using namespace std;

void Swap(char* a,char* b)
{
    auto temp = *a;
    *a = *b;
    *b = temp;
};


bool isswap(char* _str,size_t start,size_t end)
{
  for(;start<end;start++)
  {
      if(_str[start]==_str[end])
      {
          return false;
      }
  }
  return true;
};



void helper(char* _str,size_t start, size_t length)
{
    if (start==length-1)
    {
        cout<<_str<<endl;
    }

    for (size_t i=start;i<=length-1;i++)
    {
        if(isswap(_str,start,i))
        {
            Swap(&_str[start],&_str[i]);
            helper(_str,start+1,length);
            Swap(&_str[start],&_str[i]);
        }
    }
};


void allrange(char* _str)
{
    if (_str==NULL)
    {
        return;
    }
    helper(_str,0,strlen(_str));
};



int main() {
    //question1();
    char tmp[] = "122";
    allrange(tmp);
    //可以生成字符串的全排列
}
