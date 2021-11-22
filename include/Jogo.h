#ifndef JOGO_H
#define JOGO_H

#include <vector>
#include <Nave.h>
#include <ovni.h>
#include <Barreira.h>
#include <Tiro.h>
#include <cstdio>

using std::vector;

class Jogo
{

    public:
        Jogo();
        virtual ~Jogo();
        int get_score();
        Nave* get_Nave();
        vector<ovni> get_ovinis();
        vector<Tiro> get_tiros();
        Barreira get_superior();
        Barreira get_inferior();
        void fim();
        void update();
        void reset();
        void destroi_Ovni(int id);
        void destroi_Tiro(int id);
        void start();
        float ultimo_frame;
        float ultimo_disparo;
        void dispara();
        bool para = 0;
    protected:

    private:
        int score;
        float inicio_tempo;

        int velocidade;

        vector<ovni> ovnis;
        vector<Tiro> tiros;
        Nave nave = Nave(0.0, -12.0, 0.0, 0.0, 0.0, 0.0);
        Barreira superior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
        Barreira inferior = Barreira(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
};

#endif // JOGO_H
