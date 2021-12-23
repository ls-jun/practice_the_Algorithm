def solution(n,signs):
    answer = []

    for i in range(n):
        for j in range(n):
            for k in range(n):
                if signs[j][i] == 1 and signs[i][k]:
                    signs[j][k] = 1

    return signs 