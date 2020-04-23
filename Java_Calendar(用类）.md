# Java第三次上机作业

```java
import java.util.Calendar;
import java.util.Scanner;
import java.util.*;
import java.text.*;

public class CalendarDemo {
    public static void main(String[] args) throws Exception{
        System.out.println("请输入年月日");
        Scanner in=new Scanner(System.in);
        String month=in.next();
        String day=in.next();
        String year=in.next();

        SimpleDateFormat fmt=new SimpleDateFormat("dd MM yyyy");

        Date d=fmt.parse(day+" "+month+" "+year);

        Calendar cal=Calendar.getInstance();

        cal.setTime(d);

        int weekDay=cal.get(Calendar.DAY_OF_WEEK);

        switch(weekDay){
            case 1:System.out.println("Sunday");break;
            case 2:System.out.println("Monday");break;
            case 3:System.out.println("Tuesday");break;
            case 4:System.out.println("Wednesday");break;
            case 5:System.out.println("Thursday");break;
            case 6:System.out.println("Friday");break;
            case 7:System.out.println("Saturday");break;
            default:break;
        }
        Calendar c=Calendar.getInstance();
        try(Scanner sc=new Scanner(System.in)){
            System.out.println("请输入年份：");
            int year2=sc.nextInt();
            c.set(Calendar.YEAR,year2);
            c.set(Calendar.MONTH,Calendar.JANUARY);
            c.set(Calendar.DAY_OF_MONTH,1);
            while(c.get(Calendar.YEAR)==year2){
                int wday=c.get(Calendar.DAY_OF_WEEK);
                int mday=c.get(Calendar.DAY_OF_MONTH);
                if(mday==1){
                    System.out.println("\n日\t一\t二\t三\t四\t五\t六"+"   "+
                    (c.get(Calendar.MONTH)+1)+"月");
                    System.out.println("---------------------------------------");
                    for(int i=0;i<wday-1;i++)
                    System.out.println(" \t");
                }
                System.out.print(mday+"\t");
                if(wday==7)
                System.out.println();
                c.add(Calendar.DAY_OF_YEAR,1);
            }
        }
    }
}
