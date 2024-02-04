class Demo extends Thread
{
    public void run()       //jvm call karel callback method
    {
        String name=Thread.currentThread().getName();
        System.out.println("current thread is :"+name);
        //System.out.println("current thread is :"+Thread.currentThread().getName());
        for(int i=1; i<1000; i++)
        {
            System.out.println("name of thread is :"+name+" with counter:"+i);
        }
    }

}

class Multi3
{
    public static void main(String arg[])
    {
        System.out.println("current thread is :"+Thread.currentThread().getName());

        Demo obj1=new Demo();  //new state

        Demo obj2=new Demo(); //new thread

        obj1.setName("first _thread");
        obj2.setName("second_thread");

        obj1.start();   //runnable state

        obj2.start();   //runnable state  

       System.out.println("thread goes to dead state");     //dead state


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