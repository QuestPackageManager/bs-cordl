#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
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
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509ExtensionBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509ExtensionBase);
// Dependencies Org.BouncyCastle.X509.IX509Extension, System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509ExtensionBase
class CORDL_TYPE X509ExtensionBase : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept;

  /// @brief Method GetCriticalExtensionOids, addr 0x251a884, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids();

  /// @brief Method GetExtensionOids, addr 0x251a47c, size 0x3f8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetExtensionOids(bool critical);

  /// @brief Method GetExtensionValue, addr 0x251a908, size 0x38, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetExtensionValue, addr 0x251a894, size 0x74, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(::StringW oid);

  /// @brief Method GetNonCriticalExtensionOids, addr 0x251a874, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids();

  /// @brief Method GetX509Extensions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  static inline ::Org::BouncyCastle::X509::X509ExtensionBase* New_ctor();

  /// @brief Method .ctor, addr 0x251a940, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::X509::IX509Extension"
  constexpr ::Org::BouncyCastle::X509::IX509Extension* i___Org__BouncyCastle__X509__IX509Extension() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionBase(X509ExtensionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionBase(X509ExtensionBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509ExtensionBase, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509ExtensionBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509ExtensionBase*, "Org.BouncyCastle.X509", "X509ExtensionBase");
