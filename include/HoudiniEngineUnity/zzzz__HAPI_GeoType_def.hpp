#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_GeoType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_GeoType);
// Type: HoudiniEngineUnity::HAPI_GeoType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9501))
// CS Name: ::HoudiniEngineUnity::HAPI_GeoType
struct CORDL_TYPE HAPI_GeoType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_GeoType_Unwrapped
  enum struct __HAPI_GeoType_Unwrapped : int32_t {
    __E_HAPI_GEOTYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_GEOTYPE_DEFAULT = static_cast<int32_t>(0x0),
    __E_HAPI_GEOTYPE_INTERMEDIATE = static_cast<int32_t>(0x1),
    __E_HAPI_GEOTYPE_INPUT = static_cast<int32_t>(0x2),
    __E_HAPI_GEOTYPE_CURVE = static_cast<int32_t>(0x3),
    __E_HAPI_GEOTYPE_MAX = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_GeoType_Unwrapped() const noexcept {
    return static_cast<__HAPI_GeoType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_GeoType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_GeoType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_GEOTYPE_INVALID value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_INVALID;

  /// @brief Field HAPI_GEOTYPE_DEFAULT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_DEFAULT;

  /// @brief Field HAPI_GEOTYPE_INTERMEDIATE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_INTERMEDIATE;

  /// @brief Field HAPI_GEOTYPE_INPUT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_INPUT;

  /// @brief Field HAPI_GEOTYPE_CURVE value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_CURVE;

  /// @brief Field HAPI_GEOTYPE_MAX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_MAX;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_GeoType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_GeoType, "HoudiniEngineUnity", "HAPI_GeoType");
