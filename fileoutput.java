import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
/**
 * ファイルの書き込みサンプル
 *　テキストファイルへの書き込み
 */
public class FileInOut01 {
  public static void main(String[] args) {
    
    // 書き込むファイルの名前
    String outputFileName = "c:/temp/test.txt";
    
    // ファイルオブジェクトの生成
    File outputFile = new File(outputFileName);
    try {
      // 出力ストリームの生成
      FileOutputStream fos = new FileOutputStream(outputFile);
      OutputStreamWriter osw = new OutputStreamWriter(fos);
      PrintWriter pw = new PrintWriter(osw);
      // ファイルへの書き込み
      pw.println("Test");
      pw.println("ファイル入出力");
      
      // 後始末
      pw.close();
    // エラーがあった場合は、スタックトレースを出力
    } catch(Exception e) {
      e.printStackTrace();
    }
  }
}