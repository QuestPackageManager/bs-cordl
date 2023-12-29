#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Notifications)
namespace Oculus::Platform::Models {
class RoomInviteNotificationList;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Notifications;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Notifications);
// Type: Oculus.Platform::Notifications
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13401))
// CS Name: ::Oculus.Platform::Notifications*
class CORDL_TYPE Notifications : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRoomInviteNotifications addr 0x25aae74 size 0x15c virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList*>* GetRoomInviteNotifications();

  /// @brief Method MarkAsRead addr 0x25aafd0 size 0x150 virtual false final false
  static inline ::Oculus::Platform::Request* MarkAsRead(uint64_t notificationID);

  /// @brief Method GetNextRoomInviteNotificationListPage addr 0x25ab120 size 0x1e0 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList*>*
  GetNextRoomInviteNotificationListPage(::Oculus::Platform::Models::RoomInviteNotificationList* list);

  // Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Notifications(Notifications&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Notifications(Notifications const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Notifications();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Notifications, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Notifications);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
