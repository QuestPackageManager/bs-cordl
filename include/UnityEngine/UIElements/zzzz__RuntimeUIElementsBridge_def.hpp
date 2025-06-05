#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RuntimeUIElementsBridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UIElementsBridge_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeUIElementsBridge)
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimeUIElementsBridge;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RuntimeUIElementsBridge);
// Dependencies UnityEngine.UIElements.UIElementsBridge
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RuntimeUIElementsBridge
class CORDL_TYPE RuntimeUIElementsBridge : public ::UnityEngine::UIElements::UIElementsBridge {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RuntimeUIElementsBridge* New_ctor();

  /// @brief Method SetWantsMouseJumping, addr 0x4a9b8f8, size 0x4, virtual true, abstract: false, final false
  inline void SetWantsMouseJumping(int32_t value);

  /// @brief Method .ctor, addr 0x4a9b8fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeUIElementsBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeUIElementsBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeUIElementsBridge(RuntimeUIElementsBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeUIElementsBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeUIElementsBridge(RuntimeUIElementsBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6210 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuntimeUIElementsBridge, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RuntimeUIElementsBridge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimeUIElementsBridge*, "UnityEngine.UIElements", "RuntimeUIElementsBridge");
