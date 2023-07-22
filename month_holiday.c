/*==============================================*/
/* 月ごとの祝日判定                             */
/* ・動  作 ：                                  */
/*==============================================*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("月の入力>> "); //
	
	scanf("%d", &num);

    switch(num) {
        case 1:
            printf("%d月の祝日は以下です。\n",num);
            printf("正月\n");
            printf("建国記念日\n");
            break;
        case 2:
            printf("%d月の祝日は以下です。\n",num);
            printf("天皇誕生日\n");
            break;
        case 3:
            printf("%d月の祝日は以下です。\n",num);
            printf("春分の日\n");
            break;
        case 4:
            printf("%d月の祝日は以下です。\n",num);
            printf("昭和の日\n");
            break;
        case 5:
            printf("%d月の祝日は以下です。\n",num);
            printf("憲法記念日\n");
            printf("みどりの日\n");
            printf("こどもの日\n");
            break;
        case 6:
            printf("%d月の祝日はなしです。\n",num);
            break;
        case 7:
            printf("%d月の祝日は以下です。\n",num);
            printf("海の日\n");
            break;
        case 8:
            printf("%d月の祝日は以下です。\n",num);
            printf("山の日\n");
            break;
        case 9:
            printf("%d月の祝日は以下です。\n",num);
            printf("敬老の日\n");
            printf("秋分の日\n");
            break;
        case 10:
            printf("%d月の祝日は以下です。\n",num);
            printf("スポーツの日\n");
            break;
        case 11:
            printf("%d月の祝日は以下です。\n",num);
            printf("文化の日\n");
            printf("勤労感謝の日\n");
            break;
        case 12:
            printf("%d月の祝日はなしです。\n",num);
            break;
        default:
            printf("numの値が不正です\n");
    }
    
    return 0;
}

