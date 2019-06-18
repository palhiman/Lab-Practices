#!/usr/bin/env python3
from hn import HN

hn1 = HN()

# print top 10 stories from homepage
for story in hn1.get_stories()[:10]:
    story.print_story()
    print ('*' * 50)
    


