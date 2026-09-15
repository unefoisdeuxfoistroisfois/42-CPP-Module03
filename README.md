# C++ - Module 03
## Héritage
---

## Notions
1. Héritage simple (`public`) et attributs `protected`
2. Héritage multiple (`DiamondTrap : public ScavTrap, public FragTrap`)
3. Le "diamond problem" et sa résolution
4. Constructeurs et destructeurs dans une chaîne d'héritage
5. Forme canonique orthodoxe appliquée à des classes dérivées
6. Redéfinition (overriding) de méthodes de la classe de base
7. Résolution d'ambiguïté avec l'opérateur de portée (`ClapTrap::` / `using`)

---

## Exercices

| Exercice | Sujet | Notions |
|----------|-------|---------|
| ex00 | Aaaaa! | Classe `ClapTrap`, forme canonique, `attack`, `takeDamage`, `beRepaired` |
| ex01 | Serena, my love! | Classe `ScavTrap` héritant de `ClapTrap`, `guardGate`, constructeurs en cascade |
| ex02 | Repetitive work, much? | Classe `FragTrap` héritant de `ClapTrap`, `highFivesGuys` |
| ex03 | Now it's weird... | Classe `DiamondTrap` (héritage multiple de `ScavTrap` et `FragTrap`), diamond problem, `whoAmI` |
