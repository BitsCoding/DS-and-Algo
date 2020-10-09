import java.io.*;

class Solution {
    /**
    * This function decrypts the color codes.
    * @param color_codes This is the array of different color codes.
    * @return String This returns decrypted message.
    */
    private static String decrypt(String[] color_codes){
        StringBuilder builder = new StringBuilder();
        for (String temp : color_codes) {
            for (int i = 0; i < temp.length(); i += 2) {
                builder.append(
                    (char) Integer.parseInt(
                        temp.substring(i, i + 2), 16
                    )
                );
            }
        }
        return builder.toString();
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- != 0) {
            Integer.parseInt(br.readLine());
            String[] str = br.readLine().split(" ");
            System.out.println(decrypt(str));
        }
    }
}