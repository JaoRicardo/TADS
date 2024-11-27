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

    public String getCfp(){
        return  cpf;
    }
    public void setCpf(String cpf){
        this.cpf = cpf;
    }

}
