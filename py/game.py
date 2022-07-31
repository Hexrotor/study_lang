""" 用Python设计第一个游戏 """

temp = input("猜想一下数字：")
guess = int(temp)

if guess == 8:
    print("猜对了")
else:
    print("猜错啦，是8")

print("游戏结束")