package org.example;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Entrada do usuário
        System.out.print("Digite a sequência de DNA: ");
        String dna = scanner.nextLine().toUpperCase().replace("\n", "");

        // Substituir T por U (formando RNA)
        String rna = dna.replace('T', 'U');

        // Tabela completa de códons (RNA) para aminoácidos
        Map<String, String> tabelaCodons = new HashMap<>();
        tabelaCodons.put("UUU", "F"); tabelaCodons.put("UUC", "F");  // Fenilalanina
        tabelaCodons.put("UUA", "L"); tabelaCodons.put("UUG", "L");  // Leucina
        tabelaCodons.put("CUU", "L"); tabelaCodons.put("CUC", "L");
        tabelaCodons.put("CUA", "L"); tabelaCodons.put("CUG", "L");
        tabelaCodons.put("AUU", "I"); tabelaCodons.put("AUC", "I"); tabelaCodons.put("AUA", "I"); // Isoleucina
        tabelaCodons.put("AUG", "M"); // Metionina (início)
        tabelaCodons.put("GUU", "V"); tabelaCodons.put("GUC", "V"); tabelaCodons.put("GUA", "V"); tabelaCodons.put("GUG", "V"); // Valina
        tabelaCodons.put("UCU", "S"); tabelaCodons.put("UCC", "S"); tabelaCodons.put("UCA", "S"); tabelaCodons.put("UCG", "S"); // Serina
        tabelaCodons.put("CCU", "P"); tabelaCodons.put("CCC", "P"); tabelaCodons.put("CCA", "P"); tabelaCodons.put("CCG", "P"); // Prolina
        tabelaCodons.put("ACU", "T"); tabelaCodons.put("ACC", "T"); tabelaCodons.put("ACA", "T"); tabelaCodons.put("ACG", "T"); // Treonina
        tabelaCodons.put("GCU", "A"); tabelaCodons.put("GCC", "A"); tabelaCodons.put("GCA", "A"); tabelaCodons.put("GCG", "A"); // Alanina
        tabelaCodons.put("UAU", "Y"); tabelaCodons.put("UAC", "Y"); // Tirosina
        tabelaCodons.put("UAA", "*"); tabelaCodons.put("UAG", "*"); tabelaCodons.put("UGA", "*"); // Códons de parada
        tabelaCodons.put("CAU", "H"); tabelaCodons.put("CAC", "H"); // Histidina
        tabelaCodons.put("CAA", "Q"); tabelaCodons.put("CAG", "Q"); // Glutamina
        tabelaCodons.put("AAU", "N"); tabelaCodons.put("AAC", "N"); // Asparagina
        tabelaCodons.put("AAA", "K"); tabelaCodons.put("AAG", "K"); // Lisina
        tabelaCodons.put("GAU", "D"); tabelaCodons.put("GAC", "D"); // Ácido aspártico
        tabelaCodons.put("GAA", "E"); tabelaCodons.put("GAG", "E"); // Ácido glutâmico
        tabelaCodons.put("UGU", "C"); tabelaCodons.put("UGC", "C"); // Cisteína
        tabelaCodons.put("UGG", "W"); // Triptofano
        tabelaCodons.put("CGU", "R"); tabelaCodons.put("CGC", "R"); tabelaCodons.put("CGA", "R"); tabelaCodons.put("CGG", "R"); // Arginina
        tabelaCodons.put("AGU", "S"); tabelaCodons.put("AGC", "S"); // Serina
        tabelaCodons.put("AGA", "R"); tabelaCodons.put("AGG", "R"); // Arginina
        tabelaCodons.put("GGU", "G"); tabelaCodons.put("GGC", "G"); tabelaCodons.put("GGA", "G"); tabelaCodons.put("GGG", "G"); // Glicina

        // Traduzir RNA em proteína
        StringBuilder proteina = new StringBuilder();

        for (int i = 0; i <= rna.length() - 3; i += 3) {
            String codon = rna.substring(i, i + 3);
            String aminoacido = tabelaCodons.getOrDefault(codon, "?"); // ? se não encontrado
            proteina.append(aminoacido);
            if (aminoacido.equals("*")) break; // Para a tradução ao encontrar códon de parada
        }

        // Resultado
        System.out.println("Proteína: " + proteina.toString());

        scanner.close();
    }
}
