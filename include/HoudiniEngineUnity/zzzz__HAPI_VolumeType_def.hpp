#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_VolumeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_VolumeType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_VolumeType
struct CORDL_TYPE HAPI_VolumeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_VolumeType_Unwrapped
  enum struct __HAPI_VolumeType_Unwrapped : int32_t {
    __E_HAPI_VOLUMETYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_VOLUMETYPE_HOUDINI = static_cast<int32_t>(0x0),
    __E_HAPI_VOLUMETYPE_VDB = static_cast<int32_t>(0x1),
    __E_HAPI_VOLUMETYPE_MAX = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_VolumeType_Unwrapped() const noexcept {
    return static_cast<__HAPI_VolumeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_VolumeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_VolumeType(int32_t value__) noexcept;

  /// @brief Field HAPI_VOLUMETYPE_HOUDINI value: I32(0)
  static ::HoudiniEngineUnity::HAPI_VolumeType const HAPI_VOLUMETYPE_HOUDINI;

  /// @brief Field HAPI_VOLUMETYPE_INVALID value: I32(-1)
  static ::HoudiniEngineUnity::HAPI_VolumeType const HAPI_VOLUMETYPE_INVALID;

  /// @brief Field HAPI_VOLUMETYPE_MAX value: I32(2)
  static ::HoudiniEngineUnity::HAPI_VolumeType const HAPI_VOLUMETYPE_MAX;

  /// @brief Field HAPI_VOLUMETYPE_VDB value: I32(1)
  static ::HoudiniEngineUnity::HAPI_VolumeType const HAPI_VOLUMETYPE_VDB;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeType, "HoudiniEngineUnity", "HAPI_VolumeType");
