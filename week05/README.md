```mermaid



classDiagram

\&nbsp;   class Animal {

\&nbsp;       <<abstract>>

\&nbsp;       +makeSound()\\\* void

\&nbsp;   }

\&nbsp;   

\&nbsp;   class Dog {

\&nbsp;       +makeSound() void

\&nbsp;   }

\&nbsp;   

\&nbsp;   class Cat {

\&nbsp;       +makeSound() void

\&nbsp;   }

\&nbsp;   

\&nbsp;   %%  상속 관계
\&nbsp;   Animal <|-- Dog : inherits

\&nbsp;   Animal <|-- Cat : inherits

\&nbsp;   

\&nbsp;   %% 클래스 스타일링

\&nbsp;   class Animal {

\&nbsp;       <<interface>>

\&nbsp;   }

\&nbsp;   

\&nbsp;   note for Animal "Pure Virtual Function으로\\n추상 클래스가 됨"

\&nbsp;   note for Dog "makeSound(): 멍멍!"

\&nbsp;   note for Cat "makeSound(): 야옹~"

```

