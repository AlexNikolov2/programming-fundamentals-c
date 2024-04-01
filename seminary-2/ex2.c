int main(){
    int h,m;

    printf("Set hour: \n");
    scanf("%d", &h);
    printf("Set minute: \n");
    scanf("%d", &m);

    m = m + 15;
    if(m >= 45){
        h = h+1;
        m = m -60;
        if(h > 23){
            h = h - 24;
        }
    }
    if(m >= 60 || h > 24 || m < 0 || h < 0){
        printf("Idiot!");
    }

    if(m < 10 && h < 10){
        printf("0%d:0%d", h, m);
    }
    else if(m < 10 && h > 10){
        printf("%d:0%d", h, m);
    }
    else{
        printf("%d:%d", h, m);
    }
}