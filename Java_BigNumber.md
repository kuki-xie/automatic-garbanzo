# Java第三次作业(同学的大数)

## MainLoop.java

```java
package Numbers;
import java.io.*;
import java.util.Scanner;
public class MainLoop {
	public static void main(String []args) {
		
		MyInteger num1;
		MyInteger num2;
		System.out.println("����������������a��b:");
		Scanner scr=new Scanner(System.in);
		String str;
		System.out.print("������a:");
		str=scr.next();
		num1=new MyInteger(str);
		System.out.print("������b:");
		str=scr.next();
		num2=new MyInteger(str);
		System.out.println("a="+num1.toString());
		System.out.println("b="+num2.toString());
		String str_a=num1.toString();
		String str_b=num2.toString();
		System.out.println("MyIntegers::toString()");
		System.out.println("	str_a=\""+num1.toString()+"\"");
		System.out.println("	str_b=\""+num2.toString()+"\"");
		System.out.println("MyIntegers::plusBy(MyIntegers)");
		System.out.println("	a+b="+num1.plusBy(num2).toString());
		System.out.println("	b+a="+num2.plusBy(num1).toString());
		System.out.println("MyIntegers::dis(MyIntegers)");
		System.out.println("	||a|-|b||="+num1.dis(num2).toString());
		System.out.println("	||b|-|a||="+num2.dis(num1).toString());
		System.out.println("MyIntegers::minusBy(MyIntegers)");
		System.out.println("	a-b="+num1.minusBy(num2).toString());
		System.out.println("	b-a="+num2.minusBy(num1).toString());
		System.out.println("MyIntegers::cmp(MyIntegers)");
		System.out.println("	a cmp b="+num1.cmp(num2));
		System.out.println("	b cmp a="+num2.cmp(num1));
		System.out.println("	a cmp a="+num1.cmp(num1));
		System.out.println("	b cmp b="+num2.cmp(num2));
		System.out.println("MyIntegers::equals(MyIntegers)");
		System.out.println("	a equals b="+num1.equals(num2));
		System.out.println("	b equals a="+num2.equals(num1));
		System.out.println("	a equals a="+num1.equals(num1));
		System.out.println("	b equals b="+num2.equals(num2));
		System.out.println("MyIntegers::multiplyBy(MyIntegers)");
		System.out.println("	a*b="+num1.multiplyBy(num2).toString());
		System.out.println("	b*a="+num2.multiplyBy(num1).toString());
		System.out.println("MyIntegers::dividedBy(MyIntegers)");
		System.out.println("	a/b="+num1.dividedBy(num2).toString());
		System.out.println("	b/a="+num2.dividedBy(num1).toString());
		MyNaturalNumbers n_num1;
		MyNaturalNumbers n_num2;
		System.out.println("��������������Ȼ��c��d:");
		scr=new Scanner(System.in);
		System.out.print("������c:");
		str=scr.next();
		n_num1=new MyNaturalNumbers(str);
		System.out.print("������d:");
		str=scr.next();
		n_num2=new MyNaturalNumbers(str);
		System.out.println("c="+n_num1.toString());
		System.out.println("d="+n_num2.toString());
		String str_c=n_num1.toString();
		String str_d=n_num2.toString();
		System.out.println("MyNaturalNumbers::toString()");
		System.out.println("	str_c=\""+str_c+"\"");
		System.out.println("	str_d=\""+str_d+"\"");
		System.out.println("MyNaturalNumbers::plusBy(MyNaturalNumbers)");
		System.out.println("	c+d="+n_num1.plusBy(n_num2).toString());
		System.out.println("	d+c="+n_num2.plusBy(n_num1).toString());
		System.out.println("MyNaturalNumbers::dis(MyNaturalNumbers)");
		System.out.println("	|c-d|="+n_num1.dis(n_num2).toString());
		System.out.println("	|d-c|="+n_num2.dis(n_num1).toString());
		System.out.println("MyNaturalNumbers::cmp(MyNaturalNumbers)");
		System.out.println("	c cmp d="+n_num1.cmp(n_num2));
		System.out.println("	d cmp c="+n_num2.cmp(n_num1));
		System.out.println("	c cmp c="+n_num1.cmp(n_num1));
		System.out.println("	d cmp d="+n_num2.cmp(n_num2));
		System.out.println("MyNaturalNumbers::equals(MyNaturalNumbers)");
		System.out.println("	c equals d="+n_num1.equals(n_num2));
		System.out.println("	d equals c="+n_num2.equals(n_num1));
		System.out.println("	c equals c="+n_num1.equals(n_num1));
		System.out.println("	d equals d="+n_num2.equals(n_num2));
		System.out.println("MyNaturalNumbers::multiplyBy(MyNaturalNumbers)");
		System.out.println("	c*d="+n_num1.multiplyBy(n_num2).toString());
		System.out.println("	d*c="+n_num2.multiplyBy(n_num1).toString());
		System.out.println("MyNaturalNumbers::dividedBinary()");
		System.out.println("	c/2="+n_num1.dividedBinary().toString());
		System.out.println("	d/2="+n_num2.dividedBinary().toString());
		System.out.println("MyNaturalNumbers::dividedBy(MyNaturalNumbers)");
		System.out.println("	c/d="+n_num1.dividedBy(n_num2).toString());
		System.out.println("	d/c="+n_num2.dividedBy(n_num1).toString());
		
		
	}
	
}
```

