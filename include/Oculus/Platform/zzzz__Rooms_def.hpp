#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rooms)
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform {
class RoomOptions;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13378))
// CS Name: ::Oculus.Platform::Rooms*
class CORDL_TYPE Rooms : public ::System::Object {
public:
  // Declarations
  /// @brief Method UpdateDataStore addr 0x259a8cc size 0x320 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdateDataStore(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* data);

  /// @brief Method SetRoomInviteNotificationCallback addr 0x259abec size 0x4 virtual false final false
  static inline void SetRoomInviteNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  /// @brief Method CreateAndJoinPrivate addr 0x259ac64 size 0x178 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method CreateAndJoinPrivate2 addr 0x259addc size 0x18c virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers,
                                                                                                        ::Oculus::Platform::RoomOptions* roomOptions);

  /// @brief Method Get addr 0x259af68 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Get(uint64_t roomID);

  /// @brief Method GetCurrent addr 0x259b0c8 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* GetCurrent();

  /// @brief Method GetCurrentForUser addr 0x259b220 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* GetCurrentForUser(uint64_t userID);

  /// @brief Method GetInvitableUsers addr 0x259b380 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers();

  /// @brief Method GetInvitableUsers2 addr 0x259b4d8 size 0x174 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers2(::Oculus::Platform::RoomOptions* roomOptions);

  /// @brief Method GetModeratedRooms addr 0x259b64c size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* GetModeratedRooms();

  /// @brief Method InviteUser addr 0x259b7a4 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* InviteUser(uint64_t roomID, ::StringW inviteToken);

  /// @brief Method Join addr 0x259b914 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Join(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method Join2 addr 0x259ba84 size 0x184 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Join2(uint64_t roomID, ::Oculus::Platform::RoomOptions* roomOptions);

  /// @brief Method KickUser addr 0x259bc08 size 0x178 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds);

  /// @brief Method LaunchInvitableUserFlow addr 0x259bd80 size 0x14c virtual false final false
  static inline ::Oculus::Platform::Request* LaunchInvitableUserFlow(uint64_t roomID);

  /// @brief Method Leave addr 0x259becc size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Leave(uint64_t roomID);

  /// @brief Method SetDescription addr 0x259c02c size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* SetDescription(uint64_t roomID, ::StringW description);

  /// @brief Method UpdateMembershipLockStatus addr 0x259c19c size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdateMembershipLockStatus(uint64_t roomID, ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus);

  /// @brief Method UpdateOwner addr 0x259c30c size 0x15c virtual false final false
  static inline ::Oculus::Platform::Request* UpdateOwner(uint64_t roomID, uint64_t userID);

  /// @brief Method UpdatePrivateRoomJoinPolicy addr 0x259c468 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy);

  /// @brief Method SetRoomInviteAcceptedNotificationCallback addr 0x259abf0 size 0x74 virtual false final false
  static inline void SetRoomInviteAcceptedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  /// @brief Method SetRoomInviteReceivedNotificationCallback addr 0x259c5d8 size 0x74 virtual false final false
  static inline void SetRoomInviteReceivedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification*>* callback);

  /// @brief Method SetUpdateNotificationCallback addr 0x259c64c size 0x74 virtual false final false
  static inline void SetUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>* callback);

  /// @brief Method GetNextRoomListPage addr 0x259c6c0 size 0x1dc virtual false final false
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
