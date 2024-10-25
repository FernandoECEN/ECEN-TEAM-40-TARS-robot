from setuptools import find_packages, setup

package_name = 'robot_system'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Doug Rymer',
    maintainer_email='drymer46@tamu.edu',
    description='TARS Robot ROS2 Software System',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'client = robot_system.motor_control_client:main',
            'action = robot_system.motor_control_server:main',
        ],
    },
)

