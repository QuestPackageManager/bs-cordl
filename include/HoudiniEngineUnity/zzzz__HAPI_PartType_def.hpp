#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PartType.hpp"
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
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_PartType
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

  /// @brief Field HAPI_PARTTYPE_BOX value: I32(4)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_BOX;

  /// @brief Field HAPI_PARTTYPE_CURVE value: I32(1)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_CURVE;

  /// @brief Field HAPI_PARTTYPE_INSTANCER value: I32(3)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_INSTANCER;

  /// @brief Field HAPI_PARTTYPE_INVALID value: I32(-1)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_INVALID;

  /// @brief Field HAPI_PARTTYPE_MAX value: I32(6)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_MAX;

  /// @brief Field HAPI_PARTTYPE_MESH value: I32(0)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_MESH;

  /// @brief Field HAPI_PARTTYPE_SPHERE value: I32(5)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_SPHERE;

  /// @brief Field HAPI_PARTTYPE_VOLUME value: I32(2)
  static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_VOLUME;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PartType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PartType, "HoudiniEngineUnity", "HAPI_PartType");
