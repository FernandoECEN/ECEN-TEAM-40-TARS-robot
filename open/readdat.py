import numpy as np


# Function to read intrinsic and distortion data from a file
def read_intrinsic_distortion(filename):
    with open(filename, 'r') as f:
        lines = f.readlines()

    # Initialize arrays
    intrinsic_matrix = []
    distortion_coefficients = []

    # Flags to check which section we are reading
    reading_intrinsic = False
    reading_distortion = False

    for line in lines:
        line = line.strip()  # Remove any leading/trailing whitespace
        if 'intrinsic' in line:
            reading_intrinsic = True
            reading_distortion = False
            continue
        elif 'distortion' in line:
            reading_distortion = True
            reading_intrinsic = False
            continue

        # Read intrinsic matrix
        if reading_intrinsic:
            intrinsic_matrix.append([float(x) for x in line.split()])

        # Read distortion coefficients
        if reading_distortion:
            distortion_coefficients = [float(x) for x in line.split()]

    # Convert intrinsic matrix to a numpy array
    intrinsic_matrix = np.array(intrinsic_matrix)
    distortion_coefficients = np.array(distortion_coefficients)

    return intrinsic_matrix, distortion_coefficients

def read_rot(filename):
    with open(filename, 'r') as f:
        lines = f.readlines()

    # Initialize arrays
    rotation_matrix = []
    translation_matrix = []

    # Flags to check which section we are reading
    reading_rotation = False
    reading_translation = False

    for line in lines:
        line = line.strip()  # Remove any leading/trailing whitespace
        if 'R' in line:
            reading_rotation = True
            reading_translation = False
            continue
        elif 'T' in line:
            reading_translation = True
            reading_rotation = False
            continue

        # Read intrinsic matrix
        if reading_rotation:
            rotation_matrix.append([float(x) for x in line.split()])

        # Read distortion coefficients
        if reading_translation:
            translation_matrix.append([float(x) for x in line.split()])

    # Convert intrinsic matrix to a numpy array
    rotation_matrix = np.array(rotation_matrix)
    translation_matrix = np.array(translation_matrix)

    return rotation_matrix, translation_matrix


# # Read the data from the .dat file
# filename = 'C:\\Users\\dougr\\OneDrive\\Desktop\\Bicycle1-perfect\\camera_parameters\\camera0_rot_trans.dat'  # Replace with your actual file path
# R, T = read_rot(filename)
#
# # Print the results
# print("R:")
# print(R)
#
# print("\nT:")
# print(T)