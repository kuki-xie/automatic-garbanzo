# Shape
```java
import java.util.Scanner;

class Shape{    //所有图父类
    String name;    //图名字
    int id;         //图序号
    Shape(String name,int id){
        this.name=name;
        this.id=id;
    }
    public void draw(){ //draw绘制
    }
}
class Rectangle extends Shape{  //矩形
    public Rectangle(String name,int id){
        super(name,id); //调用父类的构造方法
    }
    public void draw(){
        System.out.println(id+" "+"Rectangle"+" "+name);
    }
}

class Circle extends Shape{ //图形
    public Circle(String name,int id){
        super(name,id);
    }
    public void draw(){
        System.out.println(id+" "+"Circle"+" "+name);
    }
}

class Triangle extends Shape{   //三角形
    public Triangle(String name,int id){
        super(name,id);
    }
    public void draw(){
        System.out.println(id+" "+"Triangle"+" "+name);
    }
}

public class ShapeTest2{
    public Shape[]s=new Shape[20];
    public int sum=0;   //最初存储的记录为0
    public void create(int i,String name){  //创建
        if(i==1)
        {
            s[sum]=new Rectangle(name,sum+1);
            sum++;
            return;
        }
        if(i==2)
        {
            s[sum]=new Circle(name,sum+1);
            sum++;
            return;
        }
        if(i==3)
        {
            s[sum]=new Triangle(name,sum+1);
            sum++;
            return;
        }
        else{
            System.out.println("请输入正确指令！");
        }
    }

    public static void main(String[] args){
        ShapeTest2 t=new ShapeTest2();
        Scanner in=new Scanner(System.in);
        System.out.println("请输入操作指令：1-创建 2-输出 3-查找 0-退出");
        int c=in.nextInt();

        while(c!=0)
        {
            if(c==1)
            {
                System.out.println("请输入图形类别（1:Rectangle 2:Circle 3:Triangle)");
                int id =in.nextInt();
                System.out.println("请输入图形名称");
                String name=in.next();
                t.create(id,name);
                System.out.println("创建成功");
            }
            if(c==2)
            {
                System.out.println("系统中已有图形数量为："+t.sum);
                System.out.println("请输入需要输出的图形序号");
                int id=in.nextInt();
                if(id>t.sum){
                    System.out.println("序号超出存储范围！");
                }
                else{
                    for(int i=0;i<id;i++){
                        t.s[i].draw();
                    }
                }
            }
            if(c==3)
            {
                System.out.println("请输入查询图形名字");
                String name =in.next();
                for(int i=0;i<t.sum;i++){
                    if(t.s[i].name.equals(name)){
                        System.out.println("查询成功！");
                        t.s[i].draw();
                    }
                }
            }

            System.out.println("请输入操作指令：1-创建 2-输出 3=查找 0-退出");
            try{
                c=in.nextInt();
            } catch (Exception e){
                c=in.nextInt();
            }
        }
        in.close();
    }
}

