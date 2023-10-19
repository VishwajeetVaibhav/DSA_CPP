package com.example.radio

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.RadioGroup
import android.widget.Switch
import android.widget.TextView
import kotlin.math.ceil

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


        var costOfServiceEditText = findViewById(R.id.cost_of_service) as EditText
        var tipPercentageRadioGroup = findViewById(R.id.tip_percentage) as RadioGroup
        var roundUpSwitch = findViewById(R.id.round_up_switch) as Switch
        var calculateButton = findViewById(R.id.calculate_button) as Button
        var tipAmountTextView = findViewById(R.id.tip_amount) as TextView


    calculateButton.setOnClickListener {
        val costOfService = costOfServiceEditText.text.toString().toDouble()
        val selectedTipPercentage = when (tipPercentageRadioGroup.checkedRadioButtonId) {
            R.id.ten_percent -> 10.0
            R.id.fifteen_percent -> 15.0
            R.id.twenty_percent -> 20.0
            else -> 0.0
        }
        val roundUpTip = roundUpSwitch.isChecked
        var tipAmount = costOfService * (selectedTipPercentage / 100)
        if (roundUpTip) {
            tipAmount = ceil(tipAmount)
        }
        tipAmountTextView.setText(tipAmount.toString())

    }
    }
}