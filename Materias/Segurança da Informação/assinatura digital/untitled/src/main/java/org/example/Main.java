package org.example;
import java.security.*;
import java.util.Base64;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o conteúdo do documento: ");
        String documento = scanner.nextLine();

        KeyPairGenerator keyGen = KeyPairGenerator.getInstance("RSA");
        keyGen.initialize(2048);
        KeyPair keyPair = keyGen.generateKeyPair();
        PrivateKey chavePrivada = keyPair.getPrivate();
        PublicKey chavePublica = keyPair.getPublic();

        Signature assinatura = Signature.getInstance("SHA256withRSA");
        assinatura.initSign(chavePrivada);
        assinatura.update(documento.getBytes());
        byte[] assinaturaBytes = assinatura.sign();

        String assinaturaBase64 = Base64.getEncoder().encodeToString(assinaturaBytes);
        System.out.println("\nDocumento assinado com sucesso!");
        System.out.println("Conteúdo do documento: " + documento);
        System.out.println("Assinatura (Base64): " + assinaturaBase64);

        Signature verificador = Signature.getInstance("SHA256withRSA");
        verificador.initVerify(chavePublica);
        verificador.update(documento.getBytes());

        boolean assinaturaValida = verificador.verify(Base64.getDecoder().decode(assinaturaBase64));
        if (assinaturaValida) {
            System.out.println("assinatura é válida.");
        } else {
            System.out.println("assinatura é inválida.");
        }
    }
}