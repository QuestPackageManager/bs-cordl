#pragma once
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
// Type: UnityEngine.Timeline::INotificationOptionProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13840))
// CS Name: ::UnityEngine.Timeline::INotificationOptionProvider*
class CORDL_TYPE INotificationOptionProvider {
public:
  // Declarations
  __declspec(property(get = get_flags))::UnityEngine::Timeline::NotificationFlags flags;

  /// @brief Method get_flags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Timeline::NotificationFlags get_flags();

  // Ctor Parameters [CppParam { name: "", ty: "INotificationOptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotificationOptionProvider(INotificationOptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotificationOptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotificationOptionProvider(INotificationOptionProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::INotificationOptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::INotificationOptionProvider*, "UnityEngine.Timeline", "INotificationOptionProvider");
