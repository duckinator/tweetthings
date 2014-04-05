#!/usr/bin/env ruby

require File.join(File.dirname(__FILE__), 'tweetini.rb')
require 'pp'

pp tini(open('test.ini').read)
