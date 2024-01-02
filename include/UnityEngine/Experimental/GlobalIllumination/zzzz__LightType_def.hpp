#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightType)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LightType);
// Type: UnityEngine.Experimental.GlobalIllumination::LightType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10386))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LightType
struct CORDL_TYPE LightType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __LightType_Unwrapped
  enum struct __LightType_Unwrapped : uint8_t {
    __E_Directional = static_cast<uint8_t>(0x0u),
    __E_Point = static_cast<uint8_t>(0x1u),
    __E_Spot = static_cast<uint8_t>(0x2u),
    __E_Rectangle = static_cast<uint8_t>(0x3u),
    __E_Disc = static_cast<uint8_t>(0x4u),
    __E_SpotPyramidShape = static_cast<uint8_t>(0x5u),
    __E_SpotBoxShape = static_cast<uint8_t>(0x6u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightType_Unwrapped() const noexcept {
    return static_cast<__LightType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr LightType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Directional value: static_cast<uint8_t>(0x0u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Directional;

  /// @brief Field Point value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Point;

  /// @brief Field Spot value: static_cast<uint8_t>(0x2u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Spot;

  /// @brief Field Rectangle value: static_cast<uint8_t>(0x3u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Rectangle;

  /// @brief Field Disc value: static_cast<uint8_t>(0x4u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Disc;

  /// @brief Field SpotPyramidShape value: static_cast<uint8_t>(0x5u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const SpotPyramidShape;

  /// @brief Field SpotBoxShape value: static_cast<uint8_t>(0x6u)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const SpotBoxShape;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightType, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightType, "UnityEngine.Experimental.GlobalIllumination", "LightType");
