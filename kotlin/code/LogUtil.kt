
import android.util.Log

/**
 * Log 打印工具单例类
 * @author Moriafly
 * @since 2020/8/17
 */
object LogUtil {

    private const val DEVELOP = 1

    private const val VERBOSE = 2

    private const val DEBUG = 3

    private const val INFO = 4

    private const val WARN = 5

    private const val ERROR = 6

    private const val ASSERT = 7

    /**
     * 开发时设置为 DEVELOP
     * 正式发布设置为 ERROR
     */
    private var level = DEVELOP
    
    fun println(msg: String) {
        if (level <= DEVELOP) println(msg)
    }

    fun v(tag: String, msg: String) {
        if (level <= VERBOSE) Log.v(tag, msg)
    }

    fun d(tag: String, msg: String) {
        if (level <= DEBUG) Log.d(tag, msg)
    }

    fun i(tag: String, msg: String) {
        if (level <= INFO) Log.i(tag, msg)
    }

    fun w(tag: String, msg: String) {
        if (level <= WARN) Log.w(tag, msg)
    }

    fun e(tag: String, msg: String) {
        if (level <= ERROR) Log.e(tag, msg)
    }

    /**
     * Log.wtf() 将记录优先级 ASSERT 错误，并可以（根据系统配置）发送错误报告，并立即终止程序
     */
    fun a(tag: String, msg: String) {
        if (level <= ASSERT) Log.wtf(tag, msg)
    }
}