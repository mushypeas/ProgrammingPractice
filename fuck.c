#include <stdio.h>
#include <stdlib.h>
#define MAX 1200000
int main(){
      int *list;
      list = (int *)malloc(MAX * sizeof(int));
      int pt=0, num=0, n=0;
      char *element;
      element = (char *)malloc(MAX * sizeof(char));
      scanf("%[^\0\n]", element);
      while(*element != '\0'){
            if(*element >= '0' && *element <= '9'){
                  num = 0;
                  while(*element >= '0' && *element <= '9'){
                        num *= 10;
                        num += *element - '0';
                        element++;
                  }
                  list[pt++] = num;
            }
            else if(*element == '+'){
                  n = list[--pt];
                  list[--pt] += n;
                  pt++;
            }
            else if(*element == '-'){
                  n = list[--pt];
                  list[--pt] -= n;
                  pt++;
            }
            else if(*element == '/'){
                  n = list[--pt];
                  list[--pt] /= n;
                  pt++;
            }
            else if(*element == '*'){
                  n = list[--pt];
                  list[--pt] *= n;
                  pt++;
            }
            else if(*element == '%'){
                  n = list[--pt];
                  list[--pt] %= n;
                  pt++;
            }
            element++;
      }
      printf("%d", list[0]);
      free(list);
      free(element);
      return 0;
   }
