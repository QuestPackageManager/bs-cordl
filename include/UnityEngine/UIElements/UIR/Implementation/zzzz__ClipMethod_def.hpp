#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Implementation/ClipMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipMethod)
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::ClipMethod);
// Dependencies
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.Implementation.ClipMethod
struct CORDL_TYPE ClipMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClipMethod_Unwrapped
  enum struct __ClipMethod_Unwrapped : int32_t {
    __E_Undetermined = static_cast<int32_t>(0x0),
    __E_NotClipped = static_cast<int32_t>(0x1),
    __E_Scissor = static_cast<int32_t>(0x2),
    __E_ShaderDiscard = static_cast<int32_t>(0x3),
    __E_Stencil = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClipMethod_Unwrapped() const noexcept {
    return static_cast<__ClipMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClipMethod(int32_t value__) noexcept;

  /// @brief Field NotClipped value: I32(1)
  static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const NotClipped;

  /// @brief Field Scissor value: I32(2)
  static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Scissor;

  /// @brief Field ShaderDiscard value: I32(3)
  static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const ShaderDiscard;

  /// @brief Field Stencil value: I32(4)
  static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Stencil;

  /// @brief Field Undetermined value: I32(0)
  static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Undetermined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6432 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::ClipMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::ClipMethod, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::ClipMethod, "UnityEngine.UIElements.UIR.Implementation", "ClipMethod");
