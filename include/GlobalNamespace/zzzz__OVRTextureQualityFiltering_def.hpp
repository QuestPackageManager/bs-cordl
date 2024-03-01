#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTextureQualityFiltering)
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTextureQualityFiltering);
// Type: ::OVRTextureQualityFiltering
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTextureQualityFiltering
struct CORDL_TYPE OVRTextureQualityFiltering {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRTextureQualityFiltering_Unwrapped
  enum struct __OVRTextureQualityFiltering_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Bilinear = static_cast<int32_t>(0x0),
    __E_Trilinear = static_cast<int32_t>(0x1),
    __E_Aniso2x = static_cast<int32_t>(0x2),
    __E_Aniso4x = static_cast<int32_t>(0x3),
    __E_Aniso8x = static_cast<int32_t>(0x4),
    __E_Aniso16x = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRTextureQualityFiltering_Unwrapped() const noexcept {
    return static_cast<__OVRTextureQualityFiltering_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTextureQualityFiltering();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRTextureQualityFiltering(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Aniso16x value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::OVRTextureQualityFiltering const Aniso16x;

  /// @brief Field Aniso2x value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::OVRTextureQualityFiltering const Aniso2x;

  /// @brief Field Aniso4x value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::OVRTextureQualityFiltering const Aniso4x;

  /// @brief Field Aniso8x value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::OVRTextureQualityFiltering const Aniso8x;

  /// @brief Field Bilinear value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::OVRTextureQualityFiltering const Bilinear;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::OVRTextureQualityFiltering const None;

  /// @brief Field Trilinear value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::OVRTextureQualityFiltering const Trilinear;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTextureQualityFiltering, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureQualityFiltering, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTextureQualityFiltering, "", "OVRTextureQualityFiltering");
