#!/usr/bin/python3

def bayesian(a,b,c):
    p_b = a * b + c * (1 - a)
    d = a * b / p_b
    return d

a = 0.01
b = 0.9
c = 0.05

print(f"[+] probability: {bayesian(a,b,c):.4%}")
