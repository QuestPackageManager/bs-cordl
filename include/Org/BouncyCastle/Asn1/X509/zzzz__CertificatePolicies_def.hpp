#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificatePolicies)
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePolicies;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertificatePolicies);
// Type: Org.BouncyCastle.Asn1.X509::CertificatePolicies
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(349))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CertificatePolicies*
class CORDL_TYPE CertificatePolicies : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field policyInformation, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_policyInformation,
      put = __cordl_internal_set_policyInformation))::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policyInformation;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>& __cordl_internal_get_policyInformation();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> const& __cordl_internal_get_policyInformation() const;

  constexpr void __cordl_internal_set_policyInformation(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> value);

  /// @brief Method Copy, addr 0x10b4644, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>
  Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policyInfo);

  /// @brief Method GetInstance, addr 0x10b46bc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x10b488c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method FromExtensions, addr 0x10b48a4, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* New_ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation* name);

  /// @brief Method .ctor, addr 0x10b490c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation* name);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policyInformation);

  /// @brief Method .ctor, addr 0x10b49b4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policyInformation);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10b4760, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetPolicyInformation, addr 0x10b49e4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicyInformation();

  /// @brief Method GetPolicyInformation, addr 0x10b49ec, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* GetPolicyInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier);

  /// @brief Method ToAsn1Object, addr 0x10b4a90, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x10b4af8, size 0x13c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "CertificatePolicies", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificatePolicies(CertificatePolicies&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificatePolicies", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificatePolicies(CertificatePolicies const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificatePolicies();

public:
  /// @brief Field policyInformation, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> ___policyInformation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertificatePolicies, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificatePolicies, ___policyInformation) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificatePolicies);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificatePolicies*, "Org.BouncyCastle.Asn1.X509", "CertificatePolicies");
