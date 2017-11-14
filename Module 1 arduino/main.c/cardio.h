

//Header du fichier cardio.c

//Wrapping des fonctions C en C++ pour son utilisation dans la fonction main
#ifdef __cplusplus
extern "C" {
#endif

void recolte(int *pouls, int analogIn);
void calcule(long int *temps);

#ifdef __cplusplus
}
#endif
