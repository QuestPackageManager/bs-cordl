#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FoveatedRenderingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FoveatedRenderingMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FoveatedRenderingMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FoveatedRenderingMode
struct CORDL_TYPE FoveatedRenderingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FoveatedRenderingMode_Unwrapped
  enum struct __FoveatedRenderingMode_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_Enabled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FoveatedRenderingMode_Unwrapped() const noexcept {
    return static_cast<__FoveatedRenderingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FoveatedRenderingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FoveatedRenderingMode(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(0)
  static ::UnityEngine::Rendering::FoveatedRenderingMode const Disabled;

  /// @brief Field Enabled value: I32(1)
  static ::UnityEngine::Rendering::FoveatedRenderingMode const Enabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10728 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FoveatedRenderingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FoveatedRenderingMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FoveatedRenderingMode, "UnityEngine.Rendering", "FoveatedRenderingMode");
