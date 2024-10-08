#pragma once
// IWYU pragma private; include "UnityEngine/LightType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightType)
// Forward declare root types
namespace UnityEngine {
struct LightType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightType);
// Type: UnityEngine::LightType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::LightType
struct CORDL_TYPE LightType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightType_Unwrapped
  enum struct __LightType_Unwrapped : int32_t {
    __E_Spot = static_cast<int32_t>(0x0),
    __E_Directional = static_cast<int32_t>(0x1),
    __E_Point = static_cast<int32_t>(0x2),
    __E_Area = static_cast<int32_t>(0x3),
    __E_Rectangle = static_cast<int32_t>(0x3),
    __E_Disc = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightType_Unwrapped() const noexcept {
    return static_cast<__LightType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Area value: static_cast<int32_t>(0x3)
  static ::UnityEngine::LightType const Area;

  /// @brief Field Directional value: static_cast<int32_t>(0x1)
  static ::UnityEngine::LightType const Directional;

  /// @brief Field Disc value: static_cast<int32_t>(0x4)
  static ::UnityEngine::LightType const Disc;

  /// @brief Field Point value: static_cast<int32_t>(0x2)
  static ::UnityEngine::LightType const Point;

  /// @brief Field Rectangle value: static_cast<int32_t>(0x3)
  static ::UnityEngine::LightType const Rectangle;

  /// @brief Field Spot value: static_cast<int32_t>(0x0)
  static ::UnityEngine::LightType const Spot;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::LightType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightType, "UnityEngine", "LightType");
