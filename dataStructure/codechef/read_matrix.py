#!/bin/python


def read_matrix(matrix):
    list_of_lists = []
    for line in matrix:
        new_list = [int(elem) for elem in line.split()]
        list_of_lists.append(new_list)
    return list_of_lists



if __name__ == "__main__":
    x = input("Enter the matrix:")
    print(read_matrix(x))
