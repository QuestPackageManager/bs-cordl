#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightType.hpp"
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
// Dependencies
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr LightType(uint8_t value__) noexcept;

  /// @brief Field Directional value: U8(0)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Directional;

  /// @brief Field Disc value: U8(4)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Disc;

  /// @brief Field Point value: U8(1)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Point;

  /// @brief Field Rectangle value: U8(3)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Rectangle;

  /// @brief Field Spot value: U8(2)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const Spot;

  /// @brief Field SpotBoxShape value: U8(6)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const SpotBoxShape;

  /// @brief Field SpotPyramidShape value: U8(5)
  static ::UnityEngine::Experimental::GlobalIllumination::LightType const SpotPyramidShape;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11294 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightType, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightType, "UnityEngine.Experimental.GlobalIllumination", "LightType");
