#include<stdio.h>
#include<string.h>

int main() {
char str[50]="hello";
int arr[10]={10,20,30};
int len, len2;
len = strlen(str); // strlen은 배열에 할당된 크기가 아닌 '실제 문자열의 자릿수 표시'
len2 = sizeof(str)/sizeof(char)-1;
printf("str길이 : %d\n", len);
printf("str길이 : %d\n", len2);
printf("arr[]길이 : %d\n", sizeof(arr)/sizeof(int));
}