#include<stdio.h>
float triageScore(int severity, int age, int vitals);
int main(){
    int s,a,v;
    printf("Enter Severity (1-10), Age Risk (1-10), and Vitals Stability (1-10): ");
    scanf("%d %d %d", &s, &a, &v);

    float score=triageScore(s,a,v);
    printf("Triage Score: %.2f\n", score);
    if (score>7.0){
        printf("Immediate attention required\n");
    } else if (score>=4.0){
        printf("Moderate priority\n");
    } else{
        printf("Can wait\n");
    }
    return 0;
}
float triageScore(int severity, int age, int vitals){
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}
