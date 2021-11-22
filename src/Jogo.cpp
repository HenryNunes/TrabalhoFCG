#include "Jogo.h"
#include <GLFW/glfw3.h>
//#include "Barreira.h"
#include <cstdio>

Jogo::Jogo()
{
        this->score = 2;
        this->inicio_tempo = glfwGetTime();
        this->velocidade = 1;


        //this->ovnis = vector<ovni>;
        //this->tiros = vector<Tiro>;

       this->superior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
       this->inferior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

       //TODO criar objetos da cena e inserir nos vetores
       //Preenche os vetores
       //Ovnies
       for(int i = 0; i < 5; i++){
          ovni temp(float((i*6)-12), 13.0, 0.0, 0.0, 0.0, 0.0);
          ovnis.push_back(temp);
       }
       //printf("size %d", ovnis.size());

       //Cria nave
       this->nave = Nave(0.0, -12.0, 0.0, 0.0, 0.0, 0.0);

}

Jogo::~Jogo()
{
    //dtor
}

void Jogo::destroi_Ovni(int id){
    ovnis.erase(ovnis.begin() + id);
}

void  Jogo::destroi_Tiro(int id){
    tiros.erase(tiros.begin() + id);
}

void Jogo::reset(){



}

void Jogo::update(){
    //TODO recalcula todas as posições e atualiza nos objetos, verifica se teve colisoes de objetos, elimina casos de objetos destruidos (usar as funções destroi)

}

void Jogo::fim(){
    //ToODO verifica se teve alguma colisão dos ovnis com a nave ou com a barreira inferior
    //Caso tenha para o jogo
}
Nave Jogo::get_Nave(){
    return nave;
}
vector<ovni> Jogo::get_ovinis(){
    return ovnis;
}
vector<Tiro> Jogo::get_tiros(){
    return tiros;
}
Barreira Jogo::get_superior(){
    return superior;
}
Barreira Jogo::get_inferior(){
    return inferior;
}
int Jogo::get_score(){
    return score;
}
