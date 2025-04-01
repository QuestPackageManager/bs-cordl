#pragma once
// IWYU pragma private; include "System/Net/DigestHeaderParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestHeaderParser)
// Forward declare root types
namespace System::Net {
class DigestHeaderParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::DigestHeaderParser);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DigestHeaderParser
class CORDL_TYPE DigestHeaderParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::StringW Algorithm;

  __declspec(property(get = get_Nonce)) ::StringW Nonce;

  __declspec(property(get = get_Opaque)) ::StringW Opaque;

  __declspec(property(get = get_QOP)) ::StringW QOP;

  __declspec(property(get = get_Realm)) ::StringW Realm;

  /// @brief Field header, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_header, put = __cordl_internal_set_header)) ::StringW header;

  /// @brief Field keywords, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_keywords, put = setStaticF_keywords)) ::ArrayW<::StringW, ::Array<::StringW>*> keywords;

  /// @brief Field length, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Field pos, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pos, put = __cordl_internal_set_pos)) int32_t pos;

  /// @brief Field values, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::ArrayW<::StringW, ::Array<::StringW>*> values;

  /// @brief Method GetKey, addr 0x44b8d5c, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetKey();

  /// @brief Method GetKeywordAndValue, addr 0x44b8b4c, size 0x190, virtual false, abstract: false, final false
  inline bool GetKeywordAndValue(::ByRef<::StringW> key, ::ByRef<::StringW> value);

  static inline ::System::Net::DigestHeaderParser* New_ctor(::StringW header);

  /// @brief Method Parse, addr 0x44b89b4, size 0x198, virtual false, abstract: false, final false
  inline bool Parse();

  /// @brief Method SkipWhitespace, addr 0x44b8cdc, size 0x80, virtual false, abstract: false, final false
  inline void SkipWhitespace();

  constexpr ::StringW const& __cordl_internal_get_header() const;

  constexpr ::StringW& __cordl_internal_get_header();

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr int32_t const& __cordl_internal_get_pos() const;

  constexpr int32_t& __cordl_internal_get_pos();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_header(::StringW value);

  constexpr void __cordl_internal_set_length(int32_t value);

  constexpr void __cordl_internal_set_pos(int32_t value);

  constexpr void __cordl_internal_set_values(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x44b8828, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW header);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_keywords();

  /// @brief Method get_Algorithm, addr 0x44b895c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Algorithm();

  /// @brief Method get_Nonce, addr 0x44b8930, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Nonce();

  /// @brief Method get_Opaque, addr 0x44b8904, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Opaque();

  /// @brief Method get_QOP, addr 0x44b8988, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_QOP();

  /// @brief Method get_Realm, addr 0x44b88dc, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_Realm();

  static inline void setStaticF_keywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestHeaderParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestHeaderParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestHeaderParser(DigestHeaderParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestHeaderParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestHeaderParser(DigestHeaderParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9680 };

  /// @brief Field header, offset: 0x10, size: 0x8, def value: None
  ::StringW ___header;

  /// @brief Field length, offset: 0x18, size: 0x4, def value: None
  int32_t ___length;

  /// @brief Field pos, offset: 0x1c, size: 0x4, def value: None
  int32_t ___pos;

  /// @brief Field values, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DigestHeaderParser, ___header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestHeaderParser, ___length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestHeaderParser, ___pos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::DigestHeaderParser, ___values) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::DigestHeaderParser, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::DigestHeaderParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestHeaderParser*, "System.Net", "DigestHeaderParser");
