int main(){
    int num, bonus;

    printf("Set num: \n");
    scanf("%d", &num);

    if(num < 10){
        bonus += 5;
        num += 5;
    }
    else if(num > 100 && num < 1000){
        bonus = num * 0.2;
        num = num + bonus;
    } 
    else if(num > 1000){
        bonus = num * 0.1;
        num *= 1.1;
    }

    if(num % 2 == 0){
        bonus += 1;
        num += 1;
    }
    if(num % 5 == 0 && num % 10 != 0){
        bonus += 2;
        num += 2;
    }

    printf("bonus: %d \n", bonus);
    printf("num: %d \n", num);
}