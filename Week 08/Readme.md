

##  Ключова дума static. Изключения. Масиви от указатели към обекти.

###  Изключения
![enter image description here](https://i.ibb.co/hDMRzMB/df-drawio-1.png)

 - Изключения в конструктор. 
 - Изключения в деструктор. 

### Масиви от указатели към обекти.

 ```c++
class SomeCollection
{
	A** data;
	//other things
};
 ```
![enter image description here](https://i.ibb.co/YDCL2nr/pointer-Of-Pointers.png)
#####  Какви са ползите:

 - Бързо разместване на обектите в колецкията - не се изисква да се копират. Само разместваме указателите
 - Не се изисква същестуването на деф. контруктор на A.
 - Възможно е да имаме "празна клетка", като се възползваме от възможната nullptr стойност.
