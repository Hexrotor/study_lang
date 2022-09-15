/*猜数字游戏。在第一行中输入两个整数，分别表示设定的被猜数和最大猜测次数N，然后用户开始输入数字来猜测。
如果输入数字较大，则输出"Too big"，较小则输出"Too small"。如果用户一次猜中，则输出"Bingo!"，如果三次及以内猜中该数，则输出"Lucky You!"，如果三次以上猜中该数，则输出"Good Guess!"
如果在输入正确以前猜测次数达到N，或用户输入了一个负数，则输出 “Game Over"并结束游戏
例：58 4
70
60
50
58
输出：
Too big
Too big
Too small
Good Guess!
*/
#include <stdio.h>

int main()
{
    int num;//用户猜测
    int numSet;//被猜测数
    int maxTimes;//最大猜测次数
    int cnt;//已猜测次数
    int found = 0;//是否猜到
    printf("Please enter the number will be guessed and the maximum guess times.\nNote that maximum guess times should be bigger than 3: ");
    scanf("%d %d", &numSet, &maxTimes);
    do {
        printf("Please enter the number you guess: ");
        scanf("%d", &num);
        cnt++;
        if(num == numSet) {
            found = 1;
            if(cnt == 1) {
                printf("Bingo!\n");
            } else if(cnt <= 3) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }
        } else if(cnt == maxTimes || num < 0){ //达到最大猜测次数的或输入数字为负数的就Game Over
            printf("Game Over!\n");
            found = 1;
        } else {
            if(num > numSet) {
                printf("Too big\n");
            } else {
                printf("Too small\n");
            }
        }
    } while(!found);
    return 0;
}