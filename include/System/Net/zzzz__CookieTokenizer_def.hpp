#pragma once
// IWYU pragma private; include "System/Net/CookieTokenizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CookieToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieTokenizer)
namespace System::Net {
struct CookieToken;
}
namespace System::Net {
struct CookieTokenizer_RecognizedAttribute;
}
// Forward declare root types
namespace System::Net {
class CookieTokenizer;
}
namespace System::Net {
struct CookieTokenizer_RecognizedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CookieTokenizer);
MARK_VAL_T(::System::Net::CookieTokenizer_RecognizedAttribute);
// Dependencies System.Net.CookieToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CookieTokenizer/RecognizedAttribute
struct CORDL_TYPE CookieTokenizer_RecognizedAttribute {
public:
  // Declarations
  __declspec(property(get = get_Token)) ::System::Net::CookieToken Token;

  /// @brief Method IsEqualTo, addr 0x44af4cc, size 0x24, virtual false, abstract: false, final false
  inline bool IsEqualTo(::StringW value);

  /// @brief Method .ctor, addr 0x44af4b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Net::CookieToken token);

  /// @brief Method get_Token, addr 0x44af4c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::CookieToken get_Token();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieTokenizer_RecognizedAttribute();

  // Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_token", ty: "::System::Net::CookieToken", modifiers: "", def_value: None }]
  constexpr CookieTokenizer_RecognizedAttribute(::StringW m_name, ::System::Net::CookieToken m_token) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9643 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_name;

  /// @brief Field m_token, offset: 0x8, size: 0x4, def value: None
  ::System::Net::CookieToken m_token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CookieTokenizer_RecognizedAttribute, m_name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer_RecognizedAttribute, m_token) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieTokenizer_RecognizedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.CookieToken, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CookieTokenizer
class CORDL_TYPE CookieTokenizer : public ::System::Object {
public:
  // Declarations
  using RecognizedAttribute = ::System::Net::CookieTokenizer_RecognizedAttribute;

  __declspec(property(get = get_EndOfCookie, put = set_EndOfCookie)) bool EndOfCookie;

