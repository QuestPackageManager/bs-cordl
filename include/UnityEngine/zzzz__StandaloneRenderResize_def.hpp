#pragma once
// IWYU pragma private; include "UnityEngine/StandaloneRenderResize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandaloneRenderResize)
// Forward declare root types
namespace UnityEngine {
struct StandaloneRenderResize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::StandaloneRenderResize);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.StandaloneRenderResize
struct CORDL_TYPE StandaloneRenderResize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StandaloneRenderResize_Unwrapped
  enum struct __StandaloneRenderResize_Unwrapped : int32_t {
    __E_Enabled = static_cast<int32_t>(0x0),
    __E_Disabled = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StandaloneRenderResize_Unwrapped() const noexcept {
    return static_cast<__StandaloneRenderResize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneRenderResize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandaloneRenderResize(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(1)
  static ::UnityEngine::StandaloneRenderResize const Disabled;

  /// @brief Field Enabled value: I32(0)
  static ::UnityEngine::StandaloneRenderResize const Enabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::StandaloneRenderResize, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::StandaloneRenderResize, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StandaloneRenderResize, "UnityEngine", "StandaloneRenderResize");
