#include <stdio.h>
//#pragma pack(push)
//#pragma  pack(4)
struct  s
{
  //  union {
        int a; //4
       char str[10];//10

 //   };
    struct  s *next;//8

} s;
struct  s1
{
      union {
    int a; //4
    char str[10];//10

      };
    struct  s *next;//8

} s1;
struct s2{
    char a;
    int b;
    double  c;

} s2;
int main() {
    int *p;
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(s));
    printf("%d\n", sizeof(s1));
    printf("%d\n", sizeof(s2));
    /*output:
     * 8
     *24
     *24
     * 16
     */


    return 0;
}