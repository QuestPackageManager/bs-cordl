#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ImagePacking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImagePacking)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImagePacking;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImagePacking);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ImagePacking
struct CORDL_TYPE HAPI_ImagePacking {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_ImagePacking_Unwrapped
  enum struct __HAPI_ImagePacking_Unwrapped : int32_t {
    __E_HAPI_IMAGE_PACKING_UNKNOWN = static_cast<int32_t>(0xffffffff),
    __E_HAPI_IMAGE_PACKING_SINGLE = static_cast<int32_t>(0x0),
    __E_HAPI_IMAGE_PACKING_DUAL = static_cast<int32_t>(0x1),
    __E_HAPI_IMAGE_PACKING_RGB = static_cast<int32_t>(0x2),
    __E_HAPI_IMAGE_PACKING_BGR = static_cast<int32_t>(0x3),
    __E_HAPI_IMAGE_PACKING_RGBA = static_cast<int32_t>(0x4),
    __E_HAPI_IMAGE_PACKING_ABGR = static_cast<int32_t>(0x5),
    __E_HAPI_IMAGE_PACKING_MAX = static_cast<int32_t>(0x6),
    __E_HAPI_IMAGE_PACKING_DEFAULT3 = static_cast<int32_t>(0x2),
    __E_HAPI_IMAGE_PACKING_DEFAULT4 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_ImagePacking_Unwrapped() const noexcept {
    return static_cast<__HAPI_ImagePacking_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ImagePacking();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ImagePacking(int32_t value__) noexcept;

  /// @brief Field HAPI_IMAGE_PACKING_ABGR value: I32(5)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_ABGR;

  /// @brief Field HAPI_IMAGE_PACKING_BGR value: I32(3)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_BGR;

  /// @brief Field HAPI_IMAGE_PACKING_DEFAULT3 value: I32(2)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_DEFAULT3;

  /// @brief Field HAPI_IMAGE_PACKING_DEFAULT4 value: I32(4)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_DEFAULT4;

  /// @brief Field HAPI_IMAGE_PACKING_DUAL value: I32(1)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_DUAL;

  /// @brief Field HAPI_IMAGE_PACKING_MAX value: I32(6)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_MAX;

  /// @brief Field HAPI_IMAGE_PACKING_RGB value: I32(2)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_RGB;

  /// @brief Field HAPI_IMAGE_PACKING_RGBA value: I32(4)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_RGBA;

  /// @brief Field HAPI_IMAGE_PACKING_SINGLE value: I32(0)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_SINGLE;

  /// @brief Field HAPI_IMAGE_PACKING_UNKNOWN value: I32(-1)
  static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_UNKNOWN;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImagePacking, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImagePacking, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImagePacking, "HoudiniEngineUnity", "HAPI_ImagePacking");
