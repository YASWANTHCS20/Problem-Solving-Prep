#include<stdio.h>
fun(input){
    int digit;
    if(input==0){
        return 0;
    }
    digit=input%10;
    input=input/10;
    printf("%d ",digit);
    fun(input);

}



int main()

{
    int input,digit,rev;
    input=6749;
    fun(input);

}
