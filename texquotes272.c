#include<stdio.h>
 
static char t[256];
 
int main(){
    register unsigned i, k, c = 0;
 
    while(gets(t)){
        char inp[256] = {'\0'};
 
        for (i = k = 0; t[i]; ++i){
            if (t[i] == 34 && !c){
                inp[k] = inp[k+1] = 96;
                k += 2;
                c = 1;
            }else if(c && t[i] == 34){
                inp[k] = inp[k+1] = 39;
                k += 2;
                c = 0;
            }else{
                inp[k] = t[i];
                ++k;
            }
        }
        printf("%s\n", inp);
    }
    return 0;
}