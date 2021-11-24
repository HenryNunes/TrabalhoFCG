#include "Colissions.h"
#include <cmath>


//Calcula a colisão entre dois pontos baseado em um circulo para cada ponto com raio ra e rb.

static int Colissions:colisão(float pa_x, float pa_y, float pa_z, float ra, float pb_x, float pb_y, float pb_z, float rb){

    float dist = pow() pow(pa_x - pb_x, 2) + pow(pa_y - pb_y, 2) + pow(pa_z - pb_z, 2), 0.5 );

    if(dist < (ra + rb) )return 1;
    return 0;
}
