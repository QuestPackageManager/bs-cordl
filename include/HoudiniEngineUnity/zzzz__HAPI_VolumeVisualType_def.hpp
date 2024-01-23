#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_VolumeVisualType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeVisualType);
// Type: HoudiniEngineUnity::HAPI_VolumeVisualType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9706))
// CS Name: ::HoudiniEngineUnity::HAPI_VolumeVisualType
struct CORDL_TYPE HAPI_VolumeVisualType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_VolumeVisualType_Unwrapped
  enum struct __HAPI_VolumeVisualType_Unwrapped : int32_t {
    __E_HAPI_VOLUMEVISTYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_VOLUMEVISTYPE_SMOKE = static_cast<int32_t>(0x0),
    __E_HAPI_VOLUMEVISTYPE_RAINBOW = static_cast<int32_t>(0x1),
    __E_HAPI_VOLUMEVISTYPE_ISO = static_cast<int32_t>(0x2),
    __E_HAPI_VOLUMEVISTYPE_INVISIBLE = static_cast<int32_t>(0x3),
    __E_HAPI_VOLUMEVISTYPE_HEIGHTFIELD = static_cast<int32_t>(0x4),
    __E_HAPI_VOLUMEVISTYPE_MAX = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_VolumeVisualType_Unwrapped() const noexcept {
    return static_cast<__HAPI_VolumeVisualType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_VolumeVisualType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_VolumeVisualType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_VOLUMEVISTYPE_INVALID value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_INVALID;

  /// @brief Field HAPI_VOLUMEVISTYPE_SMOKE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_SMOKE;

  /// @brief Field HAPI_VOLUMEVISTYPE_RAINBOW value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_RAINBOW;

  /// @brief Field HAPI_VOLUMEVISTYPE_ISO value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_ISO;

  /// @brief Field HAPI_VOLUMEVISTYPE_INVISIBLE value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_INVISIBLE;

  /// @brief Field HAPI_VOLUMEVISTYPE_HEIGHTFIELD value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_HEIGHTFIELD;

  /// @brief Field HAPI_VOLUMEVISTYPE_MAX value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_MAX;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeVisualType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeVisualType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeVisualType, "HoudiniEngineUnity", "HAPI_VolumeVisualType");
