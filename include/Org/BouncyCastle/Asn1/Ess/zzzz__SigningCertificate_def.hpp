#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SigningCertificate)
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class SigningCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::SigningCertificate);
// Type: Org.BouncyCastle.Asn1.Ess::SigningCertificate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(166))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::SigningCertificate*
class CORDL_TYPE SigningCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
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

  /// @brief Method GetInstance addr 0xe26780 size 0x190 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificate* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe26910 size 0x154 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificate* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* essCertID);

  /// @brief Method .ctor addr 0xe26a64 size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* essCertID);

  /// @brief Method GetCerts addr 0xe26ae0 size 0x110 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertID*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertID*>*> GetCerts();

  /// @brief Method GetPolicies addr 0xe26bf0 size 0x118 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicies();

  /// @brief Method ToAsn1Object addr 0xe26d08 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SigningCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SigningCertificate(SigningCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SigningCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SigningCertificate(SigningCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SigningCertificate();

public:
  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  /// @brief Field policies, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::SigningCertificate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::SigningCertificate, ___certs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::SigningCertificate, ___policies) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::SigningCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::SigningCertificate*, "Org.BouncyCastle.Asn1.Ess", "SigningCertificate");
