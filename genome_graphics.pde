Protein seq;
int rad = 0;
float startX = 450.0;
float startY = 450.0;

void setup() {
  size(1800, 900);
  String proteinInfo = "input.txt";
  String line;
  BufferedReader fileReader = createReader(proteinInfo);
  try { 
        line = fileReader.readLine();
      }
  catch (IOException e) {
        e.printStackTrace();
        line = null;
      }
  seq = new Protein(Integer.valueOf(line));
  
  seq.createChain(); 
  rad =  seq.getIndex(1).getRad();
  
  for (int i = 0; i < seq.getSize(); i++) 
  {
   seq.getIndex(i).chooseFill();
   if (i == 0) {
     seq.getIndex(i).setPos(startX, startY); 
   }
   else {
     seq.getIndex(i).setPos(startX + rad*1.25*i, startY); 
   }
 }
}
  
void draw() 
{
 background(255); 
  for (int i = 0; i < seq.getSize(); i++) 
  {
   seq.getIndex(i).converge();
   seq.getIndex(i).update();
  }
}