public class Cliente {
 String nome;
  String sobrenome;
}

public class Conta { //criando uma classe Conta
 int numero;		 //definindo os atributos, comum a todos os objetos
  Cliente titular = new Cliente();
  double saldo;
  boolean saque(double valor/*parâmetro*/) { //metodo saque
  	if (this.saldo < valor) return false;
    else {
  	this.saldo = this.saldo - valor;
      return true;
    }
  }
  void deposito (double quantidade) { //metodo deposito
  	this.saldo += quantidade;
  }
  void transfere (Conta destino, double valor) { //metodo de tranferencia
  	this.saldo = this.saldo - valor;
    destino.saldo = destino.saldo + valor;
  }
}

public class Programa {
  public static void main(String[] args) {
  	Conta minhaConta; //declarar uma variável para atribuir o novo objeto para poder referencia-lo
    minhaConta = new Conta (); //atribuir o novo objeto a uma variável do tipo (classe) Conta
    minhaConta.numero = 2001; //inserir valores aos atributos deste objeto
    minhaConta.titular.nome = "Eduardo";
    minhaConta.titular.sobrenome = "Saito";
    minhaConta.saldo = 1200;
    minhaConta.saque(200); //invocação do metodo
    minhaConta.deposito(500);
    Conta conta1;
    conta1 = new Conta ();
    conta1.numero = 1999;
    conta1.titular.nome = "Gabriela";
    conta1.titular.sobrenome = "Lara";
    conta1.saldo = 9000;
    conta1.transfere (minhaConta, 1000);
    System.out.println(conta1.titular.sobrenome);
    System.out.println(minhaConta.titular.nome);
    System.out.println("Saldo atual: " + minhaConta.saldo);
  }
}
