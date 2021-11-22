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
    protected:

    private:

};

#endif // NAVE_H
