#pragma once
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
// Type: UnityEngine::CursorMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10059))
// CS Name: ::UnityEngine::CursorMode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CursorMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CursorMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::UnityEngine::CursorMode const Auto;

  /// @brief Field ForceSoftware value: static_cast<int32_t>(0x1)
  static ::UnityEngine::CursorMode const ForceSoftware;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CursorMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CursorMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CursorMode, "UnityEngine", "CursorMode");
