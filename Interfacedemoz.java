interface Demo          //interface la inherit nahi karu shakat karan tykadun kahi milat nahi jababdari yete fakt paan class la karu shakto karan tykadun milta
{
    void fun();
}

class Hello
{
    void gun();
}

class Marvellous implements Demo extends Hello      //demo ha interface ahe aani hello ha class ahe so demo hello la extend nahi karu shakat 
{
    public void fun()               //he method implement karna imp ahe karan ti interface kadun aali ahe class kadun nahi jababdari ahe
    {}
}



