#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509Attributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Attributes)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Attributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Attributes);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509Attributes
class CORDL_TYPE X509Attributes : public ::System::Object {
public:
  // Declarations
  /// @brief Field RoleSyntax, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RoleSyntax, put = setStaticF_RoleSyntax)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* RoleSyntax;

  static inline ::Org::BouncyCastle::Asn1::X509::X509Attributes* New_ctor();

  /// @brief Method .ctor, addr 0x35701ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RoleSyntax();

  static inline void setStaticF_RoleSyntax(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Attributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Attributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Attributes(X509Attributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Attributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Attributes(X509Attributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Attributes, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Attributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Attributes*, "Org.BouncyCastle.Asn1.X509", "X509Attributes");
