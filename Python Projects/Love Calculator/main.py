name1 = input("Enter your name :")
name2 = input("Enter his/her name :")

combine_name = name1 + name2
lower_case_str = combine_name.lower()

t = lower_case_str.count('t')
r = lower_case_str.count('r')
u = lower_case_str.count('u')
e = lower_case_str.count('e')
true = t + r + u + e + 0

l = lower_case_str.count('l')
o = lower_case_str.count('o')
v = lower_case_str.count('v')
e = lower_case_str.count('e')
love = l + o + v + e + 0

love_score_str = str(true) + str(love)
love_score = int(love_score_str)
# love_score = true*10 + love

if love_score > 51  :
    print(f"your score is {love_score} and you go together like Rajma and Chaval ")
elif love_score >=40 and love_score <=50:
    print(f"your score is {love_score} and you are alright together ")
else:
    print(f"your score is {love_score}  ")
