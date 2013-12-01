boolean filled = false;
int xparam=35;
int yparam=35;

void setup(){
    size(280 ,480);
}

void draw(){
  background(125);
  if(filled){
      fill(0);
       
      stroke(0);
  }
  else{
      fill(255);
      
      stroke(255);
  }
 ellipse(mouseX, mouseY, xparam, yparam);
 ellipse(mouseX-40, mouseY-40, xparam, yparam);
 ellipse(mouseX+40, mouseY+40, xparam, yparam);
}

void mousePressed() {
  // mouseEvent variable contains the current event information
  if (mouseEvent.getClickCount()==2){
      if(filled)
        filled = false;
       else filled=true;
  }
}
