#pragma once
// IWYU pragma private; include "Oculus/Platform/PushNotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PushNotification)
namespace Oculus::Platform::Models {
class PushNotificationResult;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class PushNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::PushNotification);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PushNotification
class CORDL_TYPE PushNotification : public ::System::Object {
public:
  // Declarations
  /// @brief Method Register, addr 0x5c3c55c, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>* Register();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PushNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PushNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PushNotification(PushNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PushNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PushNotification(PushNotification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PushNotification, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::PushNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PushNotification*, "Oculus.Platform", "PushNotification");
