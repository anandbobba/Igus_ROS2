from setuptools import find_packages
from setuptools import setup

setup(
    name='irc_ros_examples',
    version='0.1.0',
    packages=find_packages(
        include=('irc_ros_examples', 'irc_ros_examples.*')),
)
