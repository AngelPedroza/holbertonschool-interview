#!/usr/bin/python3
def function(index, boxes, keys_dict):
    for i in boxes[index]:
        if i in list(keys_dict.keys()):
            continue
        keys_dict.update({i: None})
        function(i, boxes, keys_dict)

def canUnlockAll(boxes):
    """Know if can entry to all sublists"""
    if len(boxes) == 0:
        return False

    keys_dict = {}
    keys_dict[0] = None
    for keys in boxes[0]:
        keys_dict[keys] = None

    for index in boxes[0]:
        if index >= len(boxes):
            continue
        else:
            function(index, boxes, keys_dict)

    list_boxes = []
    for index in list(keys_dict.keys()):
        if index >= len(boxes):
            continue
        else:
            list_boxes.append(boxes[index])

    if len(list_boxes) == len(boxes):
        return True
    return False
