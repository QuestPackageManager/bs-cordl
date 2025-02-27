#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Token.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Token)
namespace System::Net::Http::Headers {
struct Token_Type;
}
// Forward declare root types
namespace System::Net::Http::Headers {
struct Token_Type;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::Headers::Token_Type);
MARK_VAL_T(::System::Net::Http::Headers::Token);
// Dependencies
namespace System::Net::Http::Headers {
// Is value type: true
// CS Name: System.Net.Http.Headers.Token/Type
struct CORDL_TYPE Token_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Token_Type_Unwrapped
  enum struct __Token_Type_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_End = static_cast<int32_t>(0x1),
    __E_Token = static_cast<int32_t>(0x2),
    __E_QuotedString = static_cast<int32_t>(0x3),
    __E_SeparatorEqual = static_cast<int32_t>(0x4),
    __E_SeparatorSemicolon = static_cast<int32_t>(0x5),
    __E_SeparatorSlash = static_cast<int32_t>(0x6),
    __E_SeparatorDash = static_cast<int32_t>(0x7),
    __E_SeparatorComma = static_cast<int32_t>(0x8),
    __E_OpenParens = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Token_Type_Unwrapped() const noexcept {
    return static_cast<__Token_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Token_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Token_Type(int32_t value__) noexcept;

  /// @brief Field End value: I32(1)
  static ::System::Net::Http::Headers::Token_Type const End;

  /// @brief Field Error value: I32(0)
  static ::System::Net::Http::Headers::Token_Type const Error;

  /// @brief Field OpenParens value: I32(9)
  static ::System::Net::Http::Headers::Token_Type const OpenParens;

  /// @brief Field QuotedString value: I32(3)
  static ::System::Net::Http::Headers::Token_Type const QuotedString;

  /// @brief Field SeparatorComma value: I32(8)
  static ::System::Net::Http::Headers::Token_Type const SeparatorComma;

  /// @brief Field SeparatorDash value: I32(7)
  static ::System::Net::Http::Headers::Token_Type const SeparatorDash;

  /// @brief Field SeparatorEqual value: I32(4)
  static ::System::Net::Http::Headers::Token_Type const SeparatorEqual;

  /// @brief Field SeparatorSemicolon value: I32(5)
  static ::System::Net::Http::Headers::Token_Type const SeparatorSemicolon;

  /// @brief Field SeparatorSlash value: I32(6)
  static ::System::Net::Http::Headers::Token_Type const SeparatorSlash;

  /// @brief Field Token value: I32(2)
  static ::System::Net::Http::Headers::Token_Type const Token;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16725 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::Token_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Token_Type, 0x4>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Net.Http.Headers.Token::Type
namespace System::Net::Http::Headers {
// Is value type: true
// CS Name: System.Net.Http.Headers.Token
struct CORDL_TYPE Token {
public:
  // Declarations
  using Type = ::System::Net::Http::Headers::Token_Type;

  /// @brief Field Empty, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Net::Http::Headers::Token Empty;

  __declspec(property(get = get_EndPosition, put = set_EndPosition)) int32_t EndPosition;

  __declspec(property(get = get_Kind)) ::System::Net::Http::Headers::Token_Type Kind;

  __declspec(property(get = get_StartPosition, put = set_StartPosition)) int32_t StartPosition;

  /// @brief Method ToString, addr 0x4230658, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4228ea0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::Token_Type type, int32_t startPosition, int32_t endPosition);

  static inline ::System::Net::Http::Headers::Token getStaticF_Empty();

  /// @brief Method get_EndPosition, addr 0x423063c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EndPosition();

  /// @brief Method get_Kind, addr 0x423064c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::Token_Type get_Kind();

  /// @brief Method get_StartPosition, addr 0x423062c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StartPosition();

  /// @brief Method op_Implicit, addr 0x4230654, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::Http::Headers::Token_Type op_Implicit___System__Net__Http__Headers__Token_Type(::System::Net::Http::Headers::Token token);

  static inline void setStaticF_Empty(::System::Net::Http::Headers::Token value);

  /// @brief Method set_EndPosition, addr 0x4230644, size 0x8, virtual false, abstract: false, final false
  inline void set_EndPosition(int32_t value);

  /// @brief Method set_StartPosition, addr 0x4230634, size 0x8, virtual false, abstract: false, final false
  inline void set_StartPosition(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Token();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Net::Http::Headers::Token_Type", modifiers: "", def_value: None }, CppParam { name: "_StartPosition_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Token(::System::Net::Http::Headers::Token_Type type, int32_t _StartPosition_k__BackingField, int32_t _EndPosition_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::System::Net::Http::Headers::Token_Type type;

  /// @brief Field <StartPosition>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _StartPosition_k__BackingField;

  /// @brief Field <EndPosition>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _EndPosition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::Token, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, _StartPosition_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, _EndPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Token, 0xc>, "Size mismatch!");

} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Token_Type, "System.Net.Http.Headers", "Token/Type");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Token, "System.Net.Http.Headers", "Token");
