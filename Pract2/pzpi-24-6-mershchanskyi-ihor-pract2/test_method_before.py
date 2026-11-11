class UserNotFoundError(Exception):
    pass

def get_user_permissions(user_id, permissions_db):
    try:
        return permissions_db[user_id]
    except KeyError as e:
        raise UserNotFoundError(f"User {user_id} does not exist") from e