import os
import time
import csv 

# Function to read the CSV file and return the first row of data
def read_csv_file(file_path):
    # Opening the CSV file in read mode with UTF-8 encoding
    with open(file_path, newline='', encoding='utf-8') as csvfile:
        reader = csv.reader(csvfile)  # Create a CSV reader object
        for r in reader:
                return r  # Return the first row of the CSV file

# Function to check if the file has been modified
def check_file_changed(file_path, last_modified_time):
    try:
        # Get the current modification time of the file
        current_modified_time = os.path.getmtime(file_path)
        
        # If the file has never been checked before (last_modified_time is None)
        # or if the file's modification time is different from the last checked time
        if last_modified_time is None or current_modified_time != last_modified_time:
            return current_modified_time, True  # Return new modification time and indicate the file has changed
        return last_modified_time, False  # Return the original modification time if no change
    except FileNotFoundError:
        # If the file doesn't exist, print an error message and return the original last_modified_time
        print("File not found!")
        return last_modified_time, False

# Function to check whether the CSV file has changed and read new data if so
def check_ai(csv_file_path,last_modified_time,data):
    # Print the current file path and last modified time for debugging
    print(csv_file_path, last_modified_time)
    
    # Call the check_file_changed function to check if the file has changed
    last_modified_time, has_changed = check_file_changed(csv_file_path, last_modified_time)
    
    # If the file has changed, read the new data from the CSV
    if has_changed:
        print("CSV file has changed. Reading new data...")
        data = read_csv_file(csv_file_path)  # Call read_csv_file to read the new content
        return data, last_modified_time
    else:
        # If no change was detected, print that there was no change
        print("No change detected.")
        return data, last_modified_time
