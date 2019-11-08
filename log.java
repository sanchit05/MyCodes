package logs;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;

import java.util.Scanner;

//logger class
public class LoggerExample {
    private String message;
    private final static Logger logger= LogManager.getLogger(LoggerExample.class);
    public void PrintLogs()
    {
        Scanner sc=new Scanner(System.in);
        while (true)
        {
            System.out.println("enter message");
            message=sc.next();
            logger.info(message);
            if(message.equals("exit"))
            {
                break;

            }

        }
    }
}
//main class
public class App 
{
    public static void main( String[] args )
    {
       LoggerExample loggerExample= new LoggerExample();
       loggerExample.PrintLogs();
    }
}
