"""
斐波那契数列
"""

#递归调用
def fibo(n):
    if n == 2 or n == 1:
        return 1
    else:
        return fibo(n-2) + fibo(n-1)

if __name__ == "__main__":
    print(fibo(6))


