def mergeLists(head1, head2):
    # write here
    new_head = SinglyLinkedListNode(0)
    current = new_head
    
    while head1 and head2:
        if head1.data <= head2.data:
            current.next = head1
            head1 = head1.next
        elif head1.data > head2.data:
            current.next = head2
            head2 = head2.next
        
        current = current.next
        
    current.next = head1 or head2
    
    return new_head.next