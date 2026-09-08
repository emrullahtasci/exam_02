unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int sayi_a = a;
    unsigned int sayi_b = b;
    unsigned int kalan ;
    unsigned int ebob;

    if(a == 0 || b == 0)
    {
        return(0);
    }

    while(sayi_b != 0)
    {
        kalan = sayi_a % sayi_b;
        sayi_a = sayi_b;
        sayi_b = kalan;
    }
    ebob = sayi_a;

    return((a / ebob) * b);

    
}