#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509NameEntryConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509NameEntryConverter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameEntryConverter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
class CORDL_TYPE X509NameEntryConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method CanBePrintable, addr 0x2612710, size 0xc, virtual false, abstract: false, final false
  inline bool CanBePrintable(::StringW str);

  /// @brief Method ConvertHexEncoded, addr 0x2612698, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ConvertHexEncoded(::StringW hexString, int32_t offset);

  /// @brief Method GetConvertedValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW value);

  static inline ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* New_ctor();

  /// @brief Method .ctor, addr 0x261271c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509NameEntryConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509NameEntryConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509NameEntryConverter(X509NameEntryConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509NameEntryConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509NameEntryConverter(X509NameEntryConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 403 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509NameEntryConverter");
