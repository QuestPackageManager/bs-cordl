#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509ExtensionBase)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509ExtensionBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509ExtensionBase);
// Type: Org.BouncyCastle.X509::X509ExtensionBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1606))
// CS Name: ::Org.BouncyCastle.X509::X509ExtensionBase*
class CORDL_TYPE X509ExtensionBase : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr ::Org::BouncyCastle::X509::IX509Extension* i___Org__BouncyCastle__X509__IX509Extension() noexcept;

  /// @brief Method GetX509Extensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method GetExtensionOids, addr 0x109b7f4, size 0x3f0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetExtensionOids(bool critical);

  /// @brief Method GetNonCriticalExtensionOids, addr 0x109bbe4, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids();

  /// @brief Method GetCriticalExtensionOids, addr 0x109bbf4, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids();

  /// @brief Method GetExtensionValue, addr 0x109bc04, size 0x7c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(::StringW oid);

  /// @brief Method GetExtensionValue, addr 0x109bc80, size 0x38, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::X509::X509ExtensionBase* New_ctor();

  /// @brief Method .ctor, addr 0x109bcb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionBase(X509ExtensionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionBase(X509ExtensionBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionBase();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509ExtensionBase, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509ExtensionBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509ExtensionBase*, "Org.BouncyCastle.X509", "X509ExtensionBase");
