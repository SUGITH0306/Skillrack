import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String t = s.nextLine().toLowerCase();
        int c = 0;
        for (String w : t.split("\\W+")) if (w.equals("a") || w.equals("an") || w.equals("the")) c++;
        System.out.println(c);
    }
}

Example Input/Output 1:
Input:
I went to a movie yesterday along with an old man.
Output:
2
Example Input/Output 2:
Input
In 1885 it was banished from the shelves of the Concord Public Library, an act that attracted a lot of publicity and discussion in
the press. It is still frequently in the news, as various schools and school systems across the country either ban it from or restore
it to their classrooms. The texts and illustrations below attempt to capture both the novel's achievement and some aspects of
its controversiality.
Output:
8
