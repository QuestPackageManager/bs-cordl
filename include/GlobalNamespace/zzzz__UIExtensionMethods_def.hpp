#pragma once
// IWYU pragma private; include "GlobalNamespace/UIExtensionMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UIExtensionMethods)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class UIExtensionMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIExtensionMethods);
// Type: ::UIExtensionMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UIExtensionMethods*
class CORDL_TYPE UIExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopySizeAndPositionFrom, addr 0x396f8d8, size 0xcc, virtual false, abstract: false, final false
  static inline void CopySizeAndPositionFrom(::UnityEngine::RectTransform* target, ::UnityEngine::RectTransform* source);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIExtensionMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIExtensionMethods(UIExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIExtensionMethods(UIExtensionMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIExtensionMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIExtensionMethods*, "", "UIExtensionMethods");
