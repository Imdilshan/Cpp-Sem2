class Rectangle{
        public:
        int l , b;
        void display(){
            cout << l << " " << b << endl;
        }
    };

    class RectangleArea: public Rectangle{
        public:
         void read_input(){
            cin >> l >> b;
        }
        void display(){
            cout << l*b;
        }
    };