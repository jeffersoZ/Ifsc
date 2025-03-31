package org.example;

import poo.Endereco;
import poo.Pessoa;

public class Main {
    public static void main(String[] args) {
        Pessoa b1 = new Pessoa();
        Pessoa b2 = new Pessoa();
        Endereco e = new Endereco();
        e.setLogradouro("Rua 7 de setembro");
        e.setNumero("1343");
        b1.setNome("abacate");
        b1.setEndereco(e);

        System.out.println("aaaaaaaa: " + b1.getNome());

    }
}