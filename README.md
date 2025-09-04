%%2025년도 2학기 C++ 프로그래밍 2 수업



classDiagram

&nbsp;   class Product {

&nbsp;       -string name

&nbsp;       -double unitPrice

&nbsp;       +Product(string name, double unitPrice)

&nbsp;       +~Product()

&nbsp;       +getPrice() : double

&nbsp;   }

&nbsp;   

&nbsp;   class Company {

&nbsp;       -string name

&nbsp;       -string telephone

&nbsp;       +Company(string name, string telephone)

&nbsp;       +print() : void

&nbsp;   }

&nbsp;   

&nbsp;   class Invoice {

&nbsp;       -int invoiceNumber

&nbsp;       -double invoiceTotal

&nbsp;       -Company company

&nbsp;       +Invoice(int invoiceNumber, string name, string phone)

&nbsp;       +~Invoice()

&nbsp;       +add(int quantity, Product product) : void

&nbsp;       +print() : void

&nbsp;   }

&nbsp;   

&nbsp;   Invoice \*-- Company : composition (has-a)

&nbsp;   Invoice ..> Product : dependency (use-a)

