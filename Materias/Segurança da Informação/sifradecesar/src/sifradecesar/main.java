package sifradecesar;
import java.util.Scanner;


public class main {

	public static void main(String[] args) {
		Scanner ler = new Scanner(System.in);
        String textoEntrada, textoSaida;
        int resp, count;
        resp = 1;
		
        while(resp != 0) {
        	System.out.println("\nGostaria de:\nCriptografar 1 \nDesincriptografar 2 \nSair 0?");
            resp = ler.nextInt();
            if(resp == 0) {
            	break;
            }
        	System.out.println("\nInforme seu texto: ");
        	textoEntrada = ler.next();
        	
        	if(resp == 1) {
        		for (char c : textoEntrada.toCharArray()) {
        			char novochar;
        			if(c == 'x' || c == 'X') {
        				novochar = 'a';
        			}else if(c == 'y' || c =='Y') {
        				novochar = 'b';
        			}else if(c == 'z' || c == 'Z') {
        				novochar = 'c';
        			}else {
        				novochar = (char) (c + 3);
        			}
        			System.out.print(novochar);
        		}
        	}else if(resp == 2) {
        		for (char c : textoEntrada.toCharArray()) {
        			char novochar;
        			if(c == 'a' || c == 'A') {
        				novochar = 'x';
        			}else if(c == 'b' || c =='B') {
        				novochar = 'y';
        			}else if(c == 'c' || c == 'C') {
        				novochar = 'z';
        			}else {
        				novochar = (char) (c - 3);
        			}
        			System.out.print(novochar);
        		}
        	}else {
        		System.out.println("Valor informado invalido");
        		break;
        	}
        }
	}

}
