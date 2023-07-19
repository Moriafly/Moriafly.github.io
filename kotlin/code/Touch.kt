foyouButton.setOnTouchListener { _, motionEvent ->
    when (motionEvent.action) {
        MotionEvent.ACTION_DOWN -> {
            // callVibrator(1, 1)
        }
        MotionEvent.ACTION_UP -> {
            // callVibrator(1, 1)
        }
    }
    return@setOnTouchListener false
}