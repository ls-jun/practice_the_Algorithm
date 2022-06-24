from heapq import *

def solution(scoville, K):
    answer = 0
    heapify(scoville)
    while scoville[0] < K and len(scoville) > 1:
        heappush(scoville, heappop(scoville) + heappop(scoville) * 2)
        answer += 1
    return answer if scoville[0] >= K else -1