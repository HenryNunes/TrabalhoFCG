#ifndef NAVE_H
#define NAVE_H


class Nave
{
    public:
        Nave(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z);
        virtual ~Nave();

    protected:

    private:
        float t_x;
        float t_y;
        float t_z;

        float r_x;
        float r_y;
        float r_z;

};

#endif // NAVE_H
