#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509DefaultEntryConverter)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509DefaultEntryConverter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
// Type: Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(403))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(404))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter*
class CORDL_TYPE X509DefaultEntryConverter : public ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter {
public:
  // Declarations
  /// @brief Method GetConvertedValue addr 0x119d8bc size 0x398 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW value);

  static inline ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter* New_ctor();

  /// @brief Method .ctor addr 0x119dc54 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509DefaultEntryConverter(X509DefaultEntryConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509DefaultEntryConverter(X509DefaultEntryConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509DefaultEntryConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509DefaultEntryConverter");
