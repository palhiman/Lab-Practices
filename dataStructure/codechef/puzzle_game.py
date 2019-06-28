#!/bin/python
# Problem : Puzzel game
#by : Himanshu Shekhar

def read_matrix():
    # reading a 3x3 matrix
    # Enter each row at a time
    print("Enter a matrix:")
    m = 3
    Matrix = [[0 for i in range(m)] for j in range(m)]
    for x in range(m):
        for y in range(m):
            Matrix[x][y] = int(input())
    return Matrix

# for swapping matrix elements
def swap(x):
    for i in range(3):
        for j in range(3):
            x[i],x[j] == x[j], x[i]
    return


if __name__ == "__main__":
    testcases = int(input())  # for number of test cases
    for i in range(testcases):
        matrix = read_matrix()
    
    # cases when sum is a prime number.
    swap_cases = ((1,2),(1,4),(1,6),
    (2,1),(2,3),(2,5),(2,9),
    (3,2),(3,4),(3,8),
    (4,1),(4,3),(4,7),(4,9),
    (5,2),(5,6),(5,8),
    (6,1),(6,5),(6,7),
    (7,4),(7,6),
    (8,3),(8,9),
    (9,2),(9,8))

    # final matrix
    final_matrix = [[1,2,3],[4,5,6], [7,8,9]]

    count = 0    # for counting the number of steps to final matrix
    for i in range(3):
        for j in range(3):
            if matrix[i][j] in swap_cases:
                swap(matrix[i][j])
                count += 1
            else:
                count = 0

    for i in range(3):
        for j in range(3):
            if matrix[i][j] == final_matrix:
                print(count)
            else:
                print(-1)

                
            
    
        


