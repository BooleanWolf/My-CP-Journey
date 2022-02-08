# Divison Rule

## Circular Arrangment

You have 3 friends.
You want them to sit in a circle table with 3 chairs.

The possible way would be 1 2 3, 1 3 2, 2 1 3, 2 3 1, 3 1 2, 3 2 1 => 6 ways
but you are wrong because in a circular arrangment, 123 same as 231 same as 312

So the answer is 6/3 == 3!/3

Generally, n!n = (n-1)!

## Chess

You have a 8 X 8 chess board. Your task is to put 2 rocks, with no shared rows or columns. Meaning if you have

'''
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
'''
If you occupy one position like this
'''
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,1,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
[0,0,0,0,0,0,0,0]
'''

You cant use the column or row 1 is at for the other rock.

So for the first rock we have 8x8 = 64 choices. Afer placing that should have 7x7=49 choices left. But
You are wrong!!

In your solution you have included {(0,0), (1,1)}, {(1,1), (0,0)} and many more pair like this.

Answer = 64 \* 49/2
