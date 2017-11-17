//Header du fichier cardio.c

//Wrapping des fonctions C en C++ pour son utilisation dans la fonction main
#ifdef __cplusplus
extern "C" {
#endif

void allumage_led(int *pouls);
void blink_mode(int *pouls);
void one_led_mode(int *pouls);
void two_led_mode(int *pouls);
void select_led_mode();
void caterpillar_mode(int *pouls);
void flexy_mode(int *pouls);

#ifdef __cplusplus
}
#endif
