#pragma once
// IWYU pragma private; include "Oculus/Platform/Livestreaming.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Livestreaming)
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Livestreaming;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Livestreaming);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Livestreaming
class CORDL_TYPE Livestreaming : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetStatusUpdateNotificationCallback, addr 0x3f8b1f8, size 0x74, virtual false, abstract: false, final false
  static inline void SetStatusUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LivestreamingStatus*>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Livestreaming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Livestreaming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Livestreaming(Livestreaming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Livestreaming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Livestreaming(Livestreaming const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Livestreaming, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Livestreaming);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Livestreaming*, "Oculus.Platform", "Livestreaming");
