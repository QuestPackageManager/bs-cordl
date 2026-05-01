#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryTypeEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
struct CORDL_TYPE BinaryTypeEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BinaryTypeEnum_Unwrapped
  enum struct __BinaryTypeEnum_Unwrapped : int32_t {
    __E_Primitive = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
    __E_ObjectUrt = static_cast<int32_t>(0x3),
    __E_ObjectUser = static_cast<int32_t>(0x4),
    __E_ObjectArray = static_cast<int32_t>(0x5),
    __E_StringArray = static_cast<int32_t>(0x6),
    __E_PrimitiveArray = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BinaryTypeEnum_Unwrapped() const noexcept {
    return static_cast<__BinaryTypeEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryTypeEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BinaryTypeEnum(int32_t value__) noexcept;

  /// @brief Field Object value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const Object;

  /// @brief Field ObjectArray value: I32(5)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectArray;

  /// @brief Field ObjectUrt value: I32(3)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectUrt;

  /// @brief Field ObjectUser value: I32(4)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectUser;

  /// @brief Field Primitive value: I32(0)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const Primitive;

  /// @brief Field PrimitiveArray value: I32(7)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const PrimitiveArray;

  /// @brief Field String value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const String;

  /// @brief Field StringArray value: I32(6)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const StringArray;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3257 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum");
