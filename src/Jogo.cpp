#include "Jogo.h"
#include <GLFW/glfw3.h>
//#include "Barreira.h"

Jogo::Jogo()
{
        int score = 0;
        int inicio_tempo = glfwGetTime();
        int velocidade = 1;

        Nave nave(0.0, -5.0, 0.0, 0.0, 0.0, 0.0);
        vector<ovni> ovnis;
        vector<Tiro> tiros;

       Barreira superior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
       Barreira inferior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

       //Preenche os vetores
       //Ovnies
       for(int i = 0; i < 5; i++){
          Nave temp(float(i-2), 0.0, 0.0, 0.0, 0.0, 0.0);
          naves.push_back(temp);
       }

}

Jogo::~Jogo()
{
    //dtor
}

void Jogo::destroi_Nave(int id){
    naves.erase(naves.begin() + id);
}

void  Jogo::destroi_Tiro(int id){
    tiros.erase(tiros.begin() + id);
}

void Jogo::reset(){
    int score = 0;
    int inicio_tempo = glfwGetTime();
    int velocidade = 1;
    vector<Nave> naves;
    vector<ovni> ovnis;
    vector<Tiro> tiros;

    Barreira superior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    Barreira inferior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

    //TODO criar objetos da cena e inserir nos vetores
}

void Jogo::update(){
    //TODO recalcula todas as posições e atualiza nos objetos, verifica se teve colisoes de objetos, elimina casos de objetos destruidos (usar as funções destroi)

}

void Jogo::fim(){
    //ToODO verifica se teve alguma colisão dos ovnis com a nave ou com a barreira inferior
    //Caso tenha para o jogo
}
vector<Nave> Jogo::get_Naves(){
    return naves;
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
