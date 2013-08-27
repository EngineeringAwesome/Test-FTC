
int increment() {
  int val += 1;
  return val;
}

int incrementV() {
  if(vala) {
    vala += 1;
  }
  else {
    int vala = 1;
  }
  return vala;
}

int out, outA;

task main() {
  out = increment();
  out = increment();
  out = increment();
  
  outA = incrementV();
  outA = incrementV();
  outA = incrementV();
}
