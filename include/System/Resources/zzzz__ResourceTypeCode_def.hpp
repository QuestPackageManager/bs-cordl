#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceTypeCode)
// Forward declare root types
namespace System::Resources {
struct ResourceTypeCode;
}
// Write type traits
MARK_VAL_T(::System::Resources::ResourceTypeCode);
// Type: System.Resources::ResourceTypeCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3424))
// CS Name: ::System.Resources::ResourceTypeCode
struct CORDL_TYPE ResourceTypeCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ResourceTypeCode_Unwrapped
  enum struct __ResourceTypeCode_Unwrapped : int32_t {
    __E_Null = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_Boolean = static_cast<int32_t>(0x2),
    __E_Char = static_cast<int32_t>(0x3),
    __E_Byte = static_cast<int32_t>(0x4),
    __E_SByte = static_cast<int32_t>(0x5),
    __E_Int16 = static_cast<int32_t>(0x6),
    __E_UInt16 = static_cast<int32_t>(0x7),
    __E_Int32 = static_cast<int32_t>(0x8),
    __E_UInt32 = static_cast<int32_t>(0x9),
    __E_Int64 = static_cast<int32_t>(0xa),
    __E_UInt64 = static_cast<int32_t>(0xb),
    __E_Single = static_cast<int32_t>(0xc),
    __E_Double = static_cast<int32_t>(0xd),
    __E_Decimal = static_cast<int32_t>(0xe),
    __E_DateTime = static_cast<int32_t>(0xf),
    __E_TimeSpan = static_cast<int32_t>(0x10),
    __E_LastPrimitive = static_cast<int32_t>(0x10),
    __E_ByteArray = static_cast<int32_t>(0x20),
    __E_Stream = static_cast<int32_t>(0x21),
    __E_StartOfUserTypes = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ResourceTypeCode_Unwrapped() const noexcept {
    return static_cast<__ResourceTypeCode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResourceTypeCode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceTypeCode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Null value: static_cast<int32_t>(0x0)
  static ::System::Resources::ResourceTypeCode const Null;

  /// @brief Field String value: static_cast<int32_t>(0x1)
  static ::System::Resources::ResourceTypeCode const String;

  /// @brief Field Boolean value: static_cast<int32_t>(0x2)
  static ::System::Resources::ResourceTypeCode const Boolean;

  /// @brief Field Char value: static_cast<int32_t>(0x3)
  static ::System::Resources::ResourceTypeCode const Char;

  /// @brief Field Byte value: static_cast<int32_t>(0x4)
  static ::System::Resources::ResourceTypeCode const Byte;

  /// @brief Field SByte value: static_cast<int32_t>(0x5)
  static ::System::Resources::ResourceTypeCode const SByte;

  /// @brief Field Int16 value: static_cast<int32_t>(0x6)
  static ::System::Resources::ResourceTypeCode const Int16;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x7)
  static ::System::Resources::ResourceTypeCode const UInt16;

  /// @brief Field Int32 value: static_cast<int32_t>(0x8)
  static ::System::Resources::ResourceTypeCode const Int32;

  /// @brief Field UInt32 value: static_cast<int32_t>(0x9)
  static ::System::Resources::ResourceTypeCode const UInt32;

  /// @brief Field Int64 value: static_cast<int32_t>(0xa)
  static ::System::Resources::ResourceTypeCode const Int64;

  /// @brief Field UInt64 value: static_cast<int32_t>(0xb)
  static ::System::Resources::ResourceTypeCode const UInt64;

  /// @brief Field Single value: static_cast<int32_t>(0xc)
  static ::System::Resources::ResourceTypeCode const Single;

  /// @brief Field Double value: static_cast<int32_t>(0xd)
  static ::System::Resources::ResourceTypeCode const Double;

  /// @brief Field Decimal value: static_cast<int32_t>(0xe)
  static ::System::Resources::ResourceTypeCode const Decimal;

  /// @brief Field DateTime value: static_cast<int32_t>(0xf)
  static ::System::Resources::ResourceTypeCode const DateTime;

  /// @brief Field TimeSpan value: static_cast<int32_t>(0x10)
  static ::System::Resources::ResourceTypeCode const TimeSpan;

  /// @brief Field LastPrimitive value: static_cast<int32_t>(0x10)
  static ::System::Resources::ResourceTypeCode const LastPrimitive;

  /// @brief Field ByteArray value: static_cast<int32_t>(0x20)
  static ::System::Resources::ResourceTypeCode const ByteArray;

  /// @brief Field Stream value: static_cast<int32_t>(0x21)
  static ::System::Resources::ResourceTypeCode const Stream;

  /// @brief Field StartOfUserTypes value: static_cast<int32_t>(0x40)
  static ::System::Resources::ResourceTypeCode const StartOfUserTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceTypeCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Resources::ResourceTypeCode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Resources
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceTypeCode, "System.Resources", "ResourceTypeCode");
