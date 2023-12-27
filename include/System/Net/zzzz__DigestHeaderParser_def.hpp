#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestHeaderParser)
// Forward declare root types
namespace System::Net {
class DigestHeaderParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::DigestHeaderParser);
// Type: System.Net::DigestHeaderParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9159))
// CS Name: ::System.Net::DigestHeaderParser*
class CORDL_TYPE DigestHeaderParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field header, offset 0x10, size 0x8
  __declspec(property(get = __get_header, put = __set_header))::StringW header;

  /// @brief Field length, offset 0x18, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) int32_t length;

  /// @brief Field pos, offset 0x1c, size 0x4
  __declspec(property(get = __get_pos, put = __set_pos)) int32_t pos;

  /// @brief Field values, offset 0x20, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::ArrayW<::StringW, ::Array<::StringW>*> values;

  /// @brief Field keywords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keywords, put = setStaticF_keywords))::ArrayW<::StringW, ::Array<::StringW>*> keywords;

  __declspec(property(get = get_Realm))::StringW Realm;

  __declspec(property(get = get_Opaque))::StringW Opaque;

  __declspec(property(get = get_Nonce))::StringW Nonce;

  __declspec(property(get = get_Algorithm))::StringW Algorithm;

  __declspec(property(get = get_QOP))::StringW QOP;

  constexpr ::StringW& __get_header();

  constexpr ::StringW const& __get_header() const;

  constexpr void __set_header(::StringW value);

  constexpr int32_t& __get_length();

  constexpr int32_t const& __get_length() const;

  constexpr void __set_length(int32_t value);

  constexpr int32_t& __get_pos();

  constexpr int32_t const& __get_pos() const;

  constexpr void __set_pos(int32_t value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_values();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_values() const;

  constexpr void __set_values(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_keywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_keywords();

  static inline ::System::Net::DigestHeaderParser* New_ctor(::StringW header);

  /// @brief Method .ctor addr 0x29bd54c size 0xb4 virtual false final false
  inline void _ctor(::StringW header);

  /// @brief Method get_Realm addr 0x29bd600 size 0x28 virtual false final false
  inline ::StringW get_Realm();

  /// @brief Method get_Opaque addr 0x29bd628 size 0x2c virtual false final false
  inline ::StringW get_Opaque();

  /// @brief Method get_Nonce addr 0x29bd654 size 0x2c virtual false final false
  inline ::StringW get_Nonce();

  /// @brief Method get_Algorithm addr 0x29bd680 size 0x2c virtual false final false
  inline ::StringW get_Algorithm();

  /// @brief Method get_QOP addr 0x29bd6ac size 0x2c virtual false final false
  inline ::StringW get_QOP();

  /// @brief Method Parse addr 0x29bd6d8 size 0x1dc virtual false final false
  inline bool Parse();

  /// @brief Method SkipWhitespace addr 0x29bda44 size 0x80 virtual false final false
  inline void SkipWhitespace();

  /// @brief Method GetKey addr 0x29bdac4 size 0x90 virtual false final false
  inline ::StringW GetKey();

  /// @brief Method GetKeywordAndValue addr 0x29bd8b4 size 0x190 virtual false final false
  inline bool GetKeywordAndValue(ByRef<::StringW> key, ByRef<::StringW> value);

  // Ctor Parameters [CppParam { name: "", ty: "DigestHeaderParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestHeaderParser(DigestHeaderParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestHeaderParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestHeaderParser(DigestHeaderParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestHeaderParser();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::DigestHeaderParser, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::DigestHeaderParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestHeaderParser*, "System.Net", "DigestHeaderParser");
