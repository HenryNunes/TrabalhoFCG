#include "Tiro.h"


Tiro::Tiro(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z)
{
    this->t_x = t_x;
    this->t_y = t_y;
    this->t_z = t_z;

    this->r_x = r_x;
    this->r_y = r_y;
    this->r_z = r_z;
}

Tiro::~Tiro()
{
    //dtor
}

void Tiro::move(float delta_t){
    this->t_y = this->t_y + 6*delta_t;
}

