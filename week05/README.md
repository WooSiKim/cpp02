```mermaid

classDiagram

&nbsp;   class Animal {

&nbsp;       <<abstract>>

&nbsp;       +makeSound() void

&nbsp;   }

&nbsp;   

&nbsp;   class Dog {

&nbsp;       +makeSound() void

&nbsp;   }

&nbsp;   

&nbsp;   class Cat {

&nbsp;       +makeSound() void

&nbsp;   }

&nbsp;   

&nbsp;   Animal <|-- Dog

&nbsp;   Animal <|-- Cat

&nbsp;   

&nbsp;   note for Animal "Pure Virtual Function으로 추상 클래스가 됨"

&nbsp;   note for Dog "makeSound(): 멍멍!"

&nbsp;   note for Cat "makeSound(): 야옹~"

```

