#include "stdio.h"

#include "stdlib.h" 



int main()

{

	int i, j, s, c, n;

	printf("輸入 n ，以便求 1 ~ n 內的質數 ： ");

	scanf("%d", &n);

	c = 0;

	for (i = 2; i <= n; i++) {/* i從2的數值開始, i數值小於等於n 繼續執行{程式碼},在每次結束後 i+1 */ 

		s = 0;/* 迴圈內設定 s 是0, 每次執行回圈,會重新設定為0 */ 

		for (j = 2; j*j <= i; j++) /* 開始與結束狀態不再陳述, 繼續執行迴圈條件為 j平方後的數值小於i */ 

			if (i%j == 0) { /* 利用if去判斷,當i 除以j 時,餘數是否為零, 如果為0,那麼 if條件成立執行{程式碼} */ 

				s = 1; /* s設為1 */ 

				break;/* 你想成跳出 j 迴圈的指令 */ 

			}



		if (!s) {/* !驚嘆號是將s的數值反轉,1成為0,0成為1,

				 當if(條件)的條件為1時,執行{程式碼}回上看程式,

				 當j迴圈裡的數值除i都沒有整除時,s設為0,有整數將i整除時,

				 s設為1當無法整除i時,s到了if的判斷時,數值0將會反轉成為1(真),也就是找出質數拉 */ 

			printf("%d ", i); /* %d是printf()控制輸出的方法,d為整數,是i變數輸出依據格式 */ 

			c++;

			if (c % 5 == 0) //每輸出5個數就換行 

				printf("\n");

		}

	}

	system("pause");  //暫停，等待按任意鍵結束

	return 0;  //傳回成功結束碼給系統

}
