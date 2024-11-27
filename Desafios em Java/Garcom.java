public class Garcom {
    private String cpf;
    private String nome;
    private String telefone;
    private int codigo;

    public Garcom(int codigo, String cpf, String nome, String telefone) {
        super();
        this.codigo = codigo;
        this.cpf = cpf;
        this.nome = nome;
        this.telefone = telefone;
    }
    public Garcom(){
        super();
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

}
