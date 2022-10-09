import java.util.Scanner;

public class TwoDimensional {
    static Scanner input = new Scanner(System.in);
    public static void main(String args[]){
       String loop = "y";
       while(loop.equalsIgnoreCase("y")){
           System.out.println("");
           System.out.println("--TWO DIMENSIONAL SHAPE COUNTER--");
           System.out.println("---------------------------------");
           System.out.println("1. Rectangle Area");
           System.out.println("2. Circle Area");
           System.out.println("3. Triangle Area");
           System.out.println("4. Quit");
           System.out.println("---------------------------------");
           System.out.print("Select Option [1-4] : ");
           
           int choose = input.nextInt();
           System.out.println("");
           
           switch(choose){
            case 1:
                int l, w, rectangle;
                System.out.print("Enter Length (l)\n>> ");
                l=input.nextInt();
                System.out.print("Enter Width (w)\n>> ");
                w=input.nextInt();
                rectangle = l * w;
                System.out.println("Area of Rectangle is : " + rectangle);
                System.out.println();
                break;
            case 2:
                double pi, r, circle;
                pi = 3.14;
                System.out.print("Enter radius (r)\n>> ");
                r = input.nextDouble();
                circle = pi * r * r;
                System.out.println("Area of Circle is : " + circle);
                System.out.println();
                break;  
            case 3:
                double b, h, triangle;
                System.out.print("Enter base (b)\n>> ");
                b = input.nextDouble();
                System.out.print("Enter height (h)\n>> ");
                h = input.nextDouble();
                triangle = (b * h) / 2;
                System.out.println("Area of Triangle is : " + triangle);
                System.out.println();
                break;  
            case 4:
                System.exit(4);
                break;
                
            default:
                System.out.println("Enter only options [1-4]");
           }
           System.out.print("Want to recalculate the area? [y/n] : ");
           loop = input.next();
       }
    }
    
}
