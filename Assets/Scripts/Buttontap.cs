using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Buttontap : MonoBehaviour
{
    public Button[] buttons; // Array to hold all 9 buttons
    public TMP_Text[] buttonTexts; // Array to hold the TextMeshPro text components of the buttons
    private bool isPlayerOneTurn = true; // Track whose turn it is (Player 1: O, Player 2: X)
    private bool isGamePaused = false; // Track if the game is paused (e.g., after a win)

    void Start()
    {
        // Debugging: Check if buttonTexts array is properly assigned
        for (int i = 0; i < buttons.Length; i++)
        {
            if (buttonTexts[i] == null)
            {
                Debug.LogError("ButtonText at index " + i + " is not assigned!");
            }
        }

        // Initialize the button click listeners
        for (int i = 0; i < buttons.Length; i++)
        {
            int index = i; // Capture the index for the lambda function
            buttons[i].onClick.AddListener(() => OnButtonClick(index));
        }

        ResetGame(); // Initialize the game
    }

    public void ResetGame()
    {
        if (buttonTexts == null || buttons == null)
        {
            Debug.LogError("ButtonTexts or Buttons array is not assigned!");
            return;
        }

        // Clear all button texts and reset colors
        for (int i = 0; i < buttonTexts.Length; i++)
        {
            if (buttonTexts[i] == null)
            {
                Debug.LogError("ButtonText at index " + i + " is not assigned!");
                continue;
            }

            buttonTexts[i].text = ""; // Clear the text
            buttonTexts[i].color = Color.black; // Reset text color
            buttons[i].interactable = true; // Enable all buttons
        }

        // Reset turn to Player 1
        isPlayerOneTurn = true;
        isGamePaused = false; // Unpause the game
    }

    void OnButtonClick(int buttonIndex)
    {
        if (isGamePaused)
        {
            return;
        }

        if (buttonTexts[buttonIndex] == null)
        {
            Debug.LogError("ButtonText at index " + buttonIndex + " is not assigned!");
            return;
        }

        if (buttonTexts[buttonIndex].text == "")
        {
            if (isPlayerOneTurn)
            {
                buttonTexts[buttonIndex].text = "O";
                buttonTexts[buttonIndex].color = Color.green; // Set color to green for Player 1
            }
            else
            {
                buttonTexts[buttonIndex].text = "X";
                buttonTexts[buttonIndex].color = Color.red; // Set color to red for Player 2
            }

            isPlayerOneTurn = !isPlayerOneTurn;
            CheckForWin();
        }
    }

    void CheckForWin()
    {
        // Define all possible winning combinations (rows, columns, diagonals)
        int[,] winConditions = new int[,]
        {
            {0, 1, 2}, // Row 1
            {3, 4, 5}, // Row 2
            {6, 7, 8}, // Row 3
            {0, 3, 6}, // Column 1
            {1, 4, 7}, // Column 2
            {2, 5, 8}, // Column 3
            {0, 4, 8}, // Diagonal 1
            {2, 4, 6}  // Diagonal 2
        };

        // Check each winning condition
        for (int i = 0; i < winConditions.GetLength(0); i++)
        {
            int a = winConditions[i, 0];
            int b = winConditions[i, 1];
            int c = winConditions[i, 2];

            if (buttonTexts[a].text != "" && buttonTexts[a].text == buttonTexts[b].text && buttonTexts[b].text == buttonTexts[c].text)
            {
                // A player has won
                Debug.Log("Player " + (buttonTexts[a].text == "O" ? "1" : "2") + " wins!");
                PauseGame(); // Pause the game after a win
                return;
            }
        }

        // Check for a draw (all buttons are filled)
        bool isDraw = true;
        foreach (TMP_Text text in buttonTexts)
        {
            if (text.text == "")
            {
                isDraw = false;
                break;
            }
        }

        if (isDraw)
        {
            Debug.Log("It's a draw!");
            PauseGame(); // Pause the game after a draw
        }
    }

    void PauseGame()
    {
        isGamePaused = true; // Pause the game
        foreach (Button button in buttons)
        {
            button.interactable = false; // Disable all buttons
        }
    }
}   