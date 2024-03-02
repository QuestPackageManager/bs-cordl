#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryArrayTypeEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryArrayTypeEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryArrayTypeEnum
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryArrayTypeEnum
struct CORDL_TYPE BinaryArrayTypeEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BinaryArrayTypeEnum_Unwrapped
  enum struct __BinaryArrayTypeEnum_Unwrapped : int32_t {
    __E_Single = static_cast<int32_t>(0x0),
    __E_Jagged = static_cast<int32_t>(0x1),
    __E_Rectangular = static_cast<int32_t>(0x2),
    __E_SingleOffset = static_cast<int32_t>(0x3),
    __E_JaggedOffset = static_cast<int32_t>(0x4),
    __E_RectangularOffset = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BinaryArrayTypeEnum_Unwrapped() const noexcept {
    return static_cast<__BinaryArrayTypeEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryArrayTypeEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BinaryArrayTypeEnum(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Jagged value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Jagged;

  /// @brief Field JaggedOffset value: static_cast<int32_t>(0x4)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const JaggedOffset;

  /// @brief Field Rectangular value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Rectangular;

  /// @brief Field RectangularOffset value: static_cast<int32_t>(0x5)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const RectangularOffset;

  /// @brief Field Single value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Single;

  /// @brief Field SingleOffset value: static_cast<int32_t>(0x3)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const SingleOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
