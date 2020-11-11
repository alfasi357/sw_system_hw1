#define e 2.718281828
double Power(double x, int y) {
         double x1=1;
      if(y==0)
      return 1;
      if(y>0){
       for(int i=1; i<=y; i++){
           x1=x1*x;
       }
      }
      if(y<0){
        for(int i=-1; i>=y; i--){
            x1=x1/x;
        }
      }
        return x1;
}
double Exponent(int x) {
       return  Power(e, x);
    
}
