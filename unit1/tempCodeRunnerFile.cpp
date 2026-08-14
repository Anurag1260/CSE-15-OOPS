using namespace std;

class Point
{
private:
    int x;
    int y;
   public:
   Point(): x{0},y{0},{}
   Point(int p,int q):x{p},y{q}{
    cout<<"Parametrized Constructor"<<endl;
   }
   void show(){
    cout<<x<<","<<y<<endl;

   }
 };
int main(){
Point p,q(20,50);
p.show();