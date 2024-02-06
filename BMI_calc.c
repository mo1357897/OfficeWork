/*==============================================*/
/* BMI計算                                      */
/* ・動  作 ：身長と体重の情報をもとにBMIを出力   */
/*==============================================*/
#include<stdio.h>

int main(void){
double height,weight,bmi; //bmi(BMI),height(身長),weight(体重)の三つの変数を設定
printf("身長を入力してください:");
scanf("%lf",&height); //CUI上で身長を入力
printf("体重を入力してください:");
scanf("%lf",&weight); //CUI上で体重を入力
bmi=weight/(height*height)*10000; //bmi = 体重÷（身長*身長）
printf("%.1f\n",bmi);
return 0;
}