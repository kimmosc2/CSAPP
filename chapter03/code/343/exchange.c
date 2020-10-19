long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}

int exchange2(int *xp, int y)
{
    int x = *xp;
    *xp = y;
    return x;
}
