#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IX509Extension)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::IX509Extension);
// Type: Org.BouncyCastle.X509::IX509Extension
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::IX509Extension*
class CORDL_TYPE IX509Extension {
public:
  // Declarations
  /// @brief Method GetCriticalExtensionOids, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids();

  /// @brief Method GetExtensionValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(::StringW oid);

  /// @brief Method GetNonCriticalExtensionOids, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids();

  // Ctor Parameters [CppParam { name: "", ty: "IX509Extension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IX509Extension(IX509Extension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IX509Extension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IX509Extension(IX509Extension const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::IX509Extension);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::IX509Extension*, "Org.BouncyCastle.X509", "IX509Extension");
