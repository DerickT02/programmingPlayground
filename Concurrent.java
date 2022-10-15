public class Concurrent extends Thread{

    public static void pause(int time){
        try{
            Thread.sleep(time);
        }
        catch(InterruptedException e){
            Thread.currentThread().interrupt();
            System.err.format("IOException: %s%n", e);
        }

    }

    public static void byeWorld(){
        System.out.println("Bye World");
    }
    public static void main(String[] args){
        Concurrent thread = new Concurrent();
        
        System.out.println("Hello World");
        thread.start();
        pause(5000);
        

        
        
    }

    public void run(){
        System.out.println("Bye World");
    }
}