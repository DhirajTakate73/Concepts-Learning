import java.awt.*;
import java.awt.event.*;

class MarvellousFrame   //frame display karnyakarta
{
    public MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(300, 600);     //(width, height)
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener implements WindowListener      //aaiknara   abstract methods concrete kelya pahije interface ahe mahnun
{
    public void windowDeactivated(WindowEvent obj)
    {}
    public void windowActivated(WindowEvent obj)
    {}
    public void windowDeiconified(WindowEvent obj)
    {}
    public void windowIconified(WindowEvent obj)
    {}
    public void windowClosed(WindowEvent obj)
    {}
    public void windowClosing(WindowEvent obj)
    {System.exit(0);}

    public void windowOpened(WindowEvent obj)
    {}


}
class GUI3
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }       
}