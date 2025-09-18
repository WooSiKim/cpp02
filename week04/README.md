```mermaid

classDiagram

&nbsp;   direction LR

&nbsp;   class Pokemon {

&nbsp;       <<virtual>> ~Pokemon()

&nbsp;       +virtual void attack()

&nbsp;   }

    class Pikachu {

        ~Pikachu()

        +void attack()

    }



    class Squirtle {

        ~Squirtle()

        +void attack()

    }



&nbsp;   Pokemon <|-- Pikachu : inheritance

&nbsp;   Pokemon <|-- Squirtle : inheritance

```

