#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/RevocationDetailsBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevocationDetailsBuilder)
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetailsBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Cmp.RevocationDetailsBuilder
class CORDL_TYPE RevocationDetailsBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _templateBuilder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__templateBuilder, put = __cordl_internal_set__templateBuilder)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* _templateBuilder;

  /// @brief Method Build, addr 0x264ed90, size 0xac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::RevocationDetails* Build();

  static inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* New_ctor();

  /// @brief Method SetIssuer, addr 0x264eca4, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetPublicKey, addr 0x264ec74, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey);

  /// @brief Method SetSerialNumber, addr 0x264ecd4, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetSubject, addr 0x264ed60, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* const& __cordl_internal_get__templateBuilder() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*& __cordl_internal_get__templateBuilder();

  constexpr void __cordl_internal_set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* value);

  /// @brief Method .ctor, addr 0x264ee3c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationDetailsBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevocationDetailsBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationDetailsBuilder(RevocationDetailsBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationDetailsBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationDetailsBuilder(RevocationDetailsBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 609 };

  /// @brief Field _templateBuilder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* ____templateBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder, ____templateBuilder) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*, "Org.BouncyCastle.Cmp", "RevocationDetailsBuilder");
