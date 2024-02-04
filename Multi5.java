class Demo extends Thread
{
    public void run()   //running state    //jvm call karel callback method
    {
        for(int i=1; i<10;  i++)
        {
            try
            {
                System.out.println("value of i is :"+i);
                Thread.sleep(5000);  //1second=1000miliseconds
            }   //1 vakya display kar mg zop parat display kar mg parat thodya vel zop asa arth varchya line cha
            catch(Exception obj)
            {}
            
        }
        
    }

}

class Multi5
{
    public static void main(String arg[])throws Exception //kutryapasun savdhan jvm la warn karto bagh bar ka exception yeu skakta
    {
        System.out.println("current thread is :"+Thread.currentThread().getName());

        Demo obj1=new Demo();  //new state

        obj1.start();   //runnable state
        obj1.join();  //child thread sampeparyant thambaych ahe jaych nahi mag maraycha

        System.out.println("end of main thread");
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