## TestListOfNumbersDeclared.java
```java
package PPT5;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

class ListOfNumbersDeclared{
	private ArrayList<Integer>list;
	private static final int size=10;
	public ListOfNumbersDeclared() {
		list =new ArrayList<Integer>(size);
		for(int i=0;i<size;i++)
			list.add(new Integer(i));
	}
	public void writeList() throws IOException,IndexOutOfBoundsException{
		PrintWriter out=new PrintWriter(new FileWriter("OutFile1.txt"));
		for(int i=0;i<size;i++)
			out.println("Value at:"+i+"="+list.get(i));
		out.close();
	}
}
public class TestListOfNumbersDeclared {
	public static void main(String args[]) {
		try {
			ListOfNumbersDeclared list=new ListOfNumbersDeclared();
			list.writeList();
		} catch(Exception e) {}
		System.out.println("A list of numbers created and stored in OutFile1.");
	}
}
```

## ListOfNumbers.java
```java
package PPT5;

import java.io.*;
import java.util.*;

public class ListOfNumbers {
	private ArrayList<Integer>list;
	private static final int size=10;
	public ListOfNumbers() {
		list=new ArrayList<Integer>(size);
		for(int i=0;i<size;i++)
			list.add((new Integer(i)));
	}
	public void writeList() throws IOException {
		PrintWriter out =null;
		try {
			System.out.println("Entering try statement");
			out=new PrintWriter(new FileWriter("OutFile.txt"));
			for(int i=0;i<size;i++)
				out.println("Value at:"+i+"="+list.get(i));
		} catch (IOException e) {
			System.err.println("Caught IOException:"+e.getMessage());
		} catch(Exception e) {
			System.err.println("Caught Exception:+"+e.getMessage());
		}
		finally {
			if(out!=null) {
				System.out.println("Closing PrintWriter");
				out.close();
			} else {System.out.println("PrintWriter not open");}
		}
	}
	public static void main(String[] args) {
		int i=0;
		String greetings[]= {"Hello World!","Hello!","HELLO!"};
		while(i<4) {
			try {
				System.out.println(greetings[i]);
			} catch(ArrayIndexOutOfBoundsException e) {
				System.out.println("Re-setting Index Value");
				i=-1;
			} finally {
				System.out.println("This is always printed");
			}
		}
	}
}
```
