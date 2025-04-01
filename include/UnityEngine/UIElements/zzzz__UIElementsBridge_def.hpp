#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsBridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIElementsBridge)
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsBridge;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsBridge);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsBridge
class CORDL_TYPE UIElementsBridge : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UIElementsBridge* New_ctor();

  /// @brief Method SetWantsMouseJumping, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetWantsMouseJumping(int32_t value);

  /// @brief Method .ctor, addr 0x4a95908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsBridge(UIElementsBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsBridge(UIElementsBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsBridge, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsBridge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsBridge*, "UnityEngine.UIElements", "UIElementsBridge");
