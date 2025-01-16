import cv2 as cv

# Import a custom function for reading camera parameters from a file.
from readdat import *

def file2map(camera_parameters_path, size):
    # File paths for camera parameters and rotation/translation matrices.
    cam1file = camera_parameters_path + '/camera0_intrinsics.dat'
    cam2file = camera_parameters_path + '/camera1_intrinsics.dat'
    RT2file = camera_parameters_path + '/camera1_rot_trans.dat'

    # Read intrinsic parameters and distortion coefficients for both cameras.
    K1, dist1 = read_intrinsic_distortion(cam1file)
    K2, dist2 = read_intrinsic_distortion(cam2file)

    # Read rotation and translation matrices for stereo calibration.
    R, T = read_rot(RT2file)

    # Output the translation matrix to the console.
    print(T)

    # Get the size of the images (width, height).
    image_size = (1920,1080)
    print(image_size)

    # Stereo rectification process: Align the two images for easier disparity map calculation.
    R1, R2, P1, P2, Q, valid_roi1, valid_roi2 = cv.stereoRectify(
        K1, dist1, K2, dist2, image_size, R, T, alpha=0)

    # Print the disparity-to-3D transformation matrix (Q).
    print(Q)

    # Extract focal length (f) and inverse of the translation matrix (iTx) from Q.
    f = Q[2][3]
    iTx = Q[3][2]
    b = 1 / iTx  # Baseline (distance between the cameras).
    doff = K1[0][2] - K2[0][2]  # The horizontal offset between the camera centers.
    print(doff)

    # Set new image size for rectified images.
    new_image_size = size

    # Compute undistortion and rectification maps for both left and right images.
    map1_x, map1_y = cv.initUndistortRectifyMap(K1, dist1, R1, P1, new_image_size, cv.CV_32FC1)
    map2_x, map2_y = cv.initUndistortRectifyMap(K2, dist2, R2, P2, new_image_size, cv.CV_32FC1)

    return map1_x, map1_y, map2_x, map2_y, Q
