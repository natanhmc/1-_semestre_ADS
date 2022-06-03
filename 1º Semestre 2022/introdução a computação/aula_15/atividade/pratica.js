var sim = 1 == 1;
var inteiro = 12;
var pontoFlutuante = 12.99;
var nome = 'Natan';
var indefinido;
console.log('tipo ' + sim);
console.log('tipo ' + typeof(inteiro));
console.log('tipo ' + typeof(pontoFlutuante));
console.log('tipo ' + typeof(nome));
console.log('tipo ' + typeof(indefinido));



var nota1=3,nota2=5,nota3=7;
var media=0;
media=(nota1+nota2+nota3)/3;
console.log('a media é ' + media);


var nota1=prompt('insira a nota da AP1');
var nota2=prompt('insira a nota da AP2');
var nota3=prompt('insira a nota da AS');
var mediaFinal;
mediaFinal=((nota1+nota2+nota3)/3);
console.log('a media é ' + mediaFinal);


var nome=prompt('informe o seu nome');
var idade=prompt('informe a sua idade');
if(idade<18){
    console.log('voce é menor de idade')
}else{
    console.log('voce é maior de idade');
}

var nume1=prompt('informe o 1 numero');
var nume2=prompt('informe o 2 numero');
var nume3=prompt('informe o 3 numero');
if(nume1>nume2 && nume2>nume3){
    console.log('o numero maior é ' + nume1);
}else if(nume2>nume3 && nume3>nume1){
    console.log('o numero maior é ' + nume2);
}else if(nume3>nume2 && nume2>nume1){
    console.log('o numero maior é ' + nume3);
}