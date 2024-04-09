#pragma once
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
// Type: Org.BouncyCastle.Asn1.X509::X509NameEntryConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509NameEntryConverter*
class CORDL_TYPE X509NameEntryConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method CanBePrintable, addr 0x130d990, size 0xc, virtual false, abstract: false, final false
  inline bool CanBePrintable(::StringW str);

  /// @brief Method ConvertHexEncoded, addr 0x130d918, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ConvertHexEncoded(::StringW hexString, int32_t offset);

  /// @brief Method GetConvertedValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW value);

  static inline ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* New_ctor();

  /// @brief Method .ctor, addr 0x130d99c, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509NameEntryConverter");
