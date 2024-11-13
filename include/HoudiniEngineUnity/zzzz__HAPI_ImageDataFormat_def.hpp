#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ImageDataFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImageDataFormat)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageDataFormat;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImageDataFormat);
// Type: HoudiniEngineUnity::HAPI_ImageDataFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_ImageDataFormat
struct CORDL_TYPE HAPI_ImageDataFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_ImageDataFormat_Unwrapped
  enum struct __HAPI_ImageDataFormat_Unwrapped : int32_t {
    __E_HAPI_IMAGE_DATA_UNKNOWN = static_cast<int32_t>(0xffffffff),
    __E_HAPI_IMAGE_DATA_INT8 = static_cast<int32_t>(0x0),
    __E_HAPI_IMAGE_DATA_INT16 = static_cast<int32_t>(0x1),
    __E_HAPI_IMAGE_DATA_INT32 = static_cast<int32_t>(0x2),
    __E_HAPI_IMAGE_DATA_FLOAT16 = static_cast<int32_t>(0x3),
    __E_HAPI_IMAGE_DATA_FLOAT32 = static_cast<int32_t>(0x4),
    __E_HAPI_IMAGE_DATA_MAX = static_cast<int32_t>(0x5),
    __E_HAPI_IMAGE_DATA_DEFAULT = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_ImageDataFormat_Unwrapped() const noexcept {
    return static_cast<__HAPI_ImageDataFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ImageDataFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ImageDataFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_IMAGE_DATA_DEFAULT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_DEFAULT;

  /// @brief Field HAPI_IMAGE_DATA_FLOAT16 value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_FLOAT16;

  /// @brief Field HAPI_IMAGE_DATA_FLOAT32 value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_FLOAT32;

  /// @brief Field HAPI_IMAGE_DATA_INT16 value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT16;

  /// @brief Field HAPI_IMAGE_DATA_INT32 value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT32;

  /// @brief Field HAPI_IMAGE_DATA_INT8 value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT8;

  /// @brief Field HAPI_IMAGE_DATA_MAX value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_MAX;

  /// @brief Field HAPI_IMAGE_DATA_UNKNOWN value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_UNKNOWN;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImageDataFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageDataFormat, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageDataFormat, "HoudiniEngineUnity", "HAPI_ImageDataFormat");
