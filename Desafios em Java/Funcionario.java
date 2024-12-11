public class Funcionario extends Pessoa{
    private float salario;
    private String codigo;
    
    public Funcionario(String cpf, String endereco, String nome, String telefone, float salario, String codigo) {
        super(cpf, endereco, nome, telefone);
        this.salario = salario;
        this.codigo = codigo;
    }

    public float getSalario() {
        return salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }

    public String getCodigo() {
        return codigo;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }
    
    
}
