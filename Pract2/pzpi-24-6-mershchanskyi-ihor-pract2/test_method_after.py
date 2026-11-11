def get_user_permissions(user_id, permissions_db):
    # Guard clause
    if user_id not in permission_db:
        return []
    
    return permission_db[user_id]