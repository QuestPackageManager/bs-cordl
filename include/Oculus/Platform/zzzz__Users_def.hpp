#pragma once
// IWYU pragma private; include "Oculus/Platform/Users.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Users)
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Users;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Users);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Users
class CORDL_TYPE Users : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x3f5e518, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Get(uint64_t userID);

  /// @brief Method GetAccessToken, addr 0x3f8a154, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* GetAccessToken();

  /// @brief Method GetBlockedUsers, addr 0x3f8a2a4, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetBlockedUsers();

  /// @brief Method GetLoggedInUser, addr 0x3f5e03c, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* GetLoggedInUser();

  /// @brief Method GetLoggedInUserFriends, addr 0x3f8a3f4, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends();

  /// @brief Method GetLoggedInUserLocale, addr 0x3f8a080, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW GetLoggedInUserLocale();

  /// @brief Method GetNextBlockedUserListPage, addr 0x3f8ad44, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetNextBlockedUserListPage(::Oculus::Platform::Models::BlockedUserList* list);

  /// @brief Method GetNextUserCapabilityListPage, addr 0x3f8b0f4, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* GetNextUserCapabilityListPage(::Oculus::Platform::Models::UserCapabilityList* list);

  /// @brief Method GetNextUserListPage, addr 0x3f8af1c, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetNextUserListPage(::Oculus::Platform::Models::UserList* list);

  /// @brief Method GetOrgScopedID, addr 0x3f8a544, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t userID);

  /// @brief Method GetSdkAccounts, addr 0x3f8a69c, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts();

  /// @brief Method GetUserProof, addr 0x3f8a7ec, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* GetUserProof();

  /// @brief Method LaunchBlockFlow, addr 0x3f8a93c, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* LaunchBlockFlow(uint64_t userID);

  /// @brief Method LaunchFriendRequestFlow, addr 0x3f8aa94, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t userID);

  /// @brief Method LaunchUnblockFlow, addr 0x3f8abec, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* LaunchUnblockFlow(uint64_t userID);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Users();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Users(Users&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Users", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Users(Users const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Users, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Users*, "Oculus.Platform", "Users");
