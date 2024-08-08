/**
 *　英大文字・小文字変換するスクリプト
 */
package convert;

public class convert {
  static public void main(String args[]){
    String str = "EnglishaBc";
    System.out.println(String.format("切り出し前の文字列 ： %s", str));
    System.out.println("英小文字を大文字に変換 -> " + str.toUpperCase());
    System.out.println("英大文字を小文字に変換 -> " + str.toLowerCase());
  }
}