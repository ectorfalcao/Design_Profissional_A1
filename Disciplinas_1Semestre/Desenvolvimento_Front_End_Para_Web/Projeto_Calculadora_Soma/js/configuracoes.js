function somar() { // Declara a função chamada 'somar'
const n1 = parseFloat(document.getElementById('num1').value); // Obtém o valor do input com id 'num1' e converte para número decimal
const n2 = parseFloat(document.getElementById('num2').value); // Obtém o valor do input com id 'num2' e converte para número decimal
const resultado = n1 + n2; // Realiza a soma dos dois números e armazena em
'resultado'
const resultadoDiv = document.getElementById('resultado'); // Seleciona o elemento com id 'resultado' para exibir a resposta
if (isNaN(resultado)) { // Verifica se o resultado não é um número (caso os inputs sejam inválidos)
resultadoDiv.textContent = "Por favor, insira dois números válidos."; //Exibe mensagem de erro se os valores não forem válidos
} else { // Se os valores forem válidos
resultadoDiv.textContent = `Resultado: ${resultado}`; // Exibe o resultado da soma no elemento 'resultado'
}
}
function limpar() {
// Limpa os campos de entrada
document.getElementById('num1').value = '';
document.getElementById('num2').value = '';
// Limpa o conteúdo da div de resultado
document.getElementById('resultado').textContent = '';
}