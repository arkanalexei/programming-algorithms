import java.util.Scanner;
public class numberguessing {
	public static void main(String[] args) {
		int n,add;
		int guessnum;
		boolean check=false;
		int i=10;
		int c=0;
		Scanner keyboard=new Scanner(System.in);
		
		n=(int)(Math.random()*100+1);
		
		System.out.println(".......Welcome TO Number Guessing Game........");
		System.out.println("           Maximum rounds:10");
		while(!check && i>=1) {
			System.out.println(".......Guesss the number!!!!.......");
			
			guessnum=keyboard.nextInt();
			i--;
			
			
			if(guessnum == n)
			{
				check=true;
				System.out.println("Congratulations,you are right!\n Good Guess :)\n");
				if(c==0) {
				System.out.println("Your Score:"+i+" out of 10");
				}
				else {
					System.out.println("Your Score:"+i+" out of 15");
				}
			}
			else if(guessnum < n) {
				System.out.println("Uh Oh! The number you guessed is lower....Try Again");
				System.out.println("Attempts Left "+i);
			}
			else if(guessnum > n) {
				System.out.println("Uh Oh! The number you guessed is higher....Try Again");
				System.out.println("Attempts Left "+i);
			}
			if(i==0) {
				System.out.println("Exhausted all chances...??\nWant to play more?? \nAdd 5 more rounds\n Enter 0 for yes,1 for no\n");
				add=keyboard.nextInt();
				if(add==0)
				{
					i=i+5;
				}
				
			}
		}
		System.out.println("Thank You for Playing\n");
		System.out.println("Built by- Riya :)");
		
	}

}
