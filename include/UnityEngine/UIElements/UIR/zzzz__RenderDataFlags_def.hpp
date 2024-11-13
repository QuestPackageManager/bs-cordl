#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderDataFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderDataFlags)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderDataFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderDataFlags);
// Type: UnityEngine.UIElements.UIR::RenderDataFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::RenderDataFlags
struct CORDL_TYPE RenderDataFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderDataFlags_Unwrapped
  enum struct __RenderDataFlags_Unwrapped : int32_t {
    __E_IsIgnoringDynamicColorHint = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderDataFlags_Unwrapped() const noexcept {
    return static_cast<__RenderDataFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderDataFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderDataFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IsIgnoringDynamicColorHint value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::RenderDataFlags const IsIgnoringDynamicColorHint;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6357 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderDataFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderDataFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderDataFlags, "UnityEngine.UIElements.UIR", "RenderDataFlags");
