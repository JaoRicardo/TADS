public class Cliente {
    private String cpf;
    private String endereco;
    private String nome;
    private String telefone;
    private String email;
    private String observacao;
    
    public Cliente(String cpf, String endereco, String nome, String telefone, String email, String observacao){
        super();
        this.cpf = cpf;
        this.endereco = endereco;
        this.nome = nome;
        this.telefone = telefone;
        this.email = email;
        this.observacao = observacao;
    }
    public Cliente(){
        super();
    }

    public String getCfp(){
        return  cpf;
    }
    public void setCpf(String cpf){
        this.cpf = cpf;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
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

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getObservacao() {
        return observacao;
    }

    public void setObservacao(String observacao) {
        this.observacao = observacao;
    }




}
