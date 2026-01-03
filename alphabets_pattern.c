/*
Print A to Z alphabets in star pattern using loops
*/

#include <stdio.h>

void printA(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||j==4||i==0||i==2)?"*":" ");
        printf("\n");}}
void printB(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
         printf((j==0||((i==0||i==2||i==4)&&j<4)||(j==4&&i!=0&&i!=2&&i!=4))?"*":" ");
         printf("\n");}}
void printC(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||i==4||j==0)?"*":" ");
        printf("\n");}}
void printD(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||i==0||i==4||(j==4&&i!=0&&i!=4))?"*":" ");
        printf("\n");}}
void printE(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||i==0||i==2||i==4)?"*":" ");
        printf("\n");}}
void printF(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||i==0||i==2)?"*":" ");
        printf("\n");}}
void printG(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||i==0||i==4||(i==2&&j>1)||(j==4&&i>1))?"*":" ");
        printf("\n");}}
void printH(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||j==4||i==2)?"*":" ");
        printf("\n");}}
void printI(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||i==4||j==2)?"*":" ");
        printf("\n");}}
void printJ(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||j==2||(i==4&&j<2)||(j==0&&i>2))?"*":" ");
        printf("\n");}}
void printK(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||i+j==4||i-j==0)?"*":" ");
        printf("\n");}}
void printL(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||i==4)?"*":" ");
        printf("\n");}}
void printM(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||j==4||(i==1&&j==1)||(i==1&&j==3)||(i==2&&j==2))?"*":" ");
        printf("\n");}}
void printN(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||j==4||i==j)?"*":" ");
        printf("\n");}}
void printO(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||i==4||j==0||j==4)?"*":" ");
        printf("\n");}}
void printP(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||((i==0||i==2)&&j<4)||(j==4&&i<2))?"*":" ");
        printf("\n");}}
void printQ(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||i==4||j==0||j==4||(i==3&&j==3))?"*":" ");
        printf("\n");}}
void printR(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((j==0||((i==0||i==2)&&j<4)||(j==4&&i<2)||i-j==2)?"*":" ");
        printf("\n");}}
void printS(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||i==2||i==4||(i<2&&j==0)||(i>2&&j==4))?"*":" ");
        printf("\n");}}
void printT(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||j==2)?"*":" ");
        printf("\n");}}
void printU(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf(((j==0||j==4)&&i<4||i==4)?"*":" ");
        printf("\n");}}
void printV(){
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++) 
        printf((j==i||j==8-i)?"*":" ");
        printf("\n");}}
void printW(){
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++) 
        printf((j==0||j==8||(i==3&&(j==2||j==6))||(i==4&&j==4))?"*":" ");
        printf("\n");}}
void printX(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==j||i+j==4)?"*":" ");
        printf("\n");}}
void printY(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf(((i<2&&(i==j||i+j==4))||(i>=2&&j==2))?"*":" ");
        printf("\n");}}
void printZ(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) 
        printf((i==0||i==4||i+j==4)?"*":" ");
        printf("\n");}}
int main() {
    printA();printB();printC();printD();printE();printF();printG();
    printH();printI();printJ();printK();printL();printM();printN();
    printO();printP();printQ();printR();printS();printT();printU();
    printV();printW();printX();printY();printZ();
    return 0;
}
/*OUTPUT
*****
*   *
*****
*   *
*   *
****
*   *
****
*   *
****
*****
*
*
*
*****
*****
*   *
*   *
*   *
*****
*****
*
*****
*
*****
*****
*
*****
*
*
*****
*
* ***
*   *
*****
*   *
*   *
*****
*   *
*   *
*****
  *
  *
  *
*****
*****
  *
  *
* *
***
*   *
** *
* *
** *
*   *
*
*    
*
*
*****
*   *
** **
* * *
*   *
*   *
*   *
**  *
* * *
*  **
*   *
*****
*   *
*   *
*   *
*****
*****
*   *
****
*
*
*****
*   *
*   *
*  **
*****
*****
*   *
****
**
* *
*****
*
*****
    *
*****
*****
  *
  *
  *
  *
*   *
*   *
*   *
*   *
*****
*       *
 *     *
  *   *
   * *
    *
*       *
*       *
*       *
* *   * *
*   *   *
*   *
 * *
  *
 * *
*   *
*   *
 * *
  *
  *
  *
*****
   *
  *
 *
*****
*/