#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandleAxis)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct HandleAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::HandleAxis);
// Type: UnityEngine.ProBuilder::HandleAxis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12159))
// CS Name: ::UnityEngine.ProBuilder::HandleAxis
struct CORDL_TYPE HandleAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HandleAxis_Unwrapped
  enum struct __HandleAxis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x1),
    __E_Y = static_cast<int32_t>(0x2),
    __E_Z = static_cast<int32_t>(0x4),
    __E_Free = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HandleAxis_Unwrapped() const noexcept {
    return static_cast<__HandleAxis_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HandleAxis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleAxis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field X value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::HandleAxis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::HandleAxis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ProBuilder::HandleAxis const Z;

  /// @brief Field Free value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ProBuilder::HandleAxis const Free;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HandleAxis, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HandleAxis, "UnityEngine.ProBuilder", "HandleAxis");
