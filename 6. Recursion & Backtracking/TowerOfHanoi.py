def ToH(n, From, To, Mid):

    if(n==0):
        return;

    ToH(n-1, From, Mid, To)

    print("Disc", n, "From Rod", From, "To Rod", To)

    ToH(n-1, Mid, To, From)

ToH(3, "A", "C", "B")