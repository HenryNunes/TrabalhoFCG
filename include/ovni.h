#ifndef OVNI_H
#define OVNI_H


class ovni
{
    public:
        ovni(float t_x, float t_y, float t_z, float r_x, float r_y, float r_z, float creation_time);
        virtual ~ovni();

        float t_x;
        float t_y;
        float t_z;

        float r_x;
        float r_y;
        float r_z;
        void move(float delta_t);
    protected:

    private:
        float b1_x;
        float b1_y;
        float b1_z;

        float b2_x;
        float b2_y;
        float b2_z;

        float b3_x;
        float b3_y;
        float b3_z;

        float b4_x;
        float b4_y;
        float b4_z;

        float creation_time;
        float destruction_time;
};

#endif // OVNI_H
