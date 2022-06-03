package binarytree;

import java.util.LinkedList;
import java.util.Queue;

public class binaryTree {
    private static int count = -1;
    static class Node{
        int data;
        Node left;
        Node right;

        Node (int data){
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinaryTree{
        static int idx = -1;
        public static Node buildTree(int[] nodes){
            idx++;
            if(nodes[idx] == -1){
                return null;
            }
            Node newNode = new Node(nodes[idx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);
            return newNode;
        }
    }

    public static void preorder(Node root){
        if(root == null){
            System.out.print(-1+" ");
            return;
        }

        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);
    }

    public static void inorder(Node root){
        if(root == null){
            return;
        }

        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    public static void postorder(Node root){
        if(root == null){
            return;
        }

        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }

    public static void levelOrder(Node root){
        if(root == null){
            return;
        }

        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while(!q.isEmpty()){
            Node curr = q.remove();
            if(curr == null){
                System.out.println();

                if(q.isEmpty()){
                    break;
                }
                else{
                    q.add(null);
                }
            }
            else{
                System.out.print(curr.data+" ");
                if(curr.left != null){
                    q.add(curr.left);
                }
                if(curr.right != null){
                    q.add(curr.right);
                }
            }
        }

    }

    //Question 1: count the nodes in tree.
    public static int countNodes(Node root){
        if(root == null){
            return 0;
        }

        int totalLeftNodes  = countNodes(root.left);
        int totalRightNodes = countNodes(root.right);

        return totalLeftNodes+totalRightNodes+1;
    }

    //Question 2: sum of all nodes in tree.
    public static int sumOfNodes(Node root){
        if(root == null){
            return 0;
        }

        int sumOfLeftNodes  = sumOfNodes(root.left);
        int sumOfRightNodes = sumOfNodes(root.right);

        return sumOfLeftNodes+sumOfRightNodes+root.data;
    }

    //Question 3: hight of the tree.
    public static int NoOfLevels(Node root){
        if(root == null){
            return 0;
        }

        int totalLeftNodes  = NoOfLevels(root.left);
        int totalRightNodes = NoOfLevels(root.right);

        return Math.max(totalLeftNodes,totalRightNodes)+1;
    }

    public static void main(String[] args){
        int[] nodes = {1,2,4,7,-1,-1,9,-1,-1,5,8,-1,-1,-1,3,-1,6,17,-1,-1,10,-1,9,-1,-1};
        BinaryTree tree = new BinaryTree();

        Node root = tree.buildTree(nodes);
        System.out.println(NoOfLevels(root));
    }


}
