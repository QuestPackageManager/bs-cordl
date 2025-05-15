#pragma once
// IWYU pragma private; include "System/Net/CookieParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CookieParser)
namespace System::Net {
class CookieTokenizer;
}
namespace System::Net {
class Cookie;
}
// Forward declare root types
namespace System::Net {
class CookieParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CookieParser);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CookieParser
class CORDL_TYPE CookieParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_tokenizer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_tokenizer, put = __cordl_internal_set_m_tokenizer)) ::System::Net::CookieTokenizer* m_tokenizer;

  /// @brief Method CheckQuoted, addr 0x44afb40, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW CheckQuoted(::StringW value);

  /// @brief Method Get, addr 0x44af5dc, size 0x564, virtual false, abstract: false, final false
  inline ::System::Net::Cookie* Get();

  static inline ::System::Net::CookieParser* New_ctor(::StringW cookieString);

  constexpr ::System::Net::CookieTokenizer* const& __cordl_internal_get_m_tokenizer() const;

  constexpr ::System::Net::CookieTokenizer*& __cordl_internal_get_m_tokenizer();

  constexpr void __cordl_internal_set_m_tokenizer(::System::Net::CookieTokenizer* value);

  /// @brief Method .ctor, addr 0x44af568, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW cookieString);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CookieParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieParser(CookieParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieParser(CookieParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9645 };

  /// @brief Field m_tokenizer, offset: 0x10, size: 0x8, def value: None
  ::System::Net::CookieTokenizer* ___m_tokenizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CookieParser, ___m_tokenizer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieParser, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::CookieParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieParser*, "System.Net", "CookieParser");
