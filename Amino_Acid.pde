class Amino_Acid {
  int radius;
  String type;
  float posX = 450;
  float posY = 450;
  float xSpeed;
  float ySpeed;
  
  float destX;
  float destY;
  
  public Amino_Acid(String name, float x, float y, float pos1, float pos2) {
    radius = 20;
    type = name;
    xSpeed = 5;
    ySpeed = 5;
    posX = 
    posY = 
    destX = posX + pos1;
    destY = posY + pos2;
  }
  
  
  String getType() {
    return type;
  }
  
  int getRad() {
   return radius; 
  }
  
  float getX(){
    return posX; 
  }
  
  float getY() {
    return posY; 
  }
  
  void setPos(float X, float Y) {
    posX = X;
    posY = Y;
  }
  
  void move() {
    posX += xSpeed;
    posY += ySpeed;
  }
  
  void move(float vX, float vY) {
    posX += vX;
    posY += vY;
  }
  
  void update()
  {
    chooseFill();
    ellipse(posX, posY, radius, radius);
  }
  
  void converge() {
    println(destX + " " + posX);
    if (destX > posX && destY > posY) 
       move(1, 1);
    else if (destX < posX && destY > posY) 
       move(-1, 1);
    else if (destX < posX && destY < posY)
       move(-1, -1);
    else if (destX > posX && destY < posY)
       move(1, -1);
  }
  
  
  void chooseFill() {
  switch (type) {
    case "G": 
      fill(255, 0, 0);
      break;
    case "I":
      fill(0, 0, 0);
      break;
     case "L":
       fill(255, 100, 0);
       break;
     case "P":
       fill(0, 255, 100);
       break;
     case "V":
       fill(25, 30, 100);
       break;
     case "F":
       fill(100, 100, 100);
       break;
     case "W":
       fill(25, 190, 75);
       break;
     case "Y":
       fill(30, 0, 250);
       break;
     case "D":
       fill(90, 240, 100);
       break;
     case "E":
       fill(60, 60, 75);
       break;
     case "R":
       fill(10, 255, 120);
       break;
     case "H":
       fill(40, 0, 200);
       break;
     case "K":
       fill(80, 160, 240);
       break;
     case "S":
       fill(255, 255, 255);
       break;
     case "T":
       fill(0, 190, 255);
       break;
     case "C":
       fill(190, 30, 0);
       break;
     case "M":
       fill(50, 200, 50);
       break;
     case "N":
       fill(90, 90, 180);
       break;
     case "Q":
       fill(255, 255, 0);
       break;
     default:
       fill(0, 255, 255);
       break;
    }
  }
}