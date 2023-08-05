## Bitwise AND ( & ) Operator

    7 ->   0 1 1 1
    4 -> & 0 1 0 0
    --------------
    4 <-   0 1 0 0

    7 & 4 = 4


## Bitwise OR ( | ) Operator

    7 ->   0 1 1 1
    4 -> | 0 1 0 0
    --------------
    4 <-   0 1 1 1

    7 | 4 = 7


## Bitwise NOT ( ~ ) Operator

    7 -> ~ 0 1 1 1
    --------------
    8 <-   1 0 0 0

    ~7 = 8


## Difference between Bitwise and Logical Operators

```c
    int main() {
        char x = 1, y=2;    //x = 1 (0000 0001), y= 2 (0000 0010)

        if(x&y)
            printf("Result of x&y is 1");   //1 & 2 = 0(0000)
        if(x&&y)
            printf("Result of x&&y is 1");  //1 && 2 = TRUE && TRUE = TRUE = 1 

        return 0;
    }
```


## Left Shift Operator

First operand (whose bits get shifted) << second operand (Decides the number of places to shift the bits)


#### Important Points

1. When bits are shifted left then trailing positions are filled with zeroes

```c
    #include <stdio.h>

    int main()
    {
        char var = 3;   //Note: r in binary is (0000 0011). Also, char is 1 byte or 8 bits
        printf("%d", var<<1);
        return 0;
    }
```

    var << 1    var = 3 (0000 0011)

    Left shift by 1 position

    0000 011_ (fill the empty space with 0).
    So,

    Answer will be 6 (0000 0110)

2. Left shifting is equivalent to multiplication by 2^(rightOperand)

    Example:
        var = 3;
        var << 1        Output: 6 [3x 2^1]
        
        var << 4        Output: 48 [3 x 2^(4)]


## Right Shift Operator

First operand (whose bits get right shifted) >> second operand (Decides the number of places to shift the bits)

1. When bits are shifted right then leading positions are filled with 0

```c
    #include <stdio.h>

    int main()
    {
        char var = 3;   //Note: r in binary is (0000 0011). Also, char is 1 byte or 8 bits
        printf("%d", var>>1);
        return 0;
    }
```

    var >> 1    var = 3 (0000 0011)

    Right shift by 1 position

    _000 001 (fill the empty space with 0)
    So,

    Answer will be 1 (0000 0001)

2. Left shifting is equivalent to division by 2^(rightOperand)

    Example:
        var = 3;
        var << 1        Output: 1 [3 / 2^1]
        
        var = 32
        var << 4        Output: 2 [32 / 2^(4)]


## XOR Operator

Either A is 1 or B is 1 then the output is 1 but when both A and B are 1 then output is 0.

| A | B | A XOR B |
| - | - | ------- |
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |

Example:

    7 ->   0 1 1 1
    4 -> ^ 0 1 0 0
    --------------
    3 <-   0 0 1 1

    7 ^ 4 = 3 



