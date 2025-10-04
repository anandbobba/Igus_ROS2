import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/anand/Igus/Igus_ROS2/install/testtube_sorting'
