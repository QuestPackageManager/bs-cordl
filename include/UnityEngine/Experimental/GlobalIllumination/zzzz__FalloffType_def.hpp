#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FalloffType)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::FalloffType);
// Type: UnityEngine.Experimental.GlobalIllumination::FalloffType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::FalloffType
struct CORDL_TYPE FalloffType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __FalloffType_Unwrapped
  enum struct __FalloffType_Unwrapped : uint8_t {
    __E_InverseSquared = static_cast<uint8_t>(0x0u),
    __E_InverseSquaredNoRangeAttenuation = static_cast<uint8_t>(0x1u),
    __E_Linear = static_cast<uint8_t>(0x2u),
    __E_Legacy = static_cast<uint8_t>(0x3u),
    __E_Undefined = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FalloffType_Unwrapped() const noexcept {
    return static_cast<__FalloffType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FalloffType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr FalloffType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field InverseSquared value: static_cast<uint8_t>(0x0u)
  static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const InverseSquared;

  /// @brief Field InverseSquaredNoRangeAttenuation value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const InverseSquaredNoRangeAttenuation;

  /// @brief Field Legacy value: static_cast<uint8_t>(0x3u)
  static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const Legacy;

  /// @brief Field Linear value: static_cast<uint8_t>(0x2u)
  static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const Linear;

  /// @brief Field Undefined value: static_cast<uint8_t>(0x4u)
  static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const Undefined;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::FalloffType, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::FalloffType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::FalloffType, "UnityEngine.Experimental.GlobalIllumination", "FalloffType");
