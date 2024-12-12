#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ess/SigningCertificateV2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SigningCertificateV2)
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class SigningCertificateV2;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ess.SigningCertificateV2
class CORDL_TYPE SigningCertificateV2 : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field policies, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_policies, put = __cordl_internal_set_policies)) ::Org::BouncyCastle::Asn1::Asn1Sequence* policies;

  /// @brief Method GetCerts, addr 0x2327720, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> GetCerts();

  /// @brief Method GetInstance, addr 0x23272a0, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* GetInstance(::System::Object* o);

  /// @brief Method GetPolicies, addr 0x2327860, size 0x118, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicies();

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs,
           ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2327978, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_certs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_certs();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_policies() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_policies();

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x23275a0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert);

  /// @brief Method .ctor, addr 0x2327614, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs);

  /// @brief Method .ctor, addr 0x2327688, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  /// @brief Method .ctor, addr 0x2327420, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SigningCertificateV2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SigningCertificateV2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SigningCertificateV2(SigningCertificateV2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SigningCertificateV2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SigningCertificateV2(SigningCertificateV2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 167 };

  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  /// @brief Field policies, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2, ___certs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2, ___policies) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*, "Org.BouncyCastle.Asn1.Ess", "SigningCertificateV2");
