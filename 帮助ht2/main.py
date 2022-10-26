hs = eval(input("请输入行数"))
# 代码开始
for i in range(-hs+1, hs):
    print(' '*abs(i)+'+'*(2*(hs-abs(i))-1))