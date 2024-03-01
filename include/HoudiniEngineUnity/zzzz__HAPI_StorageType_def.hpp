#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_StorageType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_StorageType);
// Type: HoudiniEngineUnity::HAPI_StorageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_StorageType
struct CORDL_TYPE HAPI_StorageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_StorageType_Unwrapped
  enum struct __HAPI_StorageType_Unwrapped : int32_t {
    __E_HAPI_STORAGETYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_STORAGETYPE_INT = static_cast<int32_t>(0x0),
    __E_HAPI_STORAGETYPE_INT64 = static_cast<int32_t>(0x1),
    __E_HAPI_STORAGETYPE_FLOAT = static_cast<int32_t>(0x2),
    __E_HAPI_STORAGETYPE_FLOAT64 = static_cast<int32_t>(0x3),
    __E_HAPI_STORAGETYPE_STRING = static_cast<int32_t>(0x4),
    __E_HAPI_STORAGETYPE_UINT8 = static_cast<int32_t>(0x5),
    __E_HAPI_STORAGETYPE_INT8 = static_cast<int32_t>(0x6),
    __E_HAPI_STORAGETYPE_INT16 = static_cast<int32_t>(0x7),
    __E_HAPI_STORAGETYPE_MAX = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_StorageType_Unwrapped() const noexcept {
    return static_cast<__HAPI_StorageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__HAPI_StorageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_StorageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_StorageType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_STORAGETYPE_FLOAT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_FLOAT;

  /// @brief Field HAPI_STORAGETYPE_FLOAT64 value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_FLOAT64;

  /// @brief Field HAPI_STORAGETYPE_INT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT;

  /// @brief Field HAPI_STORAGETYPE_INT16 value: static_cast<int32_t>(0x7)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT16;

  /// @brief Field HAPI_STORAGETYPE_INT64 value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT64;

  /// @brief Field HAPI_STORAGETYPE_INT8 value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT8;

  /// @brief Field HAPI_STORAGETYPE_INVALID value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INVALID;

  /// @brief Field HAPI_STORAGETYPE_MAX value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_MAX;

  /// @brief Field HAPI_STORAGETYPE_STRING value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_STRING;

  /// @brief Field HAPI_STORAGETYPE_UINT8 value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_UINT8;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_StorageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_StorageType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_StorageType, "HoudiniEngineUnity", "HAPI_StorageType");
