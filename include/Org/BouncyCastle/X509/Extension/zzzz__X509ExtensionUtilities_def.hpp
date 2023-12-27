#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ExtensionUtilities)
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Extension {
class X509ExtensionUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities);
// Type: Org.BouncyCastle.X509.Extension::X509ExtensionUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Extension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1841))
// CS Name: ::Org.BouncyCastle.X509.Extension::X509ExtensionUtilities*
class CORDL_TYPE X509ExtensionUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromExtensionValue addr 0x116ed74 size 0x24 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* FromExtensionValue(::Org::BouncyCastle::Asn1::Asn1OctetString* extensionValue);

  /// @brief Method GetIssuerAlternativeNames addr 0x116f5f8 size 0x74 virtual false final false
  static inline ::System::Collections::ICollection* GetIssuerAlternativeNames(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetSubjectAlternativeNames addr 0x117005c size 0x74 virtual false final false
  static inline ::System::Collections::ICollection* GetSubjectAlternativeNames(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetAlternativeName addr 0x116f66c size 0x9f0 virtual false final false
  static inline ::System::Collections::ICollection* GetAlternativeName(::Org::BouncyCastle::Asn1::Asn1OctetString* extVal);

  static inline ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities* New_ctor();

  /// @brief Method .ctor addr 0x11700d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionUtilities(X509ExtensionUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionUtilities(X509ExtensionUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Extension
NEED_NO_BOX(::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*, "Org.BouncyCastle.X509.Extension", "X509ExtensionUtilities");
