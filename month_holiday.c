/*==============================================*/
/* 月ごとの祝日判定                              */
/* ・動  作 ：月ごとの祝日を出力                  */
/*==============================================*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("月の入力>> "); 
	
	scanf("%d", &num); //月の入力

    switch(num) {
        case 1: //1月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("正月\n");
            printf("建国記念日\n");
            break;
        case 2: //2月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("天皇誕生日\n");
            break;
        case 3: //3月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("春分の日\n");
            break;
        case 4: //4月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("昭和の日\n");
            break;
        case 5: //5月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("憲法記念日\n");
            printf("みどりの日\n");
            printf("こどもの日\n");
            break;
        case 6: //6月の祝日を出力
            printf("%d月の祝日はなしです。\n",num);
            break;
        case 7: //7月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("海の日\n");
            break;
        case 8: //8月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("山の日\n");
            break;
        case 9: //9月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("敬老の日\n");
            printf("秋分の日\n");
            break;
        case 10: //10月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("スポーツの日\n");
            break;
        case 11: //11月の祝日を出力
            printf("%d月の祝日は以下です。\n",num);
            printf("文化の日\n");
            printf("勤労感謝の日\n");
            break;
        case 12: //12月の祝日を出力
            printf("%d月の祝日はなしです。\n",num);
            break;
        default: //月以外が入力された場合、エラーメッセージを出力
            printf("numの値が不正です\n");
    }
    
    return 0;
}

