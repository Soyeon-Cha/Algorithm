def dfs(board, m, n, x, y, visited):
    nx, ny = 0, 0  # nx, ny에 각각 0과 0을 대입
    visited[x][y] = True  # visited 배열에서의 현재 좌표의 값을 True로 바꿈
    
    if board[x][y] == '-':
        nx = x
        ny = y+1  # 오른쪽으로 한 칸 이동
        # nx, ny가 나타내는 값은 움직인 다음의 좌표값
        # 좌표값이 m, n 범위 안에 있는지 없는지에 따라 dfs 함수를 다시 돌릴지 안 돌릴지 결정됨
    else:
        nx = x+1  # x행 y열, m행 n열
        ny = y  # 아래로 한 줄 이동

    if nx<m and ny<n and board[nx][ny] == board[x][y] and not visited[nx][ny]:
        dfs(board, m, n, nx, ny, visited)

def solution(board, m, n):
    answer = 0
    # 방문 기록을 위한 2D 리스트 생성
    visited = [[False]*n for _ in range(m)]
    # 탐색
    for i in range(m):
        for j in range(n):
            if visited[i][j]:  # 이미 방문한 칸은 건너뛰기
                continue
            dfs(board, m, n, i, j, visited)  # dfs 탐색 수행
            answer += 1  # 한 번 탐색 끝나면 전체 타일의 개수 하나 추가됨
    return answer

if __name__ == "__main__":
    m, n = map(int, input().split())  # 입력
    board = []
    for _ in range(m):
        row = list(input())
        board.append(row)

    print(solution(board, m, n))
