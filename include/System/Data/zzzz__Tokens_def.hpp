#pragma once
// IWYU pragma private; include "System/Data/Tokens.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tokens)
// Forward declare root types
namespace System::Data {
struct Tokens;
}
// Write type traits
MARK_VAL_T(::System::Data::Tokens);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.Tokens
struct CORDL_TYPE Tokens {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Tokens_Unwrapped
  enum struct __Tokens_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Name = static_cast<int32_t>(0x1),
    __E_Numeric = static_cast<int32_t>(0x2),
    __E_Decimal = static_cast<int32_t>(0x3),
    __E_Float = static_cast<int32_t>(0x4),
    __E_BinaryConst = static_cast<int32_t>(0x5),
    __E_StringConst = static_cast<int32_t>(0x6),
    __E_Date = static_cast<int32_t>(0x7),
    __E_ListSeparator = static_cast<int32_t>(0x8),
    __E_LeftParen = static_cast<int32_t>(0x9),
    __E_RightParen = static_cast<int32_t>(0xa),
    __E_ZeroOp = static_cast<int32_t>(0xb),
    __E_UnaryOp = static_cast<int32_t>(0xc),
    __E_BinaryOp = static_cast<int32_t>(0xd),
    __E_Child = static_cast<int32_t>(0xe),
    __E_Parent = static_cast<int32_t>(0xf),
    __E_Dot = static_cast<int32_t>(0x10),
    __E_Unknown = static_cast<int32_t>(0x11),
    __E_EOS = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Tokens_Unwrapped() const noexcept {
    return static_cast<__Tokens_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tokens();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Tokens(int32_t value__) noexcept;

  /// @brief Field BinaryConst value: I32(5)
  static ::System::Data::Tokens const BinaryConst;

  /// @brief Field BinaryOp value: I32(13)
  static ::System::Data::Tokens const BinaryOp;

  /// @brief Field Child value: I32(14)
  static ::System::Data::Tokens const Child;

  /// @brief Field Date value: I32(7)
  static ::System::Data::Tokens const Date;

  /// @brief Field Decimal value: I32(3)
  static ::System::Data::Tokens const Decimal;

  /// @brief Field Dot value: I32(16)
  static ::System::Data::Tokens const Dot;

  /// @brief Field EOS value: I32(18)
  static ::System::Data::Tokens const EOS;

  /// @brief Field Float value: I32(4)
  static ::System::Data::Tokens const Float;

  /// @brief Field LeftParen value: I32(9)
  static ::System::Data::Tokens const LeftParen;

  /// @brief Field ListSeparator value: I32(8)
  static ::System::Data::Tokens const ListSeparator;

  /// @brief Field Name value: I32(1)
  static ::System::Data::Tokens const Name;

  /// @brief Field None value: I32(0)
  static ::System::Data::Tokens const None;

  /// @brief Field Numeric value: I32(2)
  static ::System::Data::Tokens const Numeric;

  /// @brief Field Parent value: I32(15)
  static ::System::Data::Tokens const Parent;

  /// @brief Field RightParen value: I32(10)
  static ::System::Data::Tokens const RightParen;

  /// @brief Field StringConst value: I32(6)
  static ::System::Data::Tokens const StringConst;

  /// @brief Field UnaryOp value: I32(12)
  static ::System::Data::Tokens const UnaryOp;

  /// @brief Field Unknown value: I32(17)
  static ::System::Data::Tokens const Unknown;

  /// @brief Field ZeroOp value: I32(11)
  static ::System::Data::Tokens const ZeroOp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11428 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Tokens, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Tokens, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Tokens, "System.Data", "Tokens");
