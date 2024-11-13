#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Token.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Token)
namespace System::Net::Http::Headers {
struct __Token__Type;
}
// Forward declare root types
namespace System::Net::Http::Headers {
struct __Token__Type;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::Headers::__Token__Type);
MARK_VAL_T(::System::Net::Http::Headers::Token);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: true
// CS Name: ::Token::Type
struct CORDL_TYPE __Token__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Token__Type_Unwrapped
  enum struct ____Token__Type_Unwrapped : int32_t {
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
  constexpr operator ____Token__Type_Unwrapped() const noexcept {
    return static_cast<____Token__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Token__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Token__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field End value: static_cast<int32_t>(0x1)
  static ::System::Net::Http::Headers::__Token__Type const End;

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::System::Net::Http::Headers::__Token__Type const Error;

  /// @brief Field OpenParens value: static_cast<int32_t>(0x9)
  static ::System::Net::Http::Headers::__Token__Type const OpenParens;

  /// @brief Field QuotedString value: static_cast<int32_t>(0x3)
  static ::System::Net::Http::Headers::__Token__Type const QuotedString;

  /// @brief Field SeparatorComma value: static_cast<int32_t>(0x8)
  static ::System::Net::Http::Headers::__Token__Type const SeparatorComma;

  /// @brief Field SeparatorDash value: static_cast<int32_t>(0x7)
  static ::System::Net::Http::Headers::__Token__Type const SeparatorDash;

  /// @brief Field SeparatorEqual value: static_cast<int32_t>(0x4)
  static ::System::Net::Http::Headers::__Token__Type const SeparatorEqual;

  /// @brief Field SeparatorSemicolon value: static_cast<int32_t>(0x5)
  static ::System::Net::Http::Headers::__Token__Type const SeparatorSemicolon;

  /// @brief Field SeparatorSlash value: static_cast<int32_t>(0x6)
  static ::System::Net::Http::Headers::__Token__Type const SeparatorSlash;

  /// @brief Field Token value: static_cast<int32_t>(0x2)
  static ::System::Net::Http::Headers::__Token__Type const Token;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__Token__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::__Token__Type, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Http::Headers
// Type: System.Net.Http.Headers::Token
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: true
// CS Name: ::System.Net.Http.Headers::Token
struct CORDL_TYPE Token {
public:
  // Declarations
  using Type = ::System::Net::Http::Headers::__Token__Type;

  /// @brief Field Empty, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Net::Http::Headers::Token Empty;

  __declspec(property(get = get_EndPosition, put = set_EndPosition)) int32_t EndPosition;

  __declspec(property(get = get_Kind)) ::System::Net::Http::Headers::__Token__Type Kind;

  __declspec(property(get = get_StartPosition, put = set_StartPosition)) int32_t StartPosition;

  /// @brief Method ToString, addr 0x41c0458, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x41b8ca0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::__Token__Type type, int32_t startPosition, int32_t endPosition);

  static inline ::System::Net::Http::Headers::Token getStaticF_Empty();

  /// @brief Method get_EndPosition, addr 0x41c043c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EndPosition();

  /// @brief Method get_Kind, addr 0x41c044c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::__Token__Type get_Kind();

  /// @brief Method get_StartPosition, addr 0x41c042c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StartPosition();

  /// @brief Method op_Implicit, addr 0x41c0454, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::Http::Headers::__Token__Type op_Implicit___System__Net__Http__Headers____Token__Type(::System::Net::Http::Headers::Token token);

  static inline void setStaticF_Empty(::System::Net::Http::Headers::Token value);

  /// @brief Method set_EndPosition, addr 0x41c0444, size 0x8, virtual false, abstract: false, final false
  inline void set_EndPosition(int32_t value);

  /// @brief Method set_StartPosition, addr 0x41c0434, size 0x8, virtual false, abstract: false, final false
  inline void set_StartPosition(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Token();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Net::Http::Headers::__Token__Type", modifiers: "", def_value: None }, CppParam { name: "_StartPosition_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Token(::System::Net::Http::Headers::__Token__Type type, int32_t _StartPosition_k__BackingField, int32_t _EndPosition_k__BackingField) noexcept;

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::System::Net::Http::Headers::__Token__Type type;

  /// @brief Field <StartPosition>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _StartPosition_k__BackingField;

  /// @brief Field <EndPosition>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _EndPosition_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16679 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Token, 0xc>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, _StartPosition_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, _EndPosition_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__Token__Type, "System.Net.Http.Headers", "Token/Type");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Token, "System.Net.Http.Headers", "Token");
