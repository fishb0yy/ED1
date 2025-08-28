int main(){

    int a, b, c, d, dif;
    int *pa, *pb, *pc, *pd, *pdif;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;
    pdif = &dif;
    
    printf("insira os quatro valores: \n");
    scanf("%d %d %d %d", pa, pb, pc, pd);

    *pdif = (*pa  *  *pb) - (*pc  *  *pd);

    printf(" o resultado da diferenca eh: %d", *pdif);
    return 0;
}