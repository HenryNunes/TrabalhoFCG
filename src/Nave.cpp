#include "Nave.h"
#include <cstdio>
#include <GLFW/glfw3.h>

Nave::Nave(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z)
{
    printf("Nave criada\n");
    this->t_x = t_x;
    this->t_y = t_y;
    this->t_z = t_z;

    this->r_x = r_x;
    this->r_y = r_y;
    this->r_z = r_z;
}

Nave::~Nave()
{
    //dtor
}

void Nave::mover_direita(float delta_t){
    if(this->t_x > 20.0) return;

    //printf("Antes %f", this->t_x);
    this->t_x = this->t_x + 20 * delta_t;
    //printf("Depois %f\n", this->t_x);
}
void Nave::mover_esquerda(float delta_t){
    if(this->t_x < -20.0) return;
    this->t_x = this->t_x - 20 * delta_t;
}