## MyInteger.java

```java
package Numbers;
public class MyInteger extends MyNaturalNumbers{
	private boolean signal;
	public MyInteger() {
		super();
		signal=false;
	}
	public MyInteger(int a) {
		super(a>=0?a:-a);
		if(a<0)signal=true;
	}
	public MyInteger(MyNaturalNumbers a) {
		super(a);
		this.signal=false;
		
	}
	public MyInteger(MyInteger a) {
		super((MyNaturalNumbers)a);
		this.signal=a.signal;
		
	}
	public MyInteger(long a) {
		super(a>=0?a:-a);
		if(a<0)signal=true;
	}
	public MyInteger(String str) {
		if(str.charAt(0)=='-') {
			super.init(str.substring(1,str.length()));
			if(super.cmp(new MyNaturalNumbers(0))!=0)signal=true;
		}else {
			super.init(str);
		}
	}
	public int cmp(MyInteger b) {
		int ans=super.cmp((MyNaturalNumbers)b);
		if(this.signal==true&&b.signal==false) {
			return -1;
		}else {
			if(this.signal==false&&b.signal==true) {
				return 1;
			}else {
				if(this.signal==false&&b.signal==false) {
					return ans;
				}else {
					return -ans;
				}
			}
		}
	}
	public void print() {
		if(super.cmp(new MyNaturalNumbers("0"))==0||!signal) {
			super.print();
		}else {
			System.out.print("-");
			super.print();
		}
	}
	public MyInteger dis(MyInteger b) {
		MyInteger ans;
		ans=new MyInteger(super.dis(b));
		return ans;
	}
	public MyInteger plusBy(MyInteger b) {
		MyInteger ans;
		if(this.signal==b.signal) {
			ans=new MyInteger(super.plusBy((MyNaturalNumbers)b));
			ans.signal=this.signal;
		}else {
			if(super.cmp((MyNaturalNumbers)b)>=0) {
				ans=this.dis(b);
				ans.signal=this.signal;
			}else {
				ans=this.dis(b);
				ans.signal=b.signal;
			}
		}
		return ans;
	}
	public MyInteger minusBy(MyInteger b) {
		MyInteger temp=new MyInteger(b);
		temp.signal=!temp.signal;
		return this.plusBy(temp);
	}
	public MyInteger multiplyBy(MyInteger b) {
		MyInteger ans;
		ans=new MyInteger(super.multiplyBy((MyNaturalNumbers)b));
		if(b.signal==this.signal) {
			ans.signal=false;
		}else {
			if(ans.equals(new MyInteger("0"))==false)ans.signal=true;
		}
		return ans;
	}
	public boolean equals(MyInteger b) {
		if(this.cmp(b)==0)return true;
		else return false;
	}
	public MyNaturalNumbers toNaturalNumbers() {
		MyInteger ans= new MyInteger(this);
		ans.signal=false;
		return (MyNaturalNumbers)ans;
	}
	public MyInteger dividedBy(MyInteger b) {
		MyInteger ans;
		ans=new MyInteger(super.dividedBy((MyNaturalNumbers)b));
		if(b.signal==this.signal) {
			ans.signal=false;
		}else {
			if(ans.equals(new MyInteger("0"))==false)ans.signal=true;
		}
		return ans;
	}
	public String toString() {
		if(this.signal==false) {
			return super.toString();
		}else {
			StringBuffer str=new StringBuffer();
			str.append('-');
			str.append(super.toString());
			return str.toString();
		}
	}
}
```

