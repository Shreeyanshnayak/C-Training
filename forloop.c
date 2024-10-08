/*
int main(){

    for (int i=1; i<=5; i++){
        printf("%d\n", i);

    }
    return 0;
}
*/
/*
int main(){

    int numbers[]={10,20,30,40,50};
    for (int i=0; i<5; i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}
*/

int main(){
    for (int i=1;i<=5;i++){
        for(int j=1; j<=5; j++){
            printf("%d * %d = %d\n", i,j,i*j);
        }
    }
    return 0;
}

