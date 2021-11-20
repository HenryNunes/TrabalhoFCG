#ifndef JOGO_H
#define JOGO_H

#include <vector>
#include <Nave.h>
#include <ovni.h>
#include <Barreira.h>
#include <Tiro.h>

using std::vector;

class Jogo
{

    public:
        Jogo();
        virtual ~Jogo();
        void reset();
        vector<Nave> get_Naves();
        vector<ovni> get_ovinis();
        vector<Tiro> get_tiros();
        Barreira get_superior();
        Barreira get_inferior();
        void fim();
        void update();
        void destroi_Nave(int id);


    protected:

    private:
        int pontuacao;
        int inicio_tempo;
        int velocidade;

        vector<Nave> naves;
        vector<ovni> ovnis;
        vector<Tiro> tiros;
        Barreira superior;
        Barreira inferior;
};

#endif // JOGO_H