  __declspec(property(get = get_Eof)) bool Eof;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Quoted, put = set_Quoted)) bool Quoted;

  /// @brief Field RecognizedAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RecognizedAttributes,
                      put = setStaticF_RecognizedAttributes)) ::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute, ::Array<::System::Net::CookieTokenizer_RecognizedAttribute>*>
      RecognizedAttributes;

  /// @brief Field RecognizedServerAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RecognizedServerAttributes,
                      put = setStaticF_RecognizedServerAttributes)) ::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute, ::Array<::System::Net::CookieTokenizer_RecognizedAttribute>*>
      RecognizedServerAttributes;

  __declspec(property(get = get_Token, put = set_Token)) ::System::Net::CookieToken Token;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field m_eofCookie, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_eofCookie, put = __cordl_internal_set_m_eofCookie)) bool m_eofCookie;

  /// @brief Field m_index, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_index, put = __cordl_internal_set_m_index)) int32_t m_index;

  /// @brief Field m_length, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_length, put = __cordl_internal_set_m_length)) int32_t m_length;

  /// @brief Field m_name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name)) ::StringW m_name;

  /// @brief Field m_quoted, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_quoted, put = __cordl_internal_set_m_quoted)) bool m_quoted;

  /// @brief Field m_start, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_start, put = __cordl_internal_set_m_start)) int32_t m_start;

  /// @brief Field m_token, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_token, put = __cordl_internal_set_m_token)) ::System::Net::CookieToken m_token;

  /// @brief Field m_tokenLength, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_tokenLength, put = __cordl_internal_set_m_tokenLength)) int32_t m_tokenLength;

  /// @brief Field m_tokenStream, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_tokenStream, put = __cordl_internal_set_m_tokenStream)) ::StringW m_tokenStream;

  /// @brief Field m_value, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_value, put = __cordl_internal_set_m_value)) ::StringW m_value;

  /// @brief Method Extract, addr 0x44ae9d8, size 0x88, virtual false, abstract: false, final false
  inline ::StringW Extract();

  /// @brief Method FindNext, addr 0x44aea60, size 0x2a0, virtual false, abstract: false, final false
  inline ::System::Net::CookieToken FindNext(bool ignoreComma, bool ignoreEquals);

  static inline ::System::Net::CookieTokenizer* New_ctor(::StringW tokenStream);

  /// @brief Method Next, addr 0x44aed00, size 0x104, virtual false, abstract: false, final false
  inline ::System::Net::CookieToken Next(bool first, bool parseResponseCookies);

  /// @brief Method Reset, addr 0x44aee04, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method TokenFromName, addr 0x44aee6c, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Net::CookieToken TokenFromName(bool parseResponseCookies);

  constexpr bool const& __cordl_internal_get_m_eofCookie() const;

  constexpr bool& __cordl_internal_get_m_eofCookie();

  constexpr int32_t const& __cordl_internal_get_m_index() const;

  constexpr int32_t& __cordl_internal_get_m_index();

  constexpr int32_t const& __cordl_internal_get_m_length() const;

  constexpr int32_t& __cordl_internal_get_m_length();

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr bool const& __cordl_internal_get_m_quoted() const;

  constexpr bool& __cordl_internal_get_m_quoted();

  constexpr int32_t const& __cordl_internal_get_m_start() const;

  constexpr int32_t& __cordl_internal_get_m_start();

  constexpr ::System::Net::CookieToken const& __cordl_internal_get_m_token() const;

  constexpr ::System::Net::CookieToken& __cordl_internal_get_m_token();

  constexpr int32_t const& __cordl_internal_get_m_tokenLength() const;

  constexpr int32_t& __cordl_internal_get_m_tokenLength();

  constexpr ::StringW const& __cordl_internal_get_m_tokenStream() const;

  constexpr ::StringW& __cordl_internal_get_m_tokenStream();

  constexpr ::StringW const& __cordl_internal_get_m_value() const;

  constexpr ::StringW& __cordl_internal_get_m_value();

  constexpr void __cordl_internal_set_m_eofCookie(bool value);

  constexpr void __cordl_internal_set_m_index(int32_t value);

  constexpr void __cordl_internal_set_m_length(int32_t value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_quoted(bool value);

  constexpr void __cordl_internal_set_m_start(int32_t value);

  constexpr void __cordl_internal_set_m_token(::System::Net::CookieToken value);

  constexpr void __cordl_internal_set_m_tokenLength(int32_t value);

  constexpr void __cordl_internal_set_m_tokenStream(::StringW value);

  constexpr void __cordl_internal_set_m_value(::StringW value);

  /// @brief Method .ctor, addr 0x44ae938, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW tokenStream);

  static inline ::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute, ::Array<::System::Net::CookieTokenizer_RecognizedAttribute>*> getStaticF_RecognizedAttributes();

  static inline ::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute, ::Array<::System::Net::CookieTokenizer_RecognizedAttribute>*> getStaticF_RecognizedServerAttributes();

  /// @brief Method get_EndOfCookie, addr 0x44ae970, size 0x8, virtual false, abstract: false, final false
  inline bool get_EndOfCookie();

  /// @brief Method get_Eof, addr 0x44ae984, size 0x10, virtual false, abstract: false, final false
  inline bool get_Eof();

  /// @brief Method get_Name, addr 0x44ae994, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Quoted, addr 0x44ae9a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Quoted();

  /// @brief Method get_Token, addr 0x44ae9b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::CookieToken get_Token();

  /// @brief Method get_Value, addr 0x44ae9c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  static inline void setStaticF_RecognizedAttributes(::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute, ::Array<::System::Net::CookieTokenizer_RecognizedAttribute>*> value);

  static inline void setStaticF_RecognizedServerAttributes(::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute, ::Array<::System::Net::CookieTokenizer_RecognizedAttribute>*> value);

  /// @brief Method set_EndOfCookie, addr 0x44ae978, size 0xc, virtual false, abstract: false, final false
  inline void set_EndOfCookie(bool value);

  /// @brief Method set_Name, addr 0x44ae99c, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Quoted, addr 0x44ae9ac, size 0xc, virtual false, abstract: false, final false
  inline void set_Quoted(bool value);

  /// @brief Method set_Token, addr 0x44ae9c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::System::Net::CookieToken value);

  /// @brief Method set_Value, addr 0x44ae9d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieTokenizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CookieTokenizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieTokenizer(CookieTokenizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieTokenizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieTokenizer(CookieTokenizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9644 };

  /// @brief Field m_eofCookie, offset: 0x10, size: 0x1, def value: None
  bool ___m_eofCookie;

  /// @brief Field m_index, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_index;

  /// @brief Field m_length, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_length;

  /// @brief Field m_name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_quoted, offset: 0x28, size: 0x1, def value: None
  bool ___m_quoted;

  /// @brief Field m_start, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_start;

  /// @brief Field m_token, offset: 0x30, size: 0x4, def value: None
  ::System::Net::CookieToken ___m_token;

  /// @brief Field m_tokenLength, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_tokenLength;

  /// @brief Field m_tokenStream, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_tokenStream;

  /// @brief Field m_value, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CookieTokenizer, ___m_eofCookie) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_index) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_quoted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_start) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_tokenLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_tokenStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieTokenizer, ___m_value) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieTokenizer, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::CookieTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieTokenizer*, "System.Net", "CookieTokenizer");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieTokenizer_RecognizedAttribute, "System.Net", "CookieTokenizer/RecognizedAttribute");
