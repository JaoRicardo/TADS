public class Tecnico extends Funcionario{
    private String turno;
    private float adicionalNoturno;

    public void MostrarSalario(){
        if(turno.equals("Noturno")){
            float total = getSalario() + this.adicionalNoturno;
            System.out.println("Salário final: " + total);
        }else{
            System.out.println("Salario Final: " + getSalario());
        }
    } 

    public Tecnico(float adicionalNoturno, String turno, String cpf, String endereco, String nome, String telefone, float salario, String codigo) {
        super(cpf, endereco, nome, telefone, salario, codigo);
        this.adicionalNoturno = adicionalNoturno;
        this.turno = turno;
    }

    public String getTurno() {
        return turno;
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }

    public float getAdicionalNoturno() {
        return adicionalNoturno;
    }

    public void setAdicionalNoturno(float adicionalNoturno) {
        this.adicionalNoturno = adicionalNoturno;
    }
    
    
}
