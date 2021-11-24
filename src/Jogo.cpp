#include "Jogo.h"
#include <GLFW/glfw3.h>
//#include "Barreira.h"
#include <cstdio>
#include "Colissions.h"

Jogo::Jogo()
{
        this->score = 0;
        this->inicio_tempo = 0;
        this->velocidade = 1;
        this->ultima_onda = 0;
        this->para = 0;

        this->ovnis = vector<ovni>();
        this->tiros = vector<Tiro>();
        printf("reset\n");

       //Cria nave
       //this->nave = Nave(0.0, -12.0, 0.0, 0.0, 0.0, 0.0);
}

Jogo::~Jogo()
{
    //dtor
}

void Jogo::destroi_Ovni(int id){
    //printf("%d \n", this->score);
    this->score = this->score + 1;
    ovnis.erase(ovnis.begin() + id);
}

void  Jogo::destroi_Tiro(int id){
    tiros.erase(tiros.begin() + id);
}

void Jogo::start(){
    this->inicio_tempo = glfwGetTime();
    this->ultima_onda = glfwGetTime();

    //Ovnies
    for(int i = 0; i < 5; i++){
       ovni temp(float((i*6)-12), 13.0, 0.0, 0.0, 0.0, 0.0, glfwGetTime());
       ovnis.push_back(temp);
    }
}


void Jogo::update(){
    if(this->para == 1) return;

    //TODO recalcula todas as posições e atualiza nos objetos, verifica se teve colisoes de objetos, elimina casos de objetos destruidos (usar as funções destroi)
    float agora = glfwGetTime();
    float delta_t = agora - this->ultimo_frame;

    //move tiros
    for(int i = 0; i < this->tiros.size(); i++){
            tiros[i].move(delta_t);
    }
    //move ovnis
    for(int i = 0; i < this->ovnis.size(); i++){
       ovnis[i].move(delta_t);
    }

    //limpa tiros
    for(int i = 0; i < this->tiros.size(); i++){
        if(tiros[i].t_y > 15){
          this->destroi_Tiro(i);
        }
    }

    //Procura colisoes
    for(int o = 0; o < this->ovnis.size(); o++){
        for(int t = 0; t < this->tiros.size(); t++){

            if( Colissions::colisao(ovnis[o].t_x, ovnis[o].t_y, ovnis[o].t_z, 1.0, tiros[t].t_x, tiros[t].t_y, tiros[t].t_z, 0.5) == 1){
                this->destroi_Tiro(t);
                this->destroi_Ovni(o);
            }
        }
    }


    //verifica se ovnis ganharam
    for(int i = 0; i < this->ovnis.size(); i++){
        if(ovnis[i].t_y < -15){
            this->para = 1;
        }
    }

    //Cria novos ovnies
    if(glfwGetTime() - this->ultima_onda > 6.0 ){
        for(int i = 0; i < 5; i++){
            ovni temp(float((i*6)-12), 13.0, 0.0, 0.0, 0.0, 0.0, glfwGetTime());
            ovnis.push_back(temp);
        }
        this->ultima_onda = glfwGetTime();
     }

    this->ultimo_frame = agora;
}

void Jogo::fim(){
    //ToODO verifica se teve alguma colisão dos ovnis com a nave ou com a barreira inferior
    //Caso tenha para o jogo
}
Nave* Jogo::get_Nave(){
    return &nave;
}
vector<ovni> Jogo::get_ovinis(){
    return ovnis;
}
vector<Tiro> Jogo::get_tiros(){
    return tiros;
}

int Jogo::get_score(){
    return this->score;
}
void Jogo::dispara()
{
    if(this->para == 1) return;
    float delta_t = glfwGetTime() - this->ultimo_disparo;
    if(delta_t > 0.5){
        Tiro temp(this->nave.t_x, -9.7, 0, 0, 0, 0);
        this->tiros.push_back(temp);
        this->ultimo_disparo = glfwGetTime();
    }

}
