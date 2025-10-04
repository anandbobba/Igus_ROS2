from setuptools import find_packages
from setuptools import setup

setup(
    name='irc_ros_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('irc_ros_msgs', 'irc_ros_msgs.*')),
)
