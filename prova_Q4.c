int Repete1(int pnumero, int pdigito){
    int pdig, pdiv, pcont = 0;
    if (pnumero <10)
    {
        if (pnumero == pdigito){return 1;} 
        else {return 0;}
    }
    pdiv = pnumero/10;
    pdig = (pnumero - pdiv*10);
    if (pdig == pdigito){pcont = 1;}
    return pcont + Repete1(pdiv, pdigito);
}
int Repete2(int pnumero, int pdigito){
    int pdig, pdiv;
    if (pnumero <10)
    {
        if (pnumero == pdigito){return 1;} 
        else {return 0;}
    }
    pdiv = pnumero/10;
    pdig = (pnumero - pdiv*10);
    if (pdig == pdigito){return Repete2(pdiv, pdigito+1);}
    return Repete2(pdiv, pdigito);
}
int Repete3(int pnumero, int pdigito, int pqtde){
    int pdig, pdiv;
    if (pnumero <10)
    {
        if (pnumero == pdigito){return pqtde + 1;} 
        else {return pqtde;}
    } else
    {
        pdiv = pnumero/10;
        pdig = (pnumero - pdiv*10);

        if (pdig == pdigito){return Repete3(pdiv, pdigito, pqtde+1);}
        return Repete3(pdiv, pdigito, pqtde);
    }
}
int Repete4(int pnumero, int pdigito, int pqtde){
    int pdig, pdiv;
    if (pnumero <10)
    {
        if (pnumero == pdigito){return 1;} 
        else {return 0;}
    } else
    {
        pdiv = pnumero/10;
        pdig = (pnumero - pdiv*10);

        if (pdig == pdigito){return Repete4(pdiv, pdigito, pqtde+1);}
        return Repete4(pdiv, pdigito, pqtde);
    }
}
int main() {
    int numero = 1233554;
    int digito = 5;

    printf("Repete1: O dígito %d repete-se %d vezes no número %d\n", digito, Repete1(numero, digito), numero); // correta
    printf("Repete2: O dígito %d repete-se %d vezes no número %d\n", digito, Repete2(numero, digito), numero);
    printf("Repete3: O dígito %d repete-se %d vezes no número %d\n", digito, Repete3(numero, digito, 0), numero); // correta
    printf("Repete4: O dígito %d repete-se %d vezes no número %d\n", digito, Repete4(numero, digito, 0), numero);

    return 0;
}