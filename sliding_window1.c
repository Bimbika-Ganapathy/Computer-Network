#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function
#include <stdbool.h>

#define MAX_FRAMES 10

// Function to simulate sending a frame
void sendFrame(int frameNumber) {
    printf("Frame %d sent.\n", frameNumber);
}

// Function to simulate receiving acknowledgment
bool receiveAck(int frameNumber) {
    // Simulate random acknowledgment failure
    return rand() % 5 != 0; // 80% success rate
}

int main() {
    int totalFrames, windowSize;
    
    printf("Enter total number of frames: ");
    scanf("%d", &totalFrames);
    
    printf("Enter window size: ");
    scanf("%d", &windowSize);
    
    int sent = 0;  // Tracks the number of frames sent
    int ack = 0;   // Tracks the last acknowledged frame
    
    while (ack < totalFrames) {
        // Send frames within the window
        for (int i = 0; i < windowSize && (sent < totalFrames); i++) {
            sendFrame(sent + 1);
            sent++;
        }
        
        // Receive acknowledgment for each frame in the window
        for (int i = ack; i < sent; i++) {
            if (receiveAck(i + 1)) {
                printf("Acknowledgment received for frame %d.\n", i + 1);
                ack++;
            } else {
                printf("Acknowledgment not received for frame %d. Resending...\n", i + 1);
                sent = ack; // Resend from the last acknowledged frame
                break;
            }
        }
        sleep(1); // Add a delay to simulate transmission
    }
    
    printf("All frames sent and acknowledged successfully.\n");
    return 0;
}