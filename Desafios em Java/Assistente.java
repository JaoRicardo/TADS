public class Assistente extends Funcionario {
    private String matricula;

    public Assistente(String matricula, String cpf, String endereco, String nome, String telefone, float salario, String codigo) {
        super(cpf, endereco, nome, telefone, salario, codigo);
        this.matricula = matricula;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

}
