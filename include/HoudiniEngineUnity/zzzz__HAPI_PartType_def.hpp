#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PartType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PartType);
// Type: HoudiniEngineUnity::HAPI_PartType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_PartType
struct CORDL_TYPE HAPI_PartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_PartType_Unwrapped
  enum struct __HAPI_PartType_Unwrapped : int32_t {
    __E_HAPI_PARTTYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_PARTTYPE_MESH = static_cast<int32_t>(0x0),
    __E_HAPI_PARTTYPE_CURVE = static_cast<int32_t>(0x1),
    __E_HAPI_PARTTYPE_VOLUME = static_cast<int32_t>(0x2),
    __E_HAPI_PARTTYPE_INSTANCER = static_cast<int32_t>(0x3),
    __E_HAPI_PARTTYPE_BOX = static_cast<int32_t>(0x4),
    __E_HAPI_PARTTYPE_SPHERE = static_cast<int32_t>(0x5),
    __E_HAPI_PARTTYPE_MAX = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_PartType_Unwrapped() const noexcept {
    return static_cast<__HAPI_PartType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PartType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PartType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_PARTTYPE_BOX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_BOX;

  /// @brief Field HAPI_PARTTYPE_CURVE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_CURVE;

  /// @brief Field HAPI_PARTTYPE_INSTANCER value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_INSTANCER;

  /// @brief Field HAPI_PARTTYPE_INVALID value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_INVALID;

  /// @brief Field HAPI_PARTTYPE_MAX value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_MAX;

  /// @brief Field HAPI_PARTTYPE_MESH value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_MESH;

  /// @brief Field HAPI_PARTTYPE_SPHERE value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_SPHERE;

  /// @brief Field HAPI_PARTTYPE_VOLUME value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_VOLUME;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PartType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PartType, "HoudiniEngineUnity", "HAPI_PartType");
