$disciplinas = @(
    "auditoria_e_seguranca_de_sistemas",
    "desenvolvimento_baseado_em_frameworks_2",
    "desenvolvimento_de_sistemas_distribuidos",
    "elementos_de_domotica",
    "projeto_integrador_2",
    "topicos_especiais_em_tecnologia_da_informacao"
)

foreach ($disciplina in $disciplinas) {
    New-Item -Path "Semestre_06\$disciplina\exercicios" -ItemType Directory -Force
    New-Item -Path "Semestre_06\$disciplina\provas" -ItemType Directory -Force
}
