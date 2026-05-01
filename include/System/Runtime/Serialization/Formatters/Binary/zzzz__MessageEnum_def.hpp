#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MessageEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::MessageEnum);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.MessageEnum
struct CORDL_TYPE MessageEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MessageEnum_Unwrapped
  enum struct __MessageEnum_Unwrapped : int32_t {
    __E_NoArgs = static_cast<int32_t>(0x1),
    __E_ArgsInline = static_cast<int32_t>(0x2),
    __E_ArgsIsArray = static_cast<int32_t>(0x4),
    __E_ArgsInArray = static_cast<int32_t>(0x8),
    __E_NoContext = static_cast<int32_t>(0x10),
    __E_ContextInline = static_cast<int32_t>(0x20),
    __E_ContextInArray = static_cast<int32_t>(0x40),
    __E_MethodSignatureInArray = static_cast<int32_t>(0x80),
    __E_PropertyInArray = static_cast<int32_t>(0x100),
    __E_NoReturnValue = static_cast<int32_t>(0x200),
    __E_ReturnValueVoid = static_cast<int32_t>(0x400),
    __E_ReturnValueInline = static_cast<int32_t>(0x800),
    __E_ReturnValueInArray = static_cast<int32_t>(0x1000),
    __E_ExceptionInArray = static_cast<int32_t>(0x2000),
    __E_GenericMethod = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MessageEnum_Unwrapped() const noexcept {
    return static_cast<__MessageEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MessageEnum(int32_t value__) noexcept;

  /// @brief Field ArgsInArray value: I32(8)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ArgsInArray;

  /// @brief Field ArgsInline value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ArgsInline;

  /// @brief Field ArgsIsArray value: I32(4)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ArgsIsArray;

  /// @brief Field ContextInArray value: I32(64)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ContextInArray;

  /// @brief Field ContextInline value: I32(32)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ContextInline;

  /// @brief Field ExceptionInArray value: I32(8192)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ExceptionInArray;

  /// @brief Field GenericMethod value: I32(32768)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const GenericMethod;

  /// @brief Field MethodSignatureInArray value: I32(128)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const MethodSignatureInArray;

  /// @brief Field NoArgs value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const NoArgs;

  /// @brief Field NoContext value: I32(16)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const NoContext;

  /// @brief Field NoReturnValue value: I32(512)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const NoReturnValue;

  /// @brief Field PropertyInArray value: I32(256)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const PropertyInArray;

  /// @brief Field ReturnValueInArray value: I32(4096)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ReturnValueInArray;

  /// @brief Field ReturnValueInline value: I32(2048)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ReturnValueInline;

  /// @brief Field ReturnValueVoid value: I32(1024)
  static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ReturnValueVoid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3313 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, "System.Runtime.Serialization.Formatters.Binary", "MessageEnum");
