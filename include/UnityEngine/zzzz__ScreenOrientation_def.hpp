#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenOrientation)
// Forward declare root types
namespace UnityEngine {
struct ScreenOrientation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ScreenOrientation);
// Type: UnityEngine::ScreenOrientation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10040))
// CS Name: ::UnityEngine::ScreenOrientation
struct CORDL_TYPE ScreenOrientation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenOrientation_Unwrapped
  enum struct __ScreenOrientation_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Landscape = static_cast<int32_t>(0x3),
    __E_Portrait = static_cast<int32_t>(0x1),
    __E_PortraitUpsideDown = static_cast<int32_t>(0x2),
    __E_LandscapeLeft = static_cast<int32_t>(0x3),
    __E_LandscapeRight = static_cast<int32_t>(0x4),
    __E_AutoRotation = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenOrientation_Unwrapped() const noexcept {
    return static_cast<__ScreenOrientation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenOrientation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenOrientation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ScreenOrientation const Unknown;

  /// @brief Field Landscape value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ScreenOrientation const Landscape;

  /// @brief Field Portrait value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ScreenOrientation const Portrait;

  /// @brief Field PortraitUpsideDown value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ScreenOrientation const PortraitUpsideDown;

  /// @brief Field LandscapeLeft value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ScreenOrientation const LandscapeLeft;

  /// @brief Field LandscapeRight value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ScreenOrientation const LandscapeRight;

  /// @brief Field AutoRotation value: static_cast<int32_t>(0x5)
  static ::UnityEngine::ScreenOrientation const AutoRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScreenOrientation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ScreenOrientation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenOrientation, "UnityEngine", "ScreenOrientation");
