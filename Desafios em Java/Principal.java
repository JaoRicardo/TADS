package Aulas;
/* 

 import java.util.ArrayList;
 
 import java.util.Scanner;
 
 public class Principal {
    public static void main(String[] args) {

        ContaBancaria conta = new ContaBancaria();
        Scanner t = new Scanner(System.in); // Use apenas um Scanner
        
        ArrayList<String> xa = new ArrayList<>();
        xa.add("numero");
        xa.add("Agencia");
        xa.add("Titular");
        xa.add("Tipo");

        int s;
        int i =0;
        
        for(String a : xa){
            System.out.println("Me fale "+a+" da conta, pls ");
            String x = t.next();
            
            if(i==0){
                do{
                    s = conta.setNumero(x);
                    if(s==0){
                        x = t.next();
                    }
                } while (s == 0);
            }
            else if(i==1){
                do{
                    s = conta.setAgencia(x);
                    if(s==0){
                        x = t.next();
                    }
                } while (s == 0);
            }
            else if(i==2){
                conta.setTitular(x);
            }
            else if(i==3){
                conta.setTipo(x);
            }
    
            i++;
        }
        conta.setSaldo(0);
        
		conta.mostrarDados();
	}
}
*/

import java.util.Random;

public class Principal {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria();

        Random sorteio = new Random();
        String aleatorio = String.valueOf(sorteio.nextInt(1000000, 9999999));

        String num = aleatorio.substring(0, 3) + "." + aleatorio.substring(3, 6)
        + '-' + aleatorio.substring(6, 7);

        System.out.println(num);
	}
}