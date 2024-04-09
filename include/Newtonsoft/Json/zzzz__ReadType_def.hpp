#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadType)
// Forward declare root types
namespace Newtonsoft::Json {
struct ReadType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::ReadType);
// Type: Newtonsoft.Json::ReadType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::ReadType
struct CORDL_TYPE ReadType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReadType_Unwrapped
  enum struct __ReadType_Unwrapped : int32_t {
    __E_Read = static_cast<int32_t>(0x0),
    __E_ReadAsInt32 = static_cast<int32_t>(0x1),
    __E_ReadAsInt64 = static_cast<int32_t>(0x2),
    __E_ReadAsBytes = static_cast<int32_t>(0x3),
    __E_ReadAsString = static_cast<int32_t>(0x4),
    __E_ReadAsDecimal = static_cast<int32_t>(0x5),
    __E_ReadAsDateTime = static_cast<int32_t>(0x6),
    __E_ReadAsDateTimeOffset = static_cast<int32_t>(0x7),
    __E_ReadAsDouble = static_cast<int32_t>(0x8),
    __E_ReadAsBoolean = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReadType_Unwrapped() const noexcept {
    return static_cast<__ReadType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReadType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Read value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::ReadType const Read;

  /// @brief Field ReadAsBoolean value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::ReadType const ReadAsBoolean;

  /// @brief Field ReadAsBytes value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::ReadType const ReadAsBytes;

  /// @brief Field ReadAsDateTime value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::ReadType const ReadAsDateTime;

  /// @brief Field ReadAsDateTimeOffset value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::ReadType const ReadAsDateTimeOffset;

  /// @brief Field ReadAsDecimal value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::ReadType const ReadAsDecimal;

  /// @brief Field ReadAsDouble value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::ReadType const ReadAsDouble;

  /// @brief Field ReadAsInt32 value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::ReadType const ReadAsInt32;

  /// @brief Field ReadAsInt64 value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::ReadType const ReadAsInt64;

  /// @brief Field ReadAsString value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::ReadType const ReadAsString;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::ReadType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::ReadType, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ReadType, "Newtonsoft.Json", "ReadType");
