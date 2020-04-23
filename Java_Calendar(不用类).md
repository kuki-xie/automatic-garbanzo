# Java第二次上机作业
## 能够实现判断日期为周几和打印年表

```java
import java.util.Scanner;
public class PrintCalendar {

	//判断给定的year
	public static boolean judgeleap(int year) {
		boolean rsleap;
		if(((year % 4 ==0) && (year %100 !=0))||(year %400 ==0))
			rsleap=true;
		else
			rsleap=false;
		return rsleap;
	}
	
	//计算输入日期与原点日期相隔的天数
	public static int gap(int year,int month,int day,boolean leapyear) {
		int sum=0,sum1=0,sum2=9;
		if(year<Zero) {
			//计算sum1
			for(int i=year+1;i<Zero;i++) {
				if(judgeleap(1)) sum1+=366;
				else sum1+=365;
			}
			//计算sum2
			if(leapyear) {
				sum2=leapmonthday[month-1]-day+1;
				for(int j=month+1;j<=12;j++)
					sum2+=leapmonthday[j-1];
			} else {
				sum2 = noleapmonthday[month -1]-day+1;
				for(int j=month+1;j<=12;j++)
					sum2 +=noleapmonthday[j-1];
			}
		} else {
			//计算sum1
			for(int i =Zero;i<year;i++) {
				if(judgeleap(i))
					sum1 +=366;
				else
					sum1 +=365;
			}
			//计算sum2
			sum2 = day-1;
			for (int j =1;j<=month -1;j++) {
				if(leapyear)
					sum2+= leapmonthday[j-1];
				else 
					sum2+=noleapmonthday[j-1];
			}
		}
		//计算sum
		sum=sum1+sum2;
		return sum;
	}
	
	public static int getWeekday(int sum,int year) {
		int weekday=0;
		if(year<Zero)
			weekday=(Weekdayz + 7-(sum%7))%7;
		else
			weekday=(Weekdayz+(sum%7))%7;
		return weekday;
	}
	
	public static int judgeWeekday(int year,int month,int day,boolean leapyear) {
		int sum=gap(year,month,day,leapyear);
		int weekday=getWeekday(sum,year);
		return weekday;
	}
	
	public static int Zero=20,
					leapmonthday[]= {31,29,31,30,31,30,31,31,30,31,30,31},
					noleapmonthday[]= {31,28,31,30,31,30,31,31,30,31,30,31},
					Weekdayz = 3;
	public static String week[]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	
	public static void main(String args[]) {
		
		try (Scanner console = new Scanner(System.in)) {
			System.out.print("敲年 月 日就像 2020 2 22");
			System.out.println();
			int year=console.nextInt();
			int month=console.nextInt();
			int day=console.nextInt();
			boolean leapyear=judgeleap(year);
			
			int weekday=judgeWeekday(year,month,day,leapyear);
			System.out.println(year+" 年 "+month+" 月 "+day+" 日 "+"is "+week[weekday]);
		}
		
		int year1,week1	;
			System.out.println();
			@SuppressWarnings("resource")
			Scanner yy =new Scanner(System.in);
			String answer="";
			int monthday;
			boolean pingyear;
			year1=0;
			do {
				if(year1%4==0&&year1 %100!=0||year1%400==0) {
					pingyear=false;
				}
				else pingyear=true;
				
				int sumyearday=0,i=2020;
				do {
					int x;
					if(i%4==0&&i%100!=0||i%400==0)
					{x=365;}
					else {x=365;}
					sumyearday=sumyearday+x;i++;
					}
				while(i<year1);
				for(int m=0;m<12;m++) {
					System.out.println(m+1+"月");
					switch(m+1){
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12:
						monthday=31;break;
						case 2:
							if(pingyear) {monthday=28;}
							else {monthday=29;}break;
						default:monthday=30;break;}
					week1=((sumyearday%7+1)%7);
					System.out.println("\n日\t一\t二\t三\t四\t五\t六");
					for(int k=0;k<week1;k++) {
						System.out.print("\t");}
					for(int j=0;j<monthday;j++) {
						System.out.print(j+1+"\t");
						if((sumyearday+j+1)%7==6) {
							System.out.print("\n");
						}
					}
					System.out.print("\n");
					sumyearday=sumyearday+monthday;
				}
				answer=yy.next();
			}while(answer.equals("y"));
			
			
			
		}
	}
  ```
 
 ## 仅能打印年表
 ### 1个用了Calendar类
 ```java
 import java.util.Scanner;
public class rili {
	public static void main(String[] args ){
		
		int year,month,day,week;
    Scanner sc =new Scanner(System.in);	
		System.out.print("\t\t\t查日历\n");
		System.out.print("输入年份");
		Scanner yy = new Scanner(System.in);
		@SuppressWarnings("unused")
		int type=yy.nextInt();
		String answer="";
		int monthday;
		boolean pingyear;
		 year=0 ;
		do{
			if(year%4==0&&year%100!=0||year%400==0){
				pingyear=false;
			}else pingyear=true;
 
			int sumyearday=0,i=1900;
			do{int x;if(i%4==0&&i%100!=0||i%400==0)
			{x=366;}
			else{x=365;}
			sumyearday=sumyearday+x;i++;
 
			}while(i <year);
			for(int m=0;m<12;m++){
				System.out.println(m+1+"月");
				switch(m+1){case 1:case 3:case 5:case 7:case 8:case 10:case 12:monthday=31;break;case 2:
					if(pingyear){monthday=28;}else{monthday=29;}break;default:monthday=30;break;}
				week=((sumyearday%7+1)%7);
				System.out.println("\n日\t一\t二\t三\t四\t五\t六");
				for(int k=0;k <week;k++){
					System.out.print("\t");}
				for(int j=0;j< monthday;j++){
					System.out.print(j+1+"\t");
					if((sumyearday+j+1)%7==6){
						System.out.print("\n");
					}
				}
				System.out.print("\n");
				sumyearday=sumyearday+monthday;
			}
 
			answer=yy.next();	
 
		}while (answer.equals("y"));
 
		System.out.println("结束");	
	}
}
```

### 2一个没用类
```java
import java.util.Locale;
import java.util.Scanner;
public class PrintYearAndDate {
	  public static void main(String[] args) {
	        int year = 2019;
	 
	        System.out.print("请输入一个年份：");
	        Scanner scanner = new Scanner(System.in);
	        year = scanner.nextInt();
	 
	        System.out.println(String.format(Locale.CHINA, "\n\t\t\t\t\t\t\t\t%d年\n", year));
	 
	        printYearData(getYearData(year));
	        scanner.close();
	        
	        
	    }
	 
	    /*判断闰年*/
	    private static boolean judgeLeap(int year) {
	        if (year < 1800) {
	            return year % 4 == 0;
	        } else {
	            return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	        }
	    }
	 
	    /*获取1～year这些年中的闰年数*/
	    private static int getCountofLeap(int year) {
	        int count = 0;
	        for (int i = 1; i < year; i++) {
	            if (judgeLeap(i))
	                count++;
	        }
	        return count;
	    }
	 
	    /*获取该年每月第一天位置*/
	    private static int[] getFirstDay(int year) {
	 
	        int[] firstDay = new int[13];
	        int FirstDay1 = 6;//初始化公元1年第一天位置
	        int[] lastDay = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//平年每月天数
	        int LeapCount = getCountofLeap(year);//1～year之间的闰年数
	 
	        long temp = 365 * (year - 1);
	        if (year > 1752) {
	            temp = temp - 11;
	        }
	 
	        firstDay[1] = (int) ((temp + LeapCount + FirstDay1) % 7);//该年第一个月第一天的位置
	 
	        if (judgeLeap(year)) {//闰年二月特殊考虑
	            lastDay[2] = 29;
	        }
	        if (year == 1752) {//1752年特殊考虑
	            lastDay[9] = 19;
	        }
	 
	        for (int i = 2; i < 13; i++) {//获取其他月份的第一天位置
	            firstDay[i] = (lastDay[i - 1] + firstDay[i - 1]) % 7;
	        }
	 
	        return firstDay;
	    }
	 
	    /*填充一年数据*/
	    private static int[][][] getYearData(int year) {
	 
	        int[][][] oneYear = new int[12][6][7];
	        int[] lastDay = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	 
	        int[] firstDay = getFirstDay(year);
	 
	        if (judgeLeap(year)) {
	            lastDay[2] = 29;
	        }
	 
	        int first, last;
	        for (int month = 0; month < 12; month++) {
	            first = 1;
	            last = 1;
	            for (int week = 0; week < 6; week++) {
	                for (int day = 0; day < 7; day++) {//填充一周
	                    if (first > firstDay[month + 1] && last <= lastDay[month + 1]) {
	                        oneYear[month][week][day] = last;
	                        if (year == 1752 && month == 8 && last == 2) {//1752年9月特殊考虑
	                            last = last + 11;
	                        }
	                        last++;
	                    } else {
	                        oneYear[month][week][day] = 0;
	                    }
	                    first++;
	                }
	            }
	        }
	        return oneYear;
	    }
	 
	    /*输出一年数据*/
	    private static void printYearData(int[][][] yearData) {
	        String[] moth = {"一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};
	        for (int i = 0, j = 0; i < 4; i++) {
	            System.out.println(String.format("\t\t %s\t\t\t\t\t %s\t\t\t\t\t %s", moth[j], moth[j + 1], moth[j + 2]));
	            System.out.println(" 日 一 二 三 四 五 六\t 日 一 二 三 四 五 六\t 日 一 二 三 四 五 六");
	            for (int week = 0; week < 6; week++) {
	                for (int month = j; month < j + 3; month++) {
	                    for (int day = 0; day < 7; day++)//输出一周
	                    {
	                        if (yearData[month][week][day] == 0) {
	                            System.out.print(String.format("%3c", ' '));
	                        } else {
	                            System.out.print(String.format(Locale.CHINA, "%3d", yearData[month][week][day]));
	                        }
	                    }
	                    System.out.print("\t");
	                }
	                System.out.println();
	            }
	            j = j + 3;
	        }
	    }
}
```	
