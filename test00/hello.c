#include <stdio.h>

int main(void){

int i, j;
for(i = 0; i < 3; i++){
printf("数字を入力してください : ");
scanf("%d", &j);
if(j <= 100){
printf("100以下です\n");
}else{
printf("%d\n", j);
}
}

return 0;
}
