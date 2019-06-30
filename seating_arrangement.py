#!/usr/bin/env python3
# Problem: Seating Arrangement
# solved by: Himanshu Shekhar
# dated: 29-06-2019

seating_arrangement = [
    (1,12,'WS'),(2,11,'MS'),(3,10,'AS'),(4,9,'AS'),(5,8,'MS'),(6,7,'WS'),
    (13,24,'WS'),(14,23,'MS'),(15,22,'AS'),(16,21,'AS'),(17,20,'MS'),(18,19,'WS'),
    (25,36,'WS'),(26,35,'MS'),(27,34,'AS'),(28,33,'AS'),(29,32,'MS'),(30,31,'WS'),
    (37,48,'WS'),(38,47,'MS'),(39,46,'AS'),(40,45,'AS'),(41,44,'MS'),(42,43,'WS'),
    (49,60,'WS'),(50,59,'MS',),(51,58,'AS'),(52,57,'AS'),(53,56,'MS'),(54,55,'WS'),
    (61,72,'WS'),(62,71,'MS'),(63,70,'AS'),(64,69,'AS'),(65,68,'MS'),(66,67,'WS'),
    (73,84,'WS'),(74,83,'MS'),(75,82,'AS'),(76,81,'AS'),(77,80,'MS'),(78,79,'WS'),
    (85,96,'WS'),(86,95,'MS'),(87,94,'AS'),(88,93,'AS'),(89,92,'MS'),(90,91,'WS'),
    (97,108,'WS'),(98,107,'MS'),(99,106,'AS'),(100,105,'AS'),(101,104,'MS'),(102,103,'WS')]



if __name__ == "__main__":
    # number of test cases
    T = int(input())

    for i in range(T):
        N = int(input()) # denotes the seat-number
        for x in range(len(seating_arrangement)):
            if seating_arrangement[x][0] == N:
                print(f"{seating_arrangement[x][1]} {seating_arrangement[x][2]}")
            elif seating_arrangement[x][1] == N:
                print(f"{seating_arrangement[x][0]} {seating_arrangement[x][2]}")
        





