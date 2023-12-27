#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Lexer)
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class Lexer;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::Lexer);
// Type: System.Net.Http.Headers::Lexer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14683))
// CS Name: ::System.Net.Http.Headers::Lexer*
class CORDL_TYPE Lexer : public ::System::Object {
public:
  // Declarations
  /// @brief Field s, offset 0x10, size 0x8
  __declspec(property(get = __get_s, put = __set_s))::StringW s;

  /// @brief Field pos, offset 0x18, size 0x4
  __declspec(property(get = __get_pos, put = __set_pos)) int32_t pos;

  /// @brief Field token_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_token_chars, put = setStaticF_token_chars))::ArrayW<bool, ::Array<bool>*> token_chars;

  /// @brief Field last_token_char, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_last_token_char, put = setStaticF_last_token_char)) int32_t last_token_char;

  /// @brief Field dt_formats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dt_formats, put = setStaticF_dt_formats))::ArrayW<::StringW, ::Array<::StringW>*> dt_formats;

  __declspec(property(get = get_Position, put = set_Position)) int32_t Position;

  constexpr ::StringW& __get_s();

  constexpr ::StringW const& __get_s() const;

  constexpr void __set_s(::StringW value);

  constexpr int32_t& __get_pos();

  constexpr int32_t const& __get_pos() const;

  constexpr void __set_pos(int32_t value);

  static inline void setStaticF_token_chars(::ArrayW<bool, ::Array<bool>*> value);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_token_chars();

  static inline void setStaticF_last_token_char(int32_t value);

  static inline int32_t getStaticF_last_token_char();

  static inline void setStaticF_dt_formats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_dt_formats();

  static inline ::System::Net::Http::Headers::Lexer* New_ctor(::StringW stream);

  /// @brief Method .ctor addr 0x2834b60 size 0x28 virtual false final false
  inline void _ctor(::StringW stream);

  /// @brief Method get_Position addr 0x283c870 size 0x8 virtual false final false
  inline int32_t get_Position();

  /// @brief Method set_Position addr 0x283c878 size 0x8 virtual false final false
  inline void set_Position(int32_t value);

  /// @brief Method GetStringValue addr 0x2835060 size 0x24 virtual false final false
  inline ::StringW GetStringValue(::System::Net::Http::Headers::Token token);

  /// @brief Method GetStringValue addr 0x283c880 size 0x24 virtual false final false
  inline ::StringW GetStringValue(::System::Net::Http::Headers::Token start, ::System::Net::Http::Headers::Token end);

  /// @brief Method GetQuotedStringValue addr 0x2836930 size 0x2c virtual false final false
  inline ::StringW GetQuotedStringValue(::System::Net::Http::Headers::Token start);

  /// @brief Method GetRemainingStringValue addr 0x2835084 size 0x34 virtual false final false
  inline ::StringW GetRemainingStringValue(int32_t position);

  /// @brief Method IsStarStringValue addr 0x28385a0 size 0x44 virtual false final false
  inline bool IsStarStringValue(::System::Net::Http::Headers::Token token);

  /// @brief Method TryGetNumericValue addr 0x283c8a4 size 0xa0 virtual false final false
  inline bool TryGetNumericValue(::System::Net::Http::Headers::Token token, ByRef<int32_t> value);

  /// @brief Method TryGetNumericValue addr 0x28385e4 size 0xa0 virtual false final false
  inline bool TryGetNumericValue(::System::Net::Http::Headers::Token token, ByRef<int64_t> value);

  /// @brief Method TryGetTimeSpanValue addr 0x2836868 size 0xc8 virtual false final false
  inline ::System::Nullable_1<::System::TimeSpan> TryGetTimeSpanValue(::System::Net::Http::Headers::Token token);

  /// @brief Method TryGetDateValue addr 0x283c944 size 0xdc virtual false final false
  inline bool TryGetDateValue(::System::Net::Http::Headers::Token token, ByRef<::System::DateTimeOffset> value);

  /// @brief Method TryGetDateValue addr 0x283ca20 size 0xdc virtual false final false
  static inline bool TryGetDateValue(::StringW text, ByRef<::System::DateTimeOffset> value);

  /// @brief Method TryGetDoubleValue addr 0x283cafc size 0xa0 virtual false final false
  inline bool TryGetDoubleValue(::System::Net::Http::Headers::Token token, ByRef<double_t> value);

  /// @brief Method IsValidToken addr 0x283cb9c size 0xb0 virtual false final false
  static inline bool IsValidToken(::StringW input);

  /// @brief Method IsValidCharacter addr 0x283cc4c size 0xb0 virtual false final false
  static inline bool IsValidCharacter(char16_t input);

  /// @brief Method EatChar addr 0x2838d34 size 0x10 virtual false final false
  inline void EatChar();

  /// @brief Method PeekChar addr 0x2838cf4 size 0x40 virtual false final false
  inline int32_t PeekChar();

  /// @brief Method ScanCommentOptional addr 0x283ccfc size 0x150 virtual false final false
  inline bool ScanCommentOptional(ByRef<::StringW> value, ByRef<::System::Net::Http::Headers::Token> readToken);

  /// @brief Method Scan addr 0x2834d6c size 0x2f4 virtual false final false
  inline ::System::Net::Http::Headers::Token Scan(bool recognizeDash);

  // Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lexer(Lexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lexer(Lexer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lexer();

public:
  /// @brief Field s, offset: 0x10, size: 0x8, def value: None
  ::StringW ___s;

  /// @brief Field pos, offset: 0x18, size: 0x4, def value: None
  int32_t ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Lexer, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::Lexer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Lexer*, "System.Net.Http.Headers", "Lexer");
