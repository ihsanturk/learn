a = {"id": 123, "text": 'hello'};
print('before:\n\t',a)

a['new_id'] = a.pop('id');
print('after:\n\t',a)
