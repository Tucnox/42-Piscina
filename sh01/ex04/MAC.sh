#!/bin/sh

iconfig | grep ether | awk '{print $2}' 
