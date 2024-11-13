#pragma once
// IWYU pragma private; include "OVR/OpenVR/ECollisionBoundsStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ECollisionBoundsStyle)
// Forward declare root types
namespace OVR::OpenVR {
struct ECollisionBoundsStyle;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ECollisionBoundsStyle);
// Type: OVR.OpenVR::ECollisionBoundsStyle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::ECollisionBoundsStyle
struct CORDL_TYPE ECollisionBoundsStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ECollisionBoundsStyle_Unwrapped
  enum struct __ECollisionBoundsStyle_Unwrapped : int32_t {
    __E_COLLISION_BOUNDS_STYLE_BEGINNER = static_cast<int32_t>(0x0),
    __E_COLLISION_BOUNDS_STYLE_INTERMEDIATE = static_cast<int32_t>(0x1),
    __E_COLLISION_BOUNDS_STYLE_SQUARES = static_cast<int32_t>(0x2),
    __E_COLLISION_BOUNDS_STYLE_ADVANCED = static_cast<int32_t>(0x3),
    __E_COLLISION_BOUNDS_STYLE_NONE = static_cast<int32_t>(0x4),
    __E_COLLISION_BOUNDS_STYLE_COUNT = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ECollisionBoundsStyle_Unwrapped() const noexcept {
    return static_cast<__ECollisionBoundsStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ECollisionBoundsStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ECollisionBoundsStyle(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field COLLISION_BOUNDS_STYLE_ADVANCED value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_ADVANCED;

  /// @brief Field COLLISION_BOUNDS_STYLE_BEGINNER value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_BEGINNER;

  /// @brief Field COLLISION_BOUNDS_STYLE_COUNT value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_COUNT;

  /// @brief Field COLLISION_BOUNDS_STYLE_INTERMEDIATE value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_INTERMEDIATE;

  /// @brief Field COLLISION_BOUNDS_STYLE_NONE value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_NONE;

  /// @brief Field COLLISION_BOUNDS_STYLE_SQUARES value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::ECollisionBoundsStyle const COLLISION_BOUNDS_STYLE_SQUARES;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8889 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ECollisionBoundsStyle, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::ECollisionBoundsStyle, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ECollisionBoundsStyle, "OVR.OpenVR", "ECollisionBoundsStyle");
