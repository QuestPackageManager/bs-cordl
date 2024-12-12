#pragma once
// IWYU pragma private; include "UnityEngine/CursorMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CursorMode)
// Forward declare root types
namespace UnityEngine {
struct CursorMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CursorMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CursorMode
struct CORDL_TYPE CursorMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CursorMode_Unwrapped
  enum struct __CursorMode_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_ForceSoftware = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CursorMode_Unwrapped() const noexcept {
    return static_cast<__CursorMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CursorMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CursorMode(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::CursorMode const Auto;

  /// @brief Field ForceSoftware value: I32(1)
  static ::UnityEngine::CursorMode const ForceSoftware;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10800 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CursorMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CursorMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CursorMode, "UnityEngine", "CursorMode");
