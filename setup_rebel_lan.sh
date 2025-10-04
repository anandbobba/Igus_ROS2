#!/bin/bash

# --- CONFIGURATION ---
# Change these if your Rebel uses different IP
PC_IP="192.168.3.100"
PC_IFACE="enp3s0"      # Replace with your Ethernet interface name
REBEL_IP="192.168.3.11"

# --- STEP 1: Set PC IP ---
echo "[1/3] Setting PC IP to $PC_IP on $PC_IFACE..."
sudo ip addr flush dev $PC_IFACE
sudo ip addr add $PC_IP/24 dev $PC_IFACE
sudo ip link set $PC_IFACE up
sleep 1

# --- STEP 2: Test connectivity ---
echo "[2/3] Pinging Rebel at $REBEL_IP..."
ping -c 3 $REBEL_IP

# --- STEP 3: Check ROS 2 topics ---
echo "[3/3] Checking ROS 2 topics..."
echo "Make sure you have sourced your ROS 2 setup:"
echo "  source /opt/ros/humble/setup.bash"
read -p "Press Enter to continue..."
ros2 topic list
