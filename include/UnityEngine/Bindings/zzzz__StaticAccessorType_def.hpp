#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticAccessorType)
// Forward declare root types
namespace UnityEngine::Bindings {
struct StaticAccessorType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::StaticAccessorType);
// Type: UnityEngine.Bindings::StaticAccessorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: ::UnityEngine.Bindings::StaticAccessorType
struct CORDL_TYPE StaticAccessorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StaticAccessorType_Unwrapped
  enum struct __StaticAccessorType_Unwrapped : int32_t {
    __E_Dot = static_cast<int32_t>(0x0),
    __E_Arrow = static_cast<int32_t>(0x1),
    __E_DoubleColon = static_cast<int32_t>(0x2),
    __E_ArrowWithDefaultReturnIfNull = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StaticAccessorType_Unwrapped() const noexcept {
    return static_cast<__StaticAccessorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticAccessorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StaticAccessorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Arrow value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Bindings::StaticAccessorType const Arrow;

  /// @brief Field ArrowWithDefaultReturnIfNull value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Bindings::StaticAccessorType const ArrowWithDefaultReturnIfNull;

  /// @brief Field Dot value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Bindings::StaticAccessorType const Dot;

  /// @brief Field DoubleColon value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Bindings::StaticAccessorType const DoubleColon;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::StaticAccessorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::StaticAccessorType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StaticAccessorType, "UnityEngine.Bindings", "StaticAccessorType");
