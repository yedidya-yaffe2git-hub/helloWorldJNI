package sandBridge;

public class HelloWorldJNI {
	static {
		System.loadLibrary("native");
	}
	
	public native void sayHello();
	public native int add(int a, int b);
	
	
	
}
