import java.io.File;
/**
 *　Cドライブのディスク容量を出力
 */
public class disk {
  public static void main(String[] args) {
    File file = new File("c:");
    long total = file.getTotalSpace();
    long free  = file.getFreeSpace();
    long usespace = file.getUsableSpace();
    double pow = Math.pow(1024, 3); //1024*1024*1024
    //それぞれのディスク容量をGBに表示
    System.out.println("ディスク空容量："+ Math.floor(total / pow) + "GB");
    System.out.println("ディスク全容量："+ Math.floor(free / pow) + "GB");
    System.out.println("ディスク利用可能容量："+ Math.floor(usespace / pow) + "GB");
  }
}