//Synchronization cha program

class Demo extends Thread
{
    public void run()   //running state    //jvm call karel callback method
    {}
     synchronized public void display()
     {}

}

class Multi7
{
    public static void main(String arg[])throws Exception //kutryapasun savdhan jvm la warn karto bagh bar ka exception yeu skakta
    {
        System.out.println("current thread is :"+Thread.currentThread().getName());

        Demo obj1=new Demo();  //new state
        Demo obj2=new Demo();  //new state

        obj1.setPriority(8);
        obj2.setPriority(10);
        
        obj1.start();   //runnable state
        obj2.start();   //runnable state

        System.out.println("priority of obj1 is :"+obj1.getPriority());
        System.out.println("current thread is :"+obj1.getPriority());

        //MIN_PRIORITY   1
        //NORM_PRIORITY  5
        //MAX_PRIORITY   10










    }

}


//application is: pretyek thread la vegla kaam dyaycha 1multiplication karel 1 maximum shodhel 1 common shodhel lavkar hoil 1 min madhye 
//multithreaded application design karaych 
//thread scheduling is purely depends on jvm
//thread parallel work hotat sagle parallelly firtil
////multithreaded application madhye pretyek thread la vegle vegle kaam assign karayche
//mutithreading : 1ka thread che multiple threads
//demon thread: 1 thread kayam run hot rahato to marat nahi
//thread madhye dependencies nahi thevaychya nahitar code barbad hoto