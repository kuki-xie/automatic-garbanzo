# Java第四次上机作业
## 百度后拼凑出的没有完整的功能的代码
### 在package:lib

#### Methods.java
```java
package lib;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;

public class Methods{
    Scanner sc = new Scanner(System.in);
    //成员变量——图书
    Map<Integer, bookFeatures> map = new HashMap<Integer,bookFeatures>();
    //图书编号
    int id=0;
    //用于图书操作的属性定义
    String name,press,author;//书名,出版社，作者
    /*
     *1.增加图书 
     */
    public void addBook(){
        try {
            int flag=0;
            System.out.println("Please type id(0~9)：");
            id = sc.nextInt();
            
            for (int i : map.keySet()) {
                if(i==id){
                    flag=1;//如果已有图书，置为1，告诉用户不能添加
                }
            }
            if(flag==0){
                System.out.println("type name");
                name = sc.next();
                System.out.println("type author");
                author=sc.next();
                System.out.println("type press");
                press = sc.next();
                map.put(id, new bookFeatures(name,author,press));
                System.out.println("OK!book's information is here:");
                System.out.println("id:"+id + " " + map.get(id));
                System.out.println("=============================================================");
            }else if(flag==1){
                System.out.println("已经存在编号为"+id+"的书，请重新输入\n");
            }
            
        } catch (Exception e) {
            System.out.println("please type again\n");
        }
        id=0;
    }
    /*
     * 2.删除图书
     */
    public void delBook(){
        System.out.println("please type id");
        try {
            int flag=0;
            id=sc.nextInt();
            for (int i : map.keySet()) {
                if(id==i){
                    flag=1;
                }
            }
            if(flag==1){
                map.remove(id);
                System.out.println("ok,you have deleted it\n");
            }else{
                System.out.println("i do not have this book\n");
            }
        } catch (Exception e) {
            System.out.println("please type again！\n");
        }
        id=0;//预防性措施
    }     
    /*
     * 3.查询图书
     */
    public void selBook(){
        int flag=0;
        try {
            System.out.println("please type id：");
            id=sc.nextInt();
            @SuppressWarnings("unchecked")
			Iterator<Map.Entry<Integer,bookFeatures>>it=(Iterator<Entry<Integer, bookFeatures>>) ((Map<Integer,bookFeatures>) map.entrySet()).get(id));
            for (int i : map.keySet()) {
                if(i==id){
                	System.out.println("=============================================================");
                    System.out.println(map.get(i));
                    System.out.println("=============================================================");
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                System.out.println("i donot have this book\n");

            }
        } catch (Exception e) {
            System.out.println("please type again！\n");
        }
        id=0;//预防性措施
    } 
    /*
     * 4.显示所有可借阅的书
     */
    public void showAllBook(){
        for (int i : map.keySet()) {
        	System.out.println("=============================================================");
            System.out.println(i +" "+ map.get(i));
            System.out.println("=============================================================");
        }
    }   
    /*
     * show menu
     */
    public void show(){
        System.out.println("please choice：");
        System.out.println("1.增加图书(没有初始化书，得先给我几本)");
        System.out.println("2.删除图书");
        System.out.println("3.寻找图书");
        System.out.println("4.展示所有图书");
    }   
} 

```
### bookFeatures.java
```java
package lib;

public class bookFeatures {
	
    private String name;
    private String author;
    private String press;
    /*
     * set&get
     */
    bookFeatures(String name, String author, String press) {
		this.name = name;
		this.author=author;
		this.press = press;
	
	}
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getAuthor(){
    	return author;
    }
    public void setAuthor(String author) {
    	this.author=author;
    }

    public String getPress() {
        return press;
    }
    public void setPress(String press) {
        this.press = press;
    }
    /*
     * 构造方法
     */

    public bookFeatures() {
        super();
        // TODO Auto-generated constructor stub
    }

    @Override
    public String toString() {
        return "name：" + name + ",author： " + author + ",press：" + press;
    }
}
```

### Librarymain.java
```java
package lib;
import java.util.Scanner;

public class Librarymain {
		public static void main(String[] args) {  
        Methods lib = new Methods();
        try (Scanner sc = new Scanner(System.in)) {
			//将用于接收对图书的操作
			int option=0;
			//用于第二个while循环
			int flag=1;
			/*
			 * 菜单
			 */
			System.out.println("hello！");
			while(flag==1){
				lib.show();//显示操作菜单
				option=sc.nextInt();//接收对图书的操作
				switch(option){
			    	case 1:lib.addBook();break;//1.增加图书
			    	case 2:lib.delBook();break;//2.删除图书
			    	case 3:lib.selBook();break;//4.查询图书信息
			    	case 4:lib.showAllBook();break;//5.显示可借阅图书
			        default:break;
			 	}
			}
		}
    }
}
```
