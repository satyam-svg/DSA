def can_form_other_rectangle(a, b):
    if a == b:
        return "No"
    if a > b:
        a, b = b, a
    if a == 1:
        return "Yes" if b > 1 else "No"
    if b == 1:
        return "Yes" if a > 1 else "No"
    if a == 2 and b > 2:
        return "Yes"
    if b == 2 and a > 2:
        return "Yes"
    if a % 2 == 0 and b % 2 == 0:
        return "Yes" if a > 2 and b > 2 else "No"
    return "No"

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print(can_form_other_rectangle(a, b))