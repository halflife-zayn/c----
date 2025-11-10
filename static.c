#include<stdio.h>
//static int static_count = 10;
void counter_function( ){
int static_count = 0;
static_count++;
printf("Static count: %d\n", static_count);}
int main(){
    //int static_count = 0;
counter_function();
counter_function();
counter_function();
return 0;}

/*#include<stdio.h>

void test_func( ){
static int static_count = 0;
static_count++;
if(static_count%2==0){
    int auto_counter=0;
    auto_counter+=5;
    printf("auto_counter: %d\n", auto_counter);
}
printf("Static count: %d\n", static_count);
}
int main(){
    
test_func( );
test_func( );
test_func( );
test_func( );
test_func( );

return 0;}*/