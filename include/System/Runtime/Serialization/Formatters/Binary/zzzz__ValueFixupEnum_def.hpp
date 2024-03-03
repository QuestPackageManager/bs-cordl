#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueFixupEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct ValueFixupEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum);
// Type: System.Runtime.Serialization.Formatters.Binary::ValueFixupEnum
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ValueFixupEnum
struct CORDL_TYPE ValueFixupEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValueFixupEnum_Unwrapped
  enum struct __ValueFixupEnum_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Array = static_cast<int32_t>(0x1),
    __E_Header = static_cast<int32_t>(0x2),
    __E_Member = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValueFixupEnum_Unwrapped() const noexcept {
    return static_cast<__ValueFixupEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueFixupEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueFixupEnum(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Array value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Array;

  /// @brief Field Empty value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Empty;

  /// @brief Field Header value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Header;

  /// @brief Field Member value: static_cast<int32_t>(0x3)
  static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Member;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, "System.Runtime.Serialization.Formatters.Binary", "ValueFixupEnum");
