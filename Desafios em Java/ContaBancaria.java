package Aulas;

import java.util.Scanner;

public class ContaBancaria {
	private String numero;
	private String agencia;
	private String titular;
	private String tipo;
	private double saldo;

	public void mostrarDados() {
		System.out.println("O Numero da contaé:  " + this.numero);
		System.out.println("O nome da Agencia é:  " + this.agencia);
		System.out.println("O titular da conta é:  " + this.titular);
		System.out.println("O tipo da conta é:  " + this.tipo);
		System.out.println("O saldo da conta é:  " + this.saldo);

	}

	public ContaBancaria(String numero, String agencia, String titular, String tipo, double saldo) {
		super();
		if (numero.length() != 10) {
			System.out.println("Numero informado incorretamente. Informe novamente...");
		} else {
			this.numero = numero;
		}
		// this.numero = numero;
		this.agencia = agencia;
		this.titular = titular;
		this.tipo = tipo;
		this.saldo = saldo;
	}

	public ContaBancaria(String num) {
		if (num.length() != 10) {
			System.out.println("Numero informado incorretamente. Informe novamente...");
		} else {
			this.numero = num;
		}

	}

	public String getNumero() {
		return this.numero;
	}

	public ContaBancaria() {
		super();
	}

	public int setNumero(String num) {

		if (num.length() != 10) {
			System.out.println("O numero da conta deve conter 10 digitos");
			return 0;

		} else {
			this.numero = num;
			return 1;
		}
	}

	public String getAgencia() {
		return this.agencia;
	}

	public int setAgencia(String age) {
		if (age.length() != 5) {
			System.out.println("A agencia Precisa ter 5 digitos");
			return 0;
		} else {
			try {
				int i = Integer.parseInt(age);
				if(i>=0){
						this.agencia = age;
						return 1;
				}else{
					System.out.println("O numero não pode ser negativo");
					return 0;
				}
			} catch (NumberFormatException e){
				System.out.println("Precisa conter apenas Numeros");
				return 0;
			}

		}
	}

	public String getTitular() {
		return this.titular;
	}

	public void setTitular(String titular) {
		this.titular = titular;
	}

	public String getTipo() {
		return this.tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public double getSaldo() {
		return this.saldo;
	}

	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

}