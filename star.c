/*==============================================*/
/* 星座判定                                      */
/* ・動  作 ：月日ごとの星座を出力                */
/*==============================================*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int month;
    int day;
	
	printf("月の入力>> "); 
	
	scanf("%d", &month); //月の入力
    scanf("%d",&day); //日の入力

    if (month = 1 AND day >= 20 AND day <= 31 OR month = 2 AND day <= 18)
    {
        printf("あなたの星座はみずがめ座です");
    } else if (month = 2 AND day >= 19 AND day <= 29 OR month = 3 AND day <= 20) //2月19日から3月20日の場合
    {
        printf("あなたの星座はうお座です");
    } else if (month = 3 AND day >= 21 AND day <= 31 OR month = 4 AND day <= 19) //3月21日から4月19日の場合
    {
        printf("あなたの星座はおひつじ座です");
    } else if (month = 4 AND day >= 20 AND day <= 30 OR month = 5 AND day <= 20) //4月20日から5月20日の場合
    {
        printf("あなたの星座はおうし座です");
    } else if (month = 5 AND day >= 21 AND day <= 31 OR month = 6 AND day <= 21) //5月21日から6月21日の場合
    {
        prontf("あなたの星座はふたご座です");
    } else if (month = 6 AND day >= 22 AND day <= 30 OR month = 7 AND day <= 22) //6月22日から7月22日の場合
    {
        printf("あなたの星座はかに座です");
    } else if (month = 7 AND day >= 23 AND day <= 31 OR month = 8 AND day <= 22) //7月23日から8月22日の場合
    {
        printf("あなたの星座はしし座です");
    } else if (month = 8 AND day >= 23 AND day <= 31 OR month = 9 AND day <= 22) //8月23日から9月22日の場合
    {
        printf("あなたの星座はおとめ座です");
    } else if (month = 9 AND day >= 23 AND day <= 30 OR month = 10 AND day <= 23) //9月23日から10月23日の場合
    {
        printf("あなたの星座はてんびん座です");
    } else if (month = 10 AND day >= 24 AND day <= 31 OR month = 11 AND day <= 22) //10月24日から11月22日の場合
    {
        prontf("あなたの星座はさそり座です");
    } else if (month = 11 AND day >= 23 AND day <= 30 OR month = 12 AND day <= 21) //11月23日から12月21日の場合
    {
        printf("あなたの星座はいて座です")
    } else if (month = 12 AND day >= 22 AND day <= 31 OR month = 1 AND day <= 19) //12月22日から1月19日の場合
    {
        printf("あなたの星座はやぎ座です");
    } else //該当なしの場合
    {
        printf("入力ミスです");
    }

    return 0;
}