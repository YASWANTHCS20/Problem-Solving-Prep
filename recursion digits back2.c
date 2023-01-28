#include<stdio.h>
fun(int input,int i){
    printf("%d ",input);
    fun(input,i++);
}

int main()

{
    int input[5]={10,20,30,40,50};
    fun(input[0],0);

}
