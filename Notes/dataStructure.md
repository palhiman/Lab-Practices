__________________

# Data Structures
__________________

* Random Access Memory (RAM), a.k.a. working memory, volatile memory.
* Variables are stored in RAM.
* RAM has address space of 8 bits(1 Byte) each.
* Processor --> Memory Controller --> RAM
* Memory Controller has access to each address space of the RAM.
* Extra speed boost are required when reading memory addresses that are close to each other. This is achieved by using Cache where it stores a copy of recently accessed memory from RAM ( Processor has series of Cache).
------------------

+ Binary Number system a.k.a. base 2 system. only 1 and 0.
+ Decimal 	Binary
    0   	0000
    1     	0001
    2     	0010
    3     	0011
    4 	        0100
    5     	0101
    6     	0110
    7     	0111
    8     	1000
    9     	1001
    10  	1010
    11      	1011
    12      	1100

+ Q: How many different numbers can we express with 1 byte(8 bits)?
+ A: 2^8 = 256 different numbers.
+
+ In Java, Integers are 32 bits and Longs are 64.
+ In SQL - 1 byte (tinyint), 2 bytes (smallint), 4 bytes (int), or 8 bytes (bigint)
-------------------
+ address of nth item in array= address of array start+(n∗size of each item in bytes)
+ addition, subtraction, multiplication, and division of fixed-width integers takes O(1) time.
+ A series of characters (letters, punctuation, etc.) is called a string.
+ mapping of numbers to characters is called a character encoding
+ alphabet is encoded in ASCII:

A: 01000001   S: 01010011   k: 01101011
B: 01000010   T: 01010100   l: 01101100
C: 01000011   U: 01010101   m: 01101101
D: 01000100   V: 01010110   n: 01111110
E: 01000101   W: 01010111   o: 01101111
F: 01000110   X: 01011000   p: 01110000
G: 01000111   Y: 01011001   q: 01110001
H: 01001000   Z: 01011010   r: 01110010
I: 01001001   a: 01100001   s: 01110011
J: 01001010   b: 01100010   t: 01110100
K: 01001011   c: 01100011   u: 01110101
L: 01001100   d: 01100100   v: 01110110
M: 01001101   e: 01100101   w: 01110111
N: 01001110   f: 01100110   x: 01111000
O: 01001111   g: 01100111   y: 01111001
P: 01010000   h: 01101000   z: 01111010
Q: 01010001   i: 01101001    
R: 01010010   j: 01101010

-------------------
+ The pointers are marked with a * at the beginning. 
+ pointer-based array requires less uninterrupted memory and can accommodate elements that aren't all the same size, but it's slower because it's not cache-friendly.
+

