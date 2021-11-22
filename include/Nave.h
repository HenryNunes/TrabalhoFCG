#ifndef NAVE_H
#define NAVE_H


class Nave
{
    public:
        Nave(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z);
        virtual ~Nave();

        float t_x;
        float t_y;
        float t_z;

        float r_x;
        float r_y;
        float r_z;

        void mover_direita(float delta_t);
        void mover_esquerda(float delta_t);
    protected:

    private:

};

#endif // NAVE_H
