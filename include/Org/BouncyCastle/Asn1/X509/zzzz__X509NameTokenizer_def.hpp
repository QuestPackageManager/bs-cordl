#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509NameTokenizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509NameTokenizer)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameTokenizer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509NameTokenizer
class CORDL_TYPE X509NameTokenizer : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::System::Text::StringBuilder* buffer;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field separator, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get_separator, put = __cordl_internal_set_separator)) char16_t separator;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Method HasMoreTokens, addr 0x261bba4, size 0x28, virtual false, abstract: false, final false
  inline bool HasMoreTokens();

  static inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* New_ctor(::StringW oid);

  static inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* New_ctor(::StringW oid, char16_t separator);

  /// @brief Method NextToken, addr 0x261b954, size 0x1cc, virtual false, abstract: false, final false
  inline ::StringW NextToken();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_buffer() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr char16_t const& __cordl_internal_get_separator() const;

  constexpr char16_t& __cordl_internal_get_separator();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_buffer(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_separator(char16_t value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x261b94c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid);

  /// @brief Method .ctor, addr 0x261bb20, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, char16_t separator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509NameTokenizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509NameTokenizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509NameTokenizer(X509NameTokenizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509NameTokenizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509NameTokenizer(X509NameTokenizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 409 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field separator, offset: 0x1c, size: 0x2, def value: None
  char16_t ___separator;

  /// @brief Field buffer, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer, ___separator) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer, ___buffer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*, "Org.BouncyCastle.Asn1.X509", "X509NameTokenizer");
