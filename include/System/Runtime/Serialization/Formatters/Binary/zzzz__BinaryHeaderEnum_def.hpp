#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryHeaderEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
struct CORDL_TYPE BinaryHeaderEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BinaryHeaderEnum_Unwrapped
  enum struct __BinaryHeaderEnum_Unwrapped : int32_t {
    __E_SerializedStreamHeader = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_ObjectWithMap = static_cast<int32_t>(0x2),
    __E_ObjectWithMapAssemId = static_cast<int32_t>(0x3),
    __E_ObjectWithMapTyped = static_cast<int32_t>(0x4),
    __E_ObjectWithMapTypedAssemId = static_cast<int32_t>(0x5),
    __E_ObjectString = static_cast<int32_t>(0x6),
    __E_Array = static_cast<int32_t>(0x7),
    __E_MemberPrimitiveTyped = static_cast<int32_t>(0x8),
    __E_MemberReference = static_cast<int32_t>(0x9),
    __E_ObjectNull = static_cast<int32_t>(0xa),
    __E_MessageEnd = static_cast<int32_t>(0xb),
    __E_Assembly = static_cast<int32_t>(0xc),
    __E_ObjectNullMultiple256 = static_cast<int32_t>(0xd),
    __E_ObjectNullMultiple = static_cast<int32_t>(0xe),
    __E_ArraySinglePrimitive = static_cast<int32_t>(0xf),
    __E_ArraySingleObject = static_cast<int32_t>(0x10),
    __E_ArraySingleString = static_cast<int32_t>(0x11),
    __E_CrossAppDomainMap = static_cast<int32_t>(0x12),
    __E_CrossAppDomainString = static_cast<int32_t>(0x13),
    __E_CrossAppDomainAssembly = static_cast<int32_t>(0x14),
    __E_MethodCall = static_cast<int32_t>(0x15),
    __E_MethodReturn = static_cast<int32_t>(0x16),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BinaryHeaderEnum_Unwrapped() const noexcept {
    return static_cast<__BinaryHeaderEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryHeaderEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BinaryHeaderEnum(int32_t value__) noexcept;

  /// @brief Field Array value: I32(7)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const Array;

  /// @brief Field ArraySingleObject value: I32(16)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ArraySingleObject;

  /// @brief Field ArraySinglePrimitive value: I32(15)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ArraySinglePrimitive;

  /// @brief Field ArraySingleString value: I32(17)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ArraySingleString;

  /// @brief Field Assembly value: I32(12)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const Assembly;

  /// @brief Field CrossAppDomainAssembly value: I32(20)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const CrossAppDomainAssembly;

  /// @brief Field CrossAppDomainMap value: I32(18)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const CrossAppDomainMap;

  /// @brief Field CrossAppDomainString value: I32(19)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const CrossAppDomainString;

  /// @brief Field MemberPrimitiveTyped value: I32(8)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MemberPrimitiveTyped;

  /// @brief Field MemberReference value: I32(9)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MemberReference;

  /// @brief Field MessageEnd value: I32(11)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MessageEnd;

  /// @brief Field MethodCall value: I32(21)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MethodCall;

  /// @brief Field MethodReturn value: I32(22)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MethodReturn;

  /// @brief Field Object value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const Object;

  /// @brief Field ObjectNull value: I32(10)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectNull;

  /// @brief Field ObjectNullMultiple value: I32(14)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectNullMultiple;

  /// @brief Field ObjectNullMultiple256 value: I32(13)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectNullMultiple256;

  /// @brief Field ObjectString value: I32(6)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectString;

  /// @brief Field ObjectWithMap value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMap;

  /// @brief Field ObjectWithMapAssemId value: I32(3)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMapAssemId;

  /// @brief Field ObjectWithMapTyped value: I32(4)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMapTyped;

  /// @brief Field ObjectWithMapTypedAssemId value: I32(5)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMapTypedAssemId;

  /// @brief Field SerializedStreamHeader value: I32(0)
  static ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const SerializedStreamHeader;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3243 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryHeaderEnum");
