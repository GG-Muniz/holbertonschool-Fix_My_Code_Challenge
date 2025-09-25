#!/usr/bin/env ruby

numeric = ARGV.select { |s| s =~ /^-?\d+$/ }.map(&:to_i)
numeric.sort.each { |n| puts n }


