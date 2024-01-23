#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OtherSigningCertificate)
namespace Org::BouncyCastle::Asn1::Ess {
class OtherCertID;
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
class OtherSigningCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate);
// Type: Org.BouncyCastle.Asn1.Ess::OtherSigningCertificate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(165))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::OtherSigningCertificate*
class CORDL_TYPE OtherSigningCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs))::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field policies, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_policies, put = __cordl_internal_set_policies))::Org::BouncyCastle::Asn1::Asn1Sequence* policies;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_certs() const;

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_policies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_policies() const;

  constexpr void __cordl_internal_set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance, addr 0xe9b284, size 0x190, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe9b414, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate* New_ctor(::Org::BouncyCastle::Asn1::Ess::OtherCertID* otherCertID);

  /// @brief Method .ctor, addr 0xe9b568, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ess::OtherCertID* otherCertID);

  /// @brief Method GetCerts, addr 0xe9b5e4, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Ess::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Ess::OtherCertID*>*> GetCerts();

  /// @brief Method GetPolicies, addr 0xe9b6f4, size 0x118, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicies();

  /// @brief Method ToAsn1Object, addr 0xe9b80c, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherSigningCertificate(OtherSigningCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherSigningCertificate(OtherSigningCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherSigningCertificate();

public:
  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  /// @brief Field policies, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate, ___certs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate, ___policies) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate*, "Org.BouncyCastle.Asn1.Ess", "OtherSigningCertificate");
