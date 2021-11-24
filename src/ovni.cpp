#include "ovni.h"

ovni::ovni(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z)
{
    this->t_x = t_x;
    this->t_y = t_y;
    this->t_z = t_z;

    this->r_x = r_x;
    this->r_y = r_y;
    this->r_z = r_z;
}

ovni::~ovni()
{
    //dtor
}

void ovni::move(float delta_t){
    this->t_y = this->t_y - 4*delta_t;
    this->r_y = this->r_y + 0.01;
    this->r_x = this->r_x + 0.01;
}
