public class Main{
public static double Entropy(String str){
double H = .0;
int sum = 0;
int[] letter = new int[26];

str = str.toUpperCase(); // 将小写字母转换成大写
for (int i = 0; i < str.length(); i++){// 统计字母个数
char c = str.charAt(i);
if (c >= 'A' & & c <= 'Z') {
letter[c-'A']++;
sum++;
}
}

for (int i = 0; i < 26; i++){
double p = 1.0 * letter[i] / sum;
if (p > 0)
H += -(p * Math.log(p) / Math.log(2)); // H = -∑Pi * log2(Pi)
}


return H;
}

public
static
void
main(String[]
args){
String
str = StdIn.readAll();
double
H = Entropy(str);
StdOut.printf("%4.2f\n", H);
}
}