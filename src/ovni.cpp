#include "ovni.h"
#include <cmath>
#include <GLFW/glfw3.h>

ovni::ovni(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z, float creation_time)
{
    this->t_x = t_x;
    this->t_y = t_y;
    this->t_z = t_z;

    this->r_x = r_x;
    this->r_y = r_y;
    this->r_z = r_z;

    //Ponto de bezier inicial
    this->b1_x = this->t_x;
    this->b1_y = this->t_y;
    this->b1_z = this->t_z;


    //Ponto de bezier 2
    this->b2_x = this->t_x -10;
    this->b2_y = this->t_y - 9.3333;
    this->b2_z = this->t_z;

    //Ponto de bezier 3
    this->b3_x = this->t_x + 10;
    this->b3_y = this->t_y - 18.6666;
    this->b3_z = this->t_z;

    //Ponto de bezier final
    this->b4_x = this->t_x;
    this->b4_y = -15;
    this->b4_z = this->t_z;

    //tempo
    this->creation_time = glfwGetTime();
    this->destruction_time = glfwGetTime() + 12.0;


}

ovni::~ovni()
{
    //dtor
}

void ovni::move(float delta_t){
    //Efeito de girar
    this->r_y = this->r_y + 0.01;
    this->r_x = this->r_x + 0.01;

    //this->t_y = this->t_y - 2*delta_t;

    //valor do t normalizado
    float t = (glfwGetTime() - this->creation_time) / 12.0;

    //calcula a posicao na curva de bezier de grau 3
    float b03 = pow(1 - t, 3);
    float b13 = 3 * t * pow(1 - t, 2);
    float b23 = 3 * pow(t, 2) * (1 - t);
    float b33 = pow(t, 3);

    float cx = b03 * this->b1_x + b13 * this->b2_x + b23 * this->b3_x + b33 * this->b4_x;
    float cy = b03 * this->b1_y + b13 * this->b2_y + b23 * this->b3_y + b33 * this->b4_y;

    this->t_x = cx;
    this->t_y = cy;
}
