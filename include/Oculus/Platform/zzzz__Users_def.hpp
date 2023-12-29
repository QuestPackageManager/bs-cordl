#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Users)
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
namespace Oculus::Platform {
class UserOptions;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform {
class Users;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Users);
// Type: Oculus.Platform::Users
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13386))
// CS Name: ::Oculus.Platform::Users*
class CORDL_TYPE Users : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLoggedInUserLocale addr 0x25a24dc size 0xd4 virtual false final false
  static inline ::StringW GetLoggedInUserLocale();

  /// @brief Method Get addr 0x25a25b0 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Get(uint64_t userID);

  /// @brief Method GetAccessToken addr 0x25a2710 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::StringW>* GetAccessToken();

  /// @brief Method GetBlockedUsers addr 0x25a2868 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetBlockedUsers();

  /// @brief Method GetLoggedInUser addr 0x25a29c0 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* GetLoggedInUser();

  /// @brief Method GetLoggedInUserFriends addr 0x25a2b18 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends();

  /// @brief Method GetLoggedInUserFriendsAndRooms addr 0x25a2c70 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserFriendsAndRooms();

  /// @brief Method GetLoggedInUserRecentlyMetUsersAndRooms addr 0x25a2dc8 size 0x174 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserRecentlyMetUsersAndRooms(::Oculus::Platform::UserOptions* userOptions);

  /// @brief Method GetOrgScopedID addr 0x25a2f3c size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t userID);

  /// @brief Method GetSdkAccounts addr 0x25a309c size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts();

  /// @brief Method GetUserProof addr 0x25a31f4 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* GetUserProof();

  /// @brief Method LaunchBlockFlow addr 0x25a334c size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* LaunchBlockFlow(uint64_t userID);

  /// @brief Method LaunchFriendRequestFlow addr 0x25a34ac size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method LaunchUnblockFlow addr 0x25a360c size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* LaunchUnblockFlow(uint64_t userID);

  /// @brief Method GetNextBlockedUserListPage addr 0x25a376c size 0x1dc virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetNextBlockedUserListPage(::Oculus::Platform::Models::BlockedUserList* list);

  /// @brief Method GetNextUserAndRoomListPage addr 0x25a3948 size 0x1dc virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* GetNextUserAndRoomListPage(::Oculus::Platform::Models::UserAndRoomList* list);

  /// @brief Method GetNextUserListPage addr 0x25a3b24 size 0x1dc virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetNextUserListPage(::Oculus::Platform::Models::UserList* list);

  /// @brief Method GetNextUserCapabilityListPage addr 0x25a3d00 size 0x1dc virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* GetNextUserCapabilityListPage(::Oculus::Platform::Models::UserCapabilityList* list);

  // Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Users(Users&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Users(Users const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Users();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Users, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Users*, "Oculus.Platform", "Users");
