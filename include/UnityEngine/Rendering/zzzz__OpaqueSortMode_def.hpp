#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OpaqueSortMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpaqueSortMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct OpaqueSortMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OpaqueSortMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OpaqueSortMode
struct CORDL_TYPE OpaqueSortMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpaqueSortMode_Unwrapped
  enum struct __OpaqueSortMode_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_FrontToBack = static_cast<int32_t>(0x1),
    __E_NoDistanceSort = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpaqueSortMode_Unwrapped() const noexcept {
    return static_cast<__OpaqueSortMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpaqueSortMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpaqueSortMode(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::OpaqueSortMode const Default;

  /// @brief Field FrontToBack value: I32(1)
  static ::UnityEngine::Rendering::OpaqueSortMode const FrontToBack;

  /// @brief Field NoDistanceSort value: I32(2)
  static ::UnityEngine::Rendering::OpaqueSortMode const NoDistanceSort;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11182 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OpaqueSortMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OpaqueSortMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OpaqueSortMode, "UnityEngine.Rendering", "OpaqueSortMode");
