#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalWrapMode)
// Forward declare root types
namespace UnityEngine {
struct HorizontalWrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HorizontalWrapMode);
// Type: UnityEngine::HorizontalWrapMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15902))
// CS Name: ::UnityEngine::HorizontalWrapMode
struct CORDL_TYPE HorizontalWrapMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HorizontalWrapMode_Unwrapped
  enum struct __HorizontalWrapMode_Unwrapped : int32_t {
    __E_Wrap = static_cast<int32_t>(0x0),
    __E_Overflow = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HorizontalWrapMode_Unwrapped() const noexcept {
    return static_cast<__HorizontalWrapMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HorizontalWrapMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalWrapMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Wrap value: static_cast<int32_t>(0x0)
  static ::UnityEngine::HorizontalWrapMode const Wrap;

  /// @brief Field Overflow value: static_cast<int32_t>(0x1)
  static ::UnityEngine::HorizontalWrapMode const Overflow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HorizontalWrapMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HorizontalWrapMode, "UnityEngine", "HorizontalWrapMode");
