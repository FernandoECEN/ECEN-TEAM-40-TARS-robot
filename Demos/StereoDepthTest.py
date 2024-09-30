import numpy as np
import cv2 as cv
from matplotlib import pyplot as plt

# Load images
imgL = cv.imread("C:\\Users\\dougr\\OneDrive\\Desktop\\Bicycle1-perfect\\im0.png", cv.IMREAD_GRAYSCALE)
imgR = cv.imread("C:\\Users\\dougr\\OneDrive\\Desktop\\Bicycle1-perfect\\im1.png", cv.IMREAD_GRAYSCALE)

# Nothing function
def nothing(x):
    pass

# Create window for changing stereo settings
cv.namedWindow('disp', cv.WINDOW_NORMAL)
cv.resizeWindow('disp', 600, 600)

cv.createTrackbar('numDisparities', 'disp', 1, 17, nothing)
cv.createTrackbar('blockSize', 'disp', 5, 50, nothing)
cv.createTrackbar('preFilterType', 'disp', 1, 1, nothing)
cv.createTrackbar('preFilterSize', 'disp', 2, 25, nothing)
cv.createTrackbar('preFilterCap', 'disp', 5, 62, nothing)
cv.createTrackbar('textureThreshold', 'disp', 10, 100, nothing)
cv.createTrackbar('uniquenessRatio', 'disp', 15, 100, nothing)
cv.createTrackbar('speckleRange', 'disp', 0, 100, nothing)
cv.createTrackbar('speckleWindowSize', 'disp', 3, 25, nothing)
cv.createTrackbar('disp12MaxDiff', 'disp', 5, 25, nothing)
cv.createTrackbar('minDisparity', 'disp', 5, 25, nothing)

# Create the image matching system
stereo = cv.StereoBM.create()

# Event loop for updating disparity map using slider parameters from window
while True:

    # Get the values from each slider
    numDisparities = cv.getTrackbarPos('numDisparities', 'disp') * 16
    blockSize = cv.getTrackbarPos('blockSize', 'disp') * 2 + 5
    preFilterType = cv.getTrackbarPos('preFilterType', 'disp')
    preFilterSize = cv.getTrackbarPos('preFilterSize', 'disp') * 2 + 5
    preFilterCap = cv.getTrackbarPos('preFilterCap', 'disp')
    textureThreshold = cv.getTrackbarPos('textureThreshold', 'disp')
    uniquenessRatio = cv.getTrackbarPos('uniquenessRatio', 'disp')
    speckleRange = cv.getTrackbarPos('speckleRange', 'disp')
    speckleWindowSize = cv.getTrackbarPos('speckleWindowSize', 'disp') * 2
    disp12MaxDiff = cv.getTrackbarPos('disp12MaxDiff', 'disp')
    minDisparity = cv.getTrackbarPos('minDisparity', 'disp')

    # Setting the updated parameters before computing disparity map
    stereo.setNumDisparities(numDisparities)
    stereo.setBlockSize(blockSize)
    stereo.setPreFilterType(preFilterType)
    stereo.setPreFilterSize(preFilterSize)
    stereo.setPreFilterCap(preFilterCap)
    stereo.setTextureThreshold(textureThreshold)
    stereo.setUniquenessRatio(uniquenessRatio)
    stereo.setSpeckleRange(speckleRange)
    stereo.setSpeckleWindowSize(speckleWindowSize)
    stereo.setDisp12MaxDiff(disp12MaxDiff)
    stereo.setMinDisparity(minDisparity)

    # Compute the disparity map
    disparity = stereo.compute(imgL, imgR)

    disparity = disparity.astype(np.float32)

    # Scaling down the disparity values and normalizing them
    disparity = (disparity / 16.0 - minDisparity) / numDisparities

    # Displaying the disparity map
    cv.imshow("disp", disparity)

    # Close window using esc key
    if cv.waitKey(1) == 27:
        break
