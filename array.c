int main(){

    float studentGrade[5]={87.5,92.0,78.3,95.7,88.9};
    float total =0;
    for (int i=0;i<5;i++){

        total += studentGrade[i];

    }
    float average = total/5;

    printf("Average Grade : %.2f\n", average);

    return 0;
    
}