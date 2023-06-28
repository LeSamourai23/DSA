def Palindrome(S):

    revS= S[::-1]

    if(S==revS):
        print("The string is a Palindrome")
    else:
        print("The string is not a Palindrome")

str= "heleh"
Palindrome(str)