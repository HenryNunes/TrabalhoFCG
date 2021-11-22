#ifndef TIRO_H
#define TIRO_H


class Tiro
{
    public:
        Tiro(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z);
        virtual ~Tiro();
        float t_x;
        float t_y;
        float t_z;

        float r_x;
        float r_y;
        float r_z;
    protected:

    private:

};

#endif // TIRO_H
