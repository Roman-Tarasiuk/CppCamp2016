using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Runtime.InteropServices;

namespace MyLibraryClientCS
{
    static class MyLibraryDLL
    {
        [DllImport("MyLibrary.dll", EntryPoint = "mylib_hello")]
        public static extern void hello(int x);
        [DllImport("MyLibrary.dll", EntryPoint = "mylib_MyClass_create")]
        public static extern IntPtr MyClass_create();
        [DllImport("MyLibrary.dll", EntryPoint = "mylib_MyClass_destroy")]
        public static extern void MyClass_destroy(IntPtr obj);
        [DllImport("MyLibrary.dll", EntryPoint = "mylib_MyClass_hello")]
        public static extern int MyClass_hello(IntPtr obj, int x);
        [DllImport("MyLibrary.dll", EntryPoint = "mylib_MyClass_getName")]
        public static extern IntPtr MyClass_getName(IntPtr obj);
    }

    class MyClass : IDisposable
    {
        private IntPtr obj;
        public MyClass()
        {
            obj = MyLibraryDLL.MyClass_create();
        }

        public void Dispose()
        {
            MyLibraryDLL.MyClass_destroy(obj);
            obj = IntPtr.Zero;
        }

        public int hello(int x)
        {
            return MyLibraryDLL.MyClass_hello(obj, x);
        }

        public string getName()
        {
            return Marshal.PtrToStringAnsi(MyLibraryDLL.MyClass_getName(obj));
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            MyLibraryDLL.hello(999);
            MyClass c = new MyClass();
            c.hello(141);
            Console.WriteLine("c.name = {0}", c.getName());
            c.Dispose();
        }
    }
}
