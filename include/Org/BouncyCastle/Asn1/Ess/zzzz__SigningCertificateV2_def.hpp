#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SigningCertificateV2)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class SigningCertificateV2;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2);
// Type: Org.BouncyCastle.Asn1.Ess::SigningCertificateV2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(167))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::SigningCertificateV2*
class CORDL_TYPE SigningCertificateV2 : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field policies, offset 0x18, size 0x8
  __declspec(property(get = __get_policies, put = __set_policies))::Org::BouncyCastle::Asn1::Asn1Sequence* policies;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_certs() const;

  constexpr void __set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_policies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_policies() const;

  constexpr void __set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xe9c024 size 0x190 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe9c1b4 size 0x184 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert);

  /// @brief Method .ctor addr 0xe9c338 size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs);

  /// @brief Method .ctor addr 0xe9c3b4 size 0x7c virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs,
           ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  /// @brief Method .ctor addr 0xe9c430 size 0xa4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> certs,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  /// @brief Method GetCerts addr 0xe9c4d4 size 0x140 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*> GetCerts();

  /// @brief Method GetPolicies addr 0xe9c614 size 0x118 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicies();

  /// @brief Method ToAsn1Object addr 0xe9c72c size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SigningCertificateV2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SigningCertificateV2(SigningCertificateV2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SigningCertificateV2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SigningCertificateV2(SigningCertificateV2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SigningCertificateV2();

public:
  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  /// @brief Field policies, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*, "Org.BouncyCastle.Asn1.Ess", "SigningCertificateV2");
