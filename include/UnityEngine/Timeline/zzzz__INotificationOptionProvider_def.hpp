#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/INotificationOptionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotificationOptionProvider)
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class INotificationOptionProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::INotificationOptionProvider);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.INotificationOptionProvider
class CORDL_TYPE INotificationOptionProvider {
public:
  // Declarations
  __declspec(property(get = get_flags)) ::UnityEngine::Timeline::NotificationFlags flags;

  /// @brief Method get_flags, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Timeline::NotificationFlags get_flags();

  // Ctor Parameters [CppParam { name: "", ty: "INotificationOptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotificationOptionProvider(INotificationOptionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::INotificationOptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::INotificationOptionProvider*, "UnityEngine.Timeline", "INotificationOptionProvider");
