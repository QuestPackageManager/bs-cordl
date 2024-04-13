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
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template <typename T> struct Nullable_1;
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
// CS Name: ::System.Net.Http.Headers::Lexer*
class CORDL_TYPE Lexer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Position, put = set_Position)) int32_t Position;

  /// @brief Field dt_formats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dt_formats, put = setStaticF_dt_formats))::ArrayW<::StringW, ::Array<::StringW>*> dt_formats;

  /// @brief Field last_token_char, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_last_token_char, put = setStaticF_last_token_char)) int32_t last_token_char;

  /// @brief Field pos, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pos, put = __cordl_internal_set_pos)) int32_t pos;

  /// @brief Field s, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s))::StringW s;

  /// @brief Field token_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_token_chars, put = setStaticF_token_chars))::ArrayW<bool, ::Array<bool>*> token_chars;

  /// @brief Method EatChar, addr 0x2c726e4, size 0x10, virtual false, abstract: false, final false
  inline void EatChar();

  /// @brief Method GetQuotedStringValue, addr 0x2c702e0, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GetQuotedStringValue(::System::Net::Http::Headers::Token start);

  /// @brief Method GetRemainingStringValue, addr 0x2c6ea34, size 0x34, virtual false, abstract: false, final false
  inline ::StringW GetRemainingStringValue(int32_t position);

  /// @brief Method GetStringValue, addr 0x2c76230, size 0x24, virtual false, abstract: false, final false
  inline ::StringW GetStringValue(::System::Net::Http::Headers::Token start, ::System::Net::Http::Headers::Token end);

  /// @brief Method GetStringValue, addr 0x2c6ea10, size 0x24, virtual false, abstract: false, final false
  inline ::StringW GetStringValue(::System::Net::Http::Headers::Token token);

  /// @brief Method IsStarStringValue, addr 0x2c71f50, size 0x44, virtual false, abstract: false, final false
  inline bool IsStarStringValue(::System::Net::Http::Headers::Token token);

  /// @brief Method IsValidCharacter, addr 0x2c765fc, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsValidCharacter(char16_t input);

  /// @brief Method IsValidToken, addr 0x2c7654c, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsValidToken(::StringW input);

  static inline ::System::Net::Http::Headers::Lexer* New_ctor(::StringW stream);

  /// @brief Method PeekChar, addr 0x2c726a4, size 0x40, virtual false, abstract: false, final false
  inline int32_t PeekChar();

  /// @brief Method Scan, addr 0x2c6e71c, size 0x2f4, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::Token Scan(bool recognizeDash);

  /// @brief Method ScanCommentOptional, addr 0x2c766ac, size 0x150, virtual false, abstract: false, final false
  inline bool ScanCommentOptional(ByRef<::StringW> value, ByRef<::System::Net::Http::Headers::Token> readToken);

  /// @brief Method TryGetDateValue, addr 0x2c763d0, size 0xdc, virtual false, abstract: false, final false
  static inline bool TryGetDateValue(::StringW text, ByRef<::System::DateTimeOffset> value);

  /// @brief Method TryGetDateValue, addr 0x2c762f4, size 0xdc, virtual false, abstract: false, final false
  inline bool TryGetDateValue(::System::Net::Http::Headers::Token token, ByRef<::System::DateTimeOffset> value);

  /// @brief Method TryGetDoubleValue, addr 0x2c764ac, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetDoubleValue(::System::Net::Http::Headers::Token token, ByRef<double_t> value);

  /// @brief Method TryGetNumericValue, addr 0x2c76254, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetNumericValue(::System::Net::Http::Headers::Token token, ByRef<int32_t> value);

  /// @brief Method TryGetNumericValue, addr 0x2c71f94, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetNumericValue(::System::Net::Http::Headers::Token token, ByRef<int64_t> value);

  /// @brief Method TryGetTimeSpanValue, addr 0x2c70218, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> TryGetTimeSpanValue(::System::Net::Http::Headers::Token token);

  constexpr int32_t const& __cordl_internal_get_pos() const;

  constexpr int32_t& __cordl_internal_get_pos();

  constexpr ::StringW const& __cordl_internal_get_s() const;

  constexpr ::StringW& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_pos(int32_t value);

  constexpr void __cordl_internal_set_s(::StringW value);

  /// @brief Method .ctor, addr 0x2c6e510, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW stream);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_dt_formats();

  static inline int32_t getStaticF_last_token_char();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_token_chars();

  /// @brief Method get_Position, addr 0x2c76220, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Position();

  static inline void setStaticF_dt_formats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_last_token_char(int32_t value);

  static inline void setStaticF_token_chars(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method set_Position, addr 0x2c76228, size 0x8, virtual false, abstract: false, final false
  inline void set_Position(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lexer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lexer(Lexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lexer(Lexer const&) = delete;

  /// @brief Field s, offset: 0x10, size: 0x8, def value: None
  ::StringW ___s;

  /// @brief Field pos, offset: 0x18, size: 0x4, def value: None
  int32_t ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::Lexer, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Lexer, ___s) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Lexer, ___pos) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::Lexer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Lexer*, "System.Net.Http.Headers", "Lexer");
