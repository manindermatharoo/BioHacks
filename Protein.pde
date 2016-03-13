class Protein{
  
  Amino_Acid [] chain;
  String proteinInfo = "input.txt";
  String yCore = "yVals.txt";
  String xCore = "xVals.txt";
  String line = null;
  String line2 = null;
  String line3 = null;
  float x, y;
  int size;
  
  Protein(int size0) 
  {
    chain = new Amino_Acid[size0];
    size = size0;
  }
  
  void createChain() {
    BufferedReader fileReader = createReader(proteinInfo);
    BufferedReader reader2 = createReader(xCore);
    BufferedReader reader3 = createReader(yCore);
    try{
        line = fileReader.readLine();
       }
        catch (IOException e) {
        e.printStackTrace();
        line = null;
       }
    for (int i = 0; i < size; i++) {
      try{
        line = fileReader.readLine();
        line2 = reader2.readLine();
        line3 = reader3.readLine();
        
        line = line.toUpperCase();
        x = Float.parseFloat(line2);
        y = Float.parseFloat(line3);
      }
        catch (IOException e) {
        e.printStackTrace();
        line = null;
        line2 = null;
        line3 = null;
      }
      chain[i] = new Amino_Acid(line, 0, 0, x, y);
    }
  }
  
  int getSize(){
    return size;
  }
  
  Amino_Acid getIndex(int i)
  {
    return chain[i];
  }
}