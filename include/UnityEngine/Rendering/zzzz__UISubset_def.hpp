#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UISubset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UISubset)
// Forward declare root types
namespace UnityEngine::Rendering {
struct UISubset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UISubset);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.UISubset
struct CORDL_TYPE UISubset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UISubset_Unwrapped
  enum struct __UISubset_Unwrapped : int32_t {
    __E_UIToolkit_UGUI = static_cast<int32_t>(0x1),
    __E_LowLevel = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UISubset_Unwrapped() const noexcept {
    return static_cast<__UISubset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UISubset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UISubset(int32_t value__) noexcept;

  /// @brief Field All value: I32(-1)
  static ::UnityEngine::Rendering::UISubset const All;

  /// @brief Field LowLevel value: I32(2)
  static ::UnityEngine::Rendering::UISubset const LowLevel;

  /// @brief Field UIToolkit_UGUI value: I32(1)
  static ::UnityEngine::Rendering::UISubset const UIToolkit_UGUI;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UISubset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UISubset, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UISubset, "UnityEngine.Rendering", "UISubset");
