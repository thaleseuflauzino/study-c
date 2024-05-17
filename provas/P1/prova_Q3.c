float Media(float *pV, int pn){
    float pM = 0;
    int pInd;
    for (pInd = 0; pInd<pn; pInd++)
    {
        pM += pV[pInd];
    }
    return (pM/pn);
}
float Media2(float *pV, int pn){
    float pM = 0, *pVaux = pV;
    int pInd;
    for (pInd = 0; pInd<pn; pInd++)
    {
        pM += *pVaux;
        pVaux++;
    }
    return (pM/pn);
}
int main(void) {
    float vetor[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    
    printf("Media (Media): %.2f\n", Media(vetor, 5));
    printf("Media (Media2): %.2f\n", Media2(vetor, 5));
    
    return 0;
}