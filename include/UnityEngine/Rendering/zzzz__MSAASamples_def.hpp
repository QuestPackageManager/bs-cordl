#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MSAASamples.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MSAASamples)
// Forward declare root types
namespace UnityEngine::Rendering {
struct MSAASamples;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::MSAASamples);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.MSAASamples
struct CORDL_TYPE MSAASamples {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MSAASamples_Unwrapped
  enum struct __MSAASamples_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x1),
    __E_MSAA2x = static_cast<int32_t>(0x2),
    __E_MSAA4x = static_cast<int32_t>(0x4),
    __E_MSAA8x = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MSAASamples_Unwrapped() const noexcept {
    return static_cast<__MSAASamples_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MSAASamples();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MSAASamples(int32_t value__) noexcept;

  /// @brief Field MSAA2x value: I32(2)
  static ::UnityEngine::Rendering::MSAASamples const MSAA2x;

  /// @brief Field MSAA4x value: I32(4)
  static ::UnityEngine::Rendering::MSAASamples const MSAA4x;

  /// @brief Field MSAA8x value: I32(8)
  static ::UnityEngine::Rendering::MSAASamples const MSAA8x;

  /// @brief Field None value: I32(1)
  static ::UnityEngine::Rendering::MSAASamples const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12211 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MSAASamples, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MSAASamples, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MSAASamples, "UnityEngine.Rendering", "MSAASamples");
