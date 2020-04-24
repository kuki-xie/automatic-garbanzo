# Java第四次上机作业
## 百度后拼凑出的没有完整的功能的代码

### 在package:lib（使用map
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

### 使用ArrayList存储 在 package Library中
#### Book.java

```java
package Library;

/*
 *图书类
 */
public class Book {

    private String name;
    private String author1;
    private String author2;
    private String press;

    public Book(String name, String author1, String author2, String press){
        this.name=name;
        this.author1=author1;
        this.author2=author2;
        this.press=press;
    }
    public String getName(){
        return name;
    }
    
    public void setName(String name){
        this.name=name;
    }

    public String getAuthor1(){
        return author1;
    }

    public void setAuthor1(String author1){
        this.author1=author1;
    }

    public String getAuthor2(){
        return author2;
    }

    public void setAuthor2(String author2){
        this.author2=author2;
    }

    public String getPress(){
        return press;
    }

    public void setPress(String press){
        this.press=press;
    }
}
```

#### BookTest.java

```java
package Library;

import java.util.ArrayList;
import java.util.Scanner;

public class BookTest {
    public static void main(String[] args){
        ArrayList<Book> array=new ArrayList<Book>();
        boolean add = array.add(new Book("高等数学辅导讲义","武忠祥", " \t", "西安交通大学出版社"));
        array.add(new Book("大学物理","\t吴百诗\t"," \t","西安交通大学出版社"));
        array.add(new Book("高等数学","\t张宇\t"," \t","北京理工大学出版社"));
        array.add(new Book("离散数学","\t武波\t","毛立海\t","西安电子科技大学出版社"));
        while(true){
            //这是图书馆的主界面
            System.out.println("---欢迎来到图书管理系统----");
            System.out.println("1查看所有图书");
            System.out.println("2添加图书");
            System.out.println("3借走图书");
            System.out.println("4查找图书");
            System.out.println("5退出");
            System.out.println("请输入你的选择");
            //创建键盘录入对象
            Scanner sc=new Scanner(System.in);
            int choiceString=sc.nextInt();
            
            //用switch语句实现选择
            switch(choiceString){
                case 1:
                	//查看所有图书
                	findAllBooks(array);
                	break;

                case 2:
                	//添加图书
                	addBooks(array);
                	break;
                case 3:
                	//借走图书
                	borBook(array);
                	break;

                case 4:
                	findAllBooks(array);
                	break;
                default:
                    System.out.println("感谢你的使用!");
                    System.exit(0);
                    break;
            }
        
        }
    }
    //查找图书
    public static void findAllBooks(ArrayList<Book> array){

        if(array.size()==0){
            System.out.println("不好意思，目前没有图书可供查询，请先给我点书");
            return;
        }
        
        System.out.println("书名\t\t第一作者\t\t第二作者\t\t出版社");
        for(int i=0;i<array.size();i++){
            Book s=array.get(i);
            System.out.println(s.getName()+"\t"+s.getAuthor1()+"\t"+s.getAuthor2()+"\t"+s.getPress());
        }
    }
    /*
     *添加图书
     */
    public static void addBooks(ArrayList<Book> array){

        Scanner sc=new Scanner(System.in);
        String name;

        while(true){
            System.out.println("请输入书名：");
            name=sc.nextLine();

            boolean flag=false;
            for(int i=0;i<array.size();i++){
                Book s=array.get(i);

                if(s.getName().equals(name)){
                    flag=true;
                    break;
                }
            }

            if(flag){
                System.out.println("这本书已经有了，请送其他的书");
            } else{
                break;
            }
        }

        System.out.println("请输入图书的第一作者：");
        String author1=sc.nextLine();
        System.out.println("请输入图书的第二作者(没有填无):");
        String author2=sc.nextLine();
        System.out.println("请输入出版社：");
        String press=sc.nextLine();

        Book s= new Book(name, author1, author2, press);
        s.setName(name);
        s.setAuthor1(author1);
        s.setAuthor2(author2);
        s.setPress(press);

        array.add(s);

        System.out.println("图书信息添加成功");
        
    }

    /*
     * 删除图书
     */
    public static void borBook(ArrayList<Book> array){
        Scanner sc=new Scanner(System.in);
        System.out.println("请输入你要借的图书的书名");
        String name=sc.nextLine();

        int index=-1;

        for(int i=0;i<array.size();i++){
            Book s=array.get(i);

            if(s.getName().equals(name)){
                index=i;
                break;
            }
        }

        if(index==-1){
            System.out.println("不好意思，我没有这本书，你捐一本吧");
        } else{
            array.remove(index);
            System.out.println("借走图书成功！");
        }
        
    }
}
```

### 使用迭代器(在ArrayList package)

#### Main.java

```java
package ArrayListTest;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Scanner;

public class Main {
	 
	    public static void main(String[] args){
	    	
	        String str = null;
	        ArrayList<Method> list = new ArrayList<Method>();
	        list.add(new Method("高等数学辅导讲义","武忠祥","西安交通大学出版社"));
	        list.add(new Method("大学物理","吴百诗","西安交通大学出版社"));
	        list.add(new Method("高等数学","张宇","北京理工大学出版社"));
	        list.add(new Method("离散数学","武波、毛立海","西安电子科技大学出版社"));
	        System.out.println("请输入您要查找的书名");
	        Scanner sc = new Scanner(System.in);
	        while(sc.hasNext()){
	            str=sc.next();
	            break;
	        }
	        Iterator it = list.iterator();
	        while(it.hasNext()){
	            Method b =(Method)it.next();
	            if(b.equals(new Method(str))){
	            System.out.println("成功查询到"+str+"的详细信息");
	            System.out.println(b);
	            break;
	            }else{
	                if(!it.hasNext()){
	                    System.out.println("没有找到你查询的书籍");
	                }
	            }
	        }       
	    }
}
```
 
 #### Method.java
 ```java
 package ArrayListTest;

import java.util.*;


public class Method{
    String name;
    String author;
    String press;
    public Method(String name){
        this.name = name;
    }
    public Method(String name,String author,String press){
        this.name = name ;
        this.author = author;
        this.press = press;
    }
    public boolean equals(Method b){
        return this.name.equals(b.name);
    }
    public String toString(){
        return "书名: "+this.name+" 作者: "+this.author+" 出版社: "+this.press;
    }

}
```
