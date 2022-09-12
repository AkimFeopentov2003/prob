def check(st):
    stack = []
    flag = -1
    for i in range(len(st)):
        if st[i] == '(' or st[i] == '{' or st[i] == '[' or st[i] == ')' or st[i] == '}' or st[i] == ']':
            if st[i] == '(' or st[i] == '{' or st[i] == '[':
                stack.append(i)
            else:
                if not stack:
                    flag = i
                    break
                top = stack.pop()
                if (st[top] == '(' and st[i] != ')') or (st[top] == '[' and st[i] != ']') or (
                        st[top] == '{' and st[i] != '}'):
                    flag = i
                    break
    if flag == -1 and not stack:
        print('Success')
    elif flag != -1:
        print(i + 1)
    else:
        while stack:
            i = stack.pop()
        print(i + 1)


st = input()
check(st)
