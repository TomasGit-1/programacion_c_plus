class Punto{
    private:
        //Coordenads x, y
        int x, y;
    public:
        //Contructor
        Punto(int x_, int y_){
            x = x_;
            y = y_;
        }
        Punto () { x= y = 0; } //Contructor sin argumentos
        int leerX() const; //devuelve el valor de x
        int leerY() const; //devuelve el valor de y

        void fijarX(int valoX); // establece el valor de x
        void fijarY(int valorY); // establece el valor de y
};

