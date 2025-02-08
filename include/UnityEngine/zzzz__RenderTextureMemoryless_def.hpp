#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureMemoryless.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTextureMemoryless)
// Forward declare root types
namespace UnityEngine {
struct RenderTextureMemoryless;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTextureMemoryless);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderTextureMemoryless
struct CORDL_TYPE RenderTextureMemoryless {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderTextureMemoryless_Unwrapped
  enum struct __RenderTextureMemoryless_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Color = static_cast<int32_t>(0x1),
    __E_Depth = static_cast<int32_t>(0x2),
    __E_MSAA = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderTextureMemoryless_Unwrapped() const noexcept {
    return static_cast<__RenderTextureMemoryless_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureMemoryless();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTextureMemoryless(int32_t value__) noexcept;

  /// @brief Field Color value: I32(1)
  static ::UnityEngine::RenderTextureMemoryless const Color;

  /// @brief Field Depth value: I32(2)
  static ::UnityEngine::RenderTextureMemoryless const Depth;

  /// @brief Field MSAA value: I32(4)
  static ::UnityEngine::RenderTextureMemoryless const MSAA;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::RenderTextureMemoryless const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderTextureMemoryless, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureMemoryless, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureMemoryless, "UnityEngine", "RenderTextureMemoryless");