## MyNaturalNumbers.java

```java
package Numbers;
public class MyNaturalNumbers {							
	private int []num=new int[1000];														
	private int lenth;																	
	public void init(String str) {	
		String temp[]=str.split(",");
		StringBuffer str2=new StringBuffer();
		for(String s:temp) {
			str2.append(s);
		}
		this.lenth=str2.toString().length();														
		for(int i=0;i<this.lenth;i++) {				
			this.num[i]=(int)str2.toString().charAt(str2.length()-i-1)-(int)'0';												//ת��λÿһλ
		}
	}
	public MyNaturalNumbers() {
		
	}
	public MyNaturalNumbers(String str) {
		
		init(str);
	}
	public MyNaturalNumbers(int n) {
		this.lenth=0;
		while(n!=0) {
			this.num[this.lenth]=n%10;
			n/=10;
			this.lenth++;
		}
		if(this.lenth==0)this.lenth++;
	}
	public MyNaturalNumbers(long n) {
		this.lenth=0;
		while(n!=0) {
			this.num[this.lenth]=(int) (n%10);
			n/=10;
			this.lenth++;
		}
		if(this.lenth==0)this.lenth++;if(this.lenth==0)this.lenth++;
	}
	public MyNaturalNumbers(MyNaturalNumbers b) {
		this.lenth=b.lenth;
		for(int i=0;i<this.lenth;i++) {
			this.num[i]=b.num[i];
		}
	}
	public MyNaturalNumbers plusBy(MyNaturalNumbers b) {
		int l=this.lenth>=b.lenth?this.lenth:b.lenth;
		int temp=0;
		MyNaturalNumbers ans=new MyNaturalNumbers(this);
		for(int i=0;i<l;i++) {
			ans.num[i]+=b.num[i]+temp;
			temp=ans.num[i]/10;
			ans.num[i]%=10;
		}
		ans.lenth=l;
		while(temp!=0) {
			ans.num[ans.lenth]+=temp%10;
			ans.lenth++;
			temp/=10;
		}
		return ans;
	}
	public int cmp(MyNaturalNumbers b) {
		if(this.lenth>b.lenth) {
			return 1;
		}else {
			if(this.lenth<b.lenth) {
				return -1;
			}else {
				for(int i=this.lenth-1;i>=0;i--) {
					if(this.num[i]>b.num[i]) {
						return 1;
					}
					if(this.num[i]<b.num[i]) {
						return -1;
					}
				}
				return 0;
			}
		}
	}
	public MyNaturalNumbers dis(MyNaturalNumbers b) {
		MyNaturalNumbers minuened;
		MyNaturalNumbers substracto;
		int Cmp=this.cmp(b);
		if(Cmp==1) {
			minuened=new MyNaturalNumbers(this);
			substracto=new MyNaturalNumbers(b);
		}else {
			if(Cmp==-1) {
				minuened=new MyNaturalNumbers(b);
				substracto=new MyNaturalNumbers(this);	
			}else {
				return new MyNaturalNumbers("0");
			}
		}
		for(int i=0;i<substracto.lenth;i++) {
			if(minuened.num[i]>=substracto.num[i]) {
				minuened.num[i]-=substracto.num[i];
			}else {
				int temp=0;
				while(minuened.num[i]<substracto.num[i]) {
					minuened.num[i]+=10;
					minuened.num[i+1]--;
				}
				minuened.num[i]-=substracto.num[i];
			}
		}
		for(int i=substracto.lenth;i<minuened.lenth;i++) {
			while(minuened.num[i]<substracto.num[i]) {
				minuened.num[i]+=10;
				minuened.num[i+1]--;
			}
		}
		for(int i=minuened.lenth-1;i>=0;i--) {
			if(minuened.num[i]==0)minuened.lenth--;
			else break;
		}
		if(minuened.lenth==0)minuened.lenth++;
		return minuened;
	}
	public MyNaturalNumbers multiplyBy(MyNaturalNumbers b) {
		MyNaturalNumbers multiplier1=new MyNaturalNumbers(this);
		MyNaturalNumbers multiplier2=new MyNaturalNumbers(b);
		MyNaturalNumbers ans=new MyNaturalNumbers();
		int temp=0;
		for(int i=0;i<multiplier1.lenth;i++) {
			for(int j=0;j<multiplier2.lenth;j++) {
				ans.num[j+i]+=multiplier1.num[i]*multiplier2.num[j];
				ans.num[j+i]+=temp;
				temp=ans.num[i+j]/10;
				ans.num[i+j]%=10;
			}
			int templ=i+multiplier2.lenth;
			while(temp!=0) {
				ans.num[templ]+=temp;
				temp=ans.num[templ]/10;
				ans.num[templ]%=10;
				templ++;
				if(templ>ans.lenth)ans.lenth=templ;
			}
		}
		for(int i=999;i>=0;i--) {
			if(ans.num[i]!=0) {
				ans.lenth=i+1;
				break;
			}
		}
		if(ans.lenth==0)ans.lenth++;
		return ans;
	}
	public String toString(){
		StringBuffer str= new StringBuffer();
		for(int i=this.lenth-1;i>=0;i--) {
			str.append(this.num[i]);
		}
		return str.toString();
	}
	public MyNaturalNumbers dividedBinary() {
		int temp=0;
		MyNaturalNumbers ans=new MyNaturalNumbers(this);
		for(int i=ans.lenth-1;i>=0;i--) {
			ans.num[i]+=temp*10;
			temp =ans.num[i]%2;
			ans.num[i]/=2;
		}
		if(ans.num[ans.lenth-1]==0)ans.lenth--;
		if(ans.lenth==0)ans.lenth++;
		return ans;
	}
	public MyNaturalNumbers dividedBy(MyNaturalNumbers b) {
		MyNaturalNumbers ans;
		ans=binaryFind(new MyNaturalNumbers("0"),this,b,this);
		return ans;
	}
	public static MyNaturalNumbers binaryFind(MyNaturalNumbers a,MyNaturalNumbers b,MyNaturalNumbers c,MyNaturalNumbers ans) {
		if(a.cmp(b)==0)return a.multiplyBy(c).cmp(ans)<= 0 ? a:a.dis(new MyNaturalNumbers("1")) ;
		MyNaturalNumbers mid=a.plusBy(b).dividedBinary();
		if(mid.multiplyBy(c).cmp(ans)>=0) {
			/*a.print();
			System.out.println();
			b.print();
			System.out.println();
			System.out.println();*/
			return binaryFind(a,mid,c,ans);
		}else {
			/*a.print();
			System.out.println();
			b.print();
			System.out.println();
			System.out.println();*/
			return binaryFind(mid.plusBy(new MyNaturalNumbers("1")),b,c,ans);
		}
	}
	public  MyNaturalNumbers modBy(MyNaturalNumbers b) {
		return this.dis(this.dividedBy(b).multiplyBy(b));
	}
	public boolean equals(MyNaturalNumbers b) {
		if(this.cmp(b)==0)return true;
		else return false;
	}
	public MyInteger toInteger() {
		return new MyInteger(this);
	}
	public void print() {
		for(int i=this.lenth-1;i>=0;i--) {
			System.out.print(this.num[i]);
		}
	}
}
```
