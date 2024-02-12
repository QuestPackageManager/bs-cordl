#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rooms)
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
namespace Oculus::Platform::Models {
class RoomList;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace Oculus::Platform {
class RoomOptions;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class Rooms;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Rooms);
// Type: Oculus.Platform::Rooms
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13271))
// CS Name: ::Oculus.Platform::Rooms*
class CORDL_TYPE Rooms : public ::System::Object {
public:
  // Declarations
  /// @brief Method UpdateDataStore, addr 0x2720154, size 0x320, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdateDataStore(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* data);

  /// @brief Method SetRoomInviteNotificationCallback, addr 0x2720474, size 0x4, virtual false, abstract: false, final false
  static inline void SetRoomInviteNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  /// @brief Method CreateAndJoinPrivate, addr 0x27204ec, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method CreateAndJoinPrivate2, addr 0x2720664, size 0x18c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers,
                                                                                                        ::Oculus::Platform::RoomOptions* roomOptions);

  /// @brief Method Get, addr 0x27207f0, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Get(uint64_t roomID);

  /// @brief Method GetCurrent, addr 0x2720950, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* GetCurrent();

  /// @brief Method GetCurrentForUser, addr 0x2720aa8, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* GetCurrentForUser(uint64_t userID);

  /// @brief Method GetInvitableUsers, addr 0x2720c08, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers();

  /// @brief Method GetInvitableUsers2, addr 0x2720d60, size 0x174, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers2(::Oculus::Platform::RoomOptions* roomOptions);

  /// @brief Method GetModeratedRooms, addr 0x2720ed4, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* GetModeratedRooms();

  /// @brief Method InviteUser, addr 0x272102c, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* InviteUser(uint64_t roomID, ::StringW inviteToken);

  /// @brief Method Join, addr 0x272119c, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Join(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method Join2, addr 0x272130c, size 0x184, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Join2(uint64_t roomID, ::Oculus::Platform::RoomOptions* roomOptions);

  /// @brief Method KickUser, addr 0x2721490, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds);

  /// @brief Method LaunchInvitableUserFlow, addr 0x2721608, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* LaunchInvitableUserFlow(uint64_t roomID);

  /// @brief Method Leave, addr 0x2721754, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Leave(uint64_t roomID);

  /// @brief Method SetDescription, addr 0x27218b4, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* SetDescription(uint64_t roomID, ::StringW description);

  /// @brief Method UpdateMembershipLockStatus, addr 0x2721a24, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdateMembershipLockStatus(uint64_t roomID, ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus);

  /// @brief Method UpdateOwner, addr 0x2721b94, size 0x15c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* UpdateOwner(uint64_t roomID, uint64_t userID);

  /// @brief Method UpdatePrivateRoomJoinPolicy, addr 0x2721cf0, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy);

  /// @brief Method SetRoomInviteAcceptedNotificationCallback, addr 0x2720478, size 0x74, virtual false, abstract: false, final false
  static inline void SetRoomInviteAcceptedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  /// @brief Method SetRoomInviteReceivedNotificationCallback, addr 0x2721e60, size 0x74, virtual false, abstract: false, final false
  static inline void SetRoomInviteReceivedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification*>* callback);

  /// @brief Method SetUpdateNotificationCallback, addr 0x2721ed4, size 0x74, virtual false, abstract: false, final false
  static inline void SetUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>* callback);

  /// @brief Method GetNextRoomListPage, addr 0x2721f48, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* GetNextRoomListPage(::Oculus::Platform::Models::RoomList* list);

  // Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rooms(Rooms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rooms(Rooms const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rooms();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Rooms, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Rooms);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Rooms*, "Oculus.Platform", "Rooms");
