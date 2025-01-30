#pragma once
// IWYU pragma private; include "UnityEngine/Space.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Space)
// Forward declare root types
namespace UnityEngine {
struct Space;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Space);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Space
struct CORDL_TYPE Space {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Space_Unwrapped
  enum struct __Space_Unwrapped : int32_t {
    __E_World = static_cast<int32_t>(0x0),
    __E_Self = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Space_Unwrapped() const noexcept {
    return static_cast<__Space_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Space();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Space(int32_t value__) noexcept;

  /// @brief Field Self value: I32(1)
  static ::UnityEngine::Space const Self;

  /// @brief Field World value: I32(0)
  static ::UnityEngine::Space const World;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Space, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Space, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Space, "UnityEngine", "Space");
