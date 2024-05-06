#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MailBnfHelper)
// Forward declare root types
namespace System::Net::Mime {
class MailBnfHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mime::MailBnfHelper);
// Type: System.Net.Mime::MailBnfHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Mime {
// Is value type: false
// CS Name: ::System.Net.Mime::MailBnfHelper*
class CORDL_TYPE MailBnfHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ascii7bitMaxValue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Ascii7bitMaxValue, put = setStaticF_Ascii7bitMaxValue)) int32_t Ascii7bitMaxValue;

  /// @brief Field At, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_At, put = setStaticF_At)) char16_t At;

  /// @brief Field Atext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Atext, put = setStaticF_Atext))::ArrayW<bool, ::Array<bool>*> Atext;

  /// @brief Field Backslash, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Backslash, put = setStaticF_Backslash)) char16_t Backslash;

  /// @brief Field CR, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_CR, put = setStaticF_CR)) char16_t CR;

  /// @brief Field Comma, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Comma, put = setStaticF_Comma)) char16_t Comma;

  /// @brief Field Ctext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ctext, put = setStaticF_Ctext))::ArrayW<bool, ::Array<bool>*> Ctext;

  /// @brief Field Dot, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Dot, put = setStaticF_Dot)) char16_t Dot;

  /// @brief Field Dtext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dtext, put = setStaticF_Dtext))::ArrayW<bool, ::Array<bool>*> Dtext;

  /// @brief Field EndAngleBracket, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_EndAngleBracket, put = setStaticF_EndAngleBracket)) char16_t EndAngleBracket;

  /// @brief Field EndComment, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_EndComment, put = setStaticF_EndComment)) char16_t EndComment;

  /// @brief Field EndSquareBracket, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_EndSquareBracket, put = setStaticF_EndSquareBracket)) char16_t EndSquareBracket;

  /// @brief Field Ftext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ftext, put = setStaticF_Ftext))::ArrayW<bool, ::Array<bool>*> Ftext;

  /// @brief Field LF, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_LF, put = setStaticF_LF)) char16_t LF;

  /// @brief Field Qtext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Qtext, put = setStaticF_Qtext))::ArrayW<bool, ::Array<bool>*> Qtext;

  /// @brief Field Quote, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Quote, put = setStaticF_Quote)) char16_t Quote;

  /// @brief Field Space, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Space, put = setStaticF_Space)) char16_t Space;

  /// @brief Field StartAngleBracket, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_StartAngleBracket, put = setStaticF_StartAngleBracket)) char16_t StartAngleBracket;

  /// @brief Field StartComment, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_StartComment, put = setStaticF_StartComment)) char16_t StartComment;

  /// @brief Field StartSquareBracket, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_StartSquareBracket, put = setStaticF_StartSquareBracket)) char16_t StartSquareBracket;

  /// @brief Field Tab, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Tab, put = setStaticF_Tab)) char16_t Tab;

  /// @brief Field Ttext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ttext, put = setStaticF_Ttext))::ArrayW<bool, ::Array<bool>*> Ttext;

  /// @brief Field s_colonSeparator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_colonSeparator, put = setStaticF_s_colonSeparator))::ArrayW<char16_t, ::Array<char16_t>*> s_colonSeparator;

  /// @brief Field s_months, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_months, put = setStaticF_s_months))::ArrayW<::StringW, ::Array<::StringW>*> s_months;

  /// @brief Method CreateCharactersAllowedInAtoms, addr 0x2f2eecc, size 0x1dc, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CreateCharactersAllowedInAtoms();

  /// @brief Method CreateCharactersAllowedInComments, addr 0x2f2f468, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CreateCharactersAllowedInComments();

  /// @brief Method CreateCharactersAllowedInDomainLiterals, addr 0x2f2f1bc, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CreateCharactersAllowedInDomainLiterals();

  /// @brief Method CreateCharactersAllowedInHeaderNames, addr 0x2f2f2d0, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CreateCharactersAllowedInHeaderNames();

  /// @brief Method CreateCharactersAllowedInQuotedStrings, addr 0x2f2f0a8, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CreateCharactersAllowedInQuotedStrings();

  /// @brief Method CreateCharactersAllowedInTokens, addr 0x2f2f378, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> CreateCharactersAllowedInTokens();

  /// @brief Method IsAllowedWhiteSpace, addr 0x2f2f5a4, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsAllowedWhiteSpace(char16_t c);

  static inline int32_t getStaticF_Ascii7bitMaxValue();

  static inline char16_t getStaticF_At();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_Atext();

  static inline char16_t getStaticF_Backslash();

  static inline char16_t getStaticF_CR();

  static inline char16_t getStaticF_Comma();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_Ctext();

  static inline char16_t getStaticF_Dot();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_Dtext();

  static inline char16_t getStaticF_EndAngleBracket();

  static inline char16_t getStaticF_EndComment();

  static inline char16_t getStaticF_EndSquareBracket();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_Ftext();

  static inline char16_t getStaticF_LF();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_Qtext();

  static inline char16_t getStaticF_Quote();

  static inline char16_t getStaticF_Space();

  static inline char16_t getStaticF_StartAngleBracket();

  static inline char16_t getStaticF_StartComment();

  static inline char16_t getStaticF_StartSquareBracket();

  static inline char16_t getStaticF_Tab();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_Ttext();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_colonSeparator();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_months();

  static inline void setStaticF_Ascii7bitMaxValue(int32_t value);

  static inline void setStaticF_At(char16_t value);

  static inline void setStaticF_Atext(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_Backslash(char16_t value);

  static inline void setStaticF_CR(char16_t value);

  static inline void setStaticF_Comma(char16_t value);

  static inline void setStaticF_Ctext(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_Dot(char16_t value);

  static inline void setStaticF_Dtext(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_EndAngleBracket(char16_t value);

  static inline void setStaticF_EndComment(char16_t value);

  static inline void setStaticF_EndSquareBracket(char16_t value);

  static inline void setStaticF_Ftext(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_LF(char16_t value);

  static inline void setStaticF_Qtext(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_Quote(char16_t value);

  static inline void setStaticF_Space(char16_t value);

  static inline void setStaticF_StartAngleBracket(char16_t value);

  static inline void setStaticF_StartComment(char16_t value);

  static inline void setStaticF_StartSquareBracket(char16_t value);

  static inline void setStaticF_Tab(char16_t value);

  static inline void setStaticF_Ttext(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_s_colonSeparator(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_months(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MailBnfHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MailBnfHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MailBnfHelper(MailBnfHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MailBnfHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MailBnfHelper(MailBnfHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mime::MailBnfHelper, 0x10>, "Size mismatch!");

} // namespace System::Net::Mime
NEED_NO_BOX(::System::Net::Mime::MailBnfHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mime::MailBnfHelper*, "System.Net.Mime", "MailBnfHelper");
