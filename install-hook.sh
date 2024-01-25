#!/bin/bash

# Set the path to the hook script
HOOK_SCRIPT="hooks/post-checkout"

# Set the path to the hooks directory
HOOKS_DIR=".git/hooks"

# Check if the hooks directory exists
if [ ! -d "$HOOKS_DIR" ]; then
    echo "Creating hooks directory: $HOOKS_DIR"
    mkdir -p "$HOOKS_DIR"
fi

# Copy the hook script to the hooks directory
echo "Copying $HOOK_SCRIPT to $HOOKS_DIR"
cp "$HOOK_SCRIPT" "$HOOKS_DIR/"

# Make the hook script executable
chmod +x "$HOOKS_DIR/$(basename "$HOOK_SCRIPT")"

# Install gh
sudo apt install gh

echo "Installation completée."
