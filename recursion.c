#include<stdio.h>
fun(input){
    int digit;
    if(input==0){
        return 0;
    }
    digit=input%1;
    input=input/10;
    fun(input);
    printf("%d ",digit);
}



int main()

{
    int input,digit,rev;
    input=6749;
    fun(input);

}
