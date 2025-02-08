#pragma once
// IWYU pragma private; include "Oculus/Platform/Notifications.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Notifications)
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Notifications;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Notifications);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Notifications
class CORDL_TYPE Notifications : public ::System::Object {
public:
  // Declarations
  /// @brief Method MarkAsRead, addr 0x3f8fd78, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* MarkAsRead(uint64_t notificationID);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Notifications();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Notifications(Notifications&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Notifications(Notifications const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Notifications, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Notifications);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
