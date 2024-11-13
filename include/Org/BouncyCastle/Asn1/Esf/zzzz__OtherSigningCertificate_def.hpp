#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherSigningCertificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OtherSigningCertificate)
namespace Org::BouncyCastle::Asn1::Esf {
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
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherSigningCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate);
// Type: Org.BouncyCastle.Asn1.Esf::OtherSigningCertificate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherSigningCertificate*
class CORDL_TYPE OtherSigningCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field policies, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_policies, put = __cordl_internal_set_policies)) ::Org::BouncyCastle::Asn1::Asn1Sequence* policies;

  /// @brief Method GetCerts, addr 0x22ee554, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> GetCerts();

  /// @brief Method GetInstance, addr 0x22edec0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* GetInstance(::System::Object* obj);

  /// @brief Method GetPolicies, addr 0x22ee674, size 0x128, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicies();

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs,
           ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::System::Collections::IEnumerable* certs);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::System::Collections::IEnumerable* certs, ::System::Collections::IEnumerable* policies);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22ee79c, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_certs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_policies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_policies() const;

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x22ee1fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs);

  /// @brief Method .ctor, addr 0x22ee204, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  /// @brief Method .ctor, addr 0x22ee2e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* certs);

  /// @brief Method .ctor, addr 0x22ee2f0, size 0x264, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* certs, ::System::Collections::IEnumerable* policies);

  /// @brief Method .ctor, addr 0x22ee03c, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherSigningCertificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherSigningCertificate(OtherSigningCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherSigningCertificate(OtherSigningCertificate const&) = delete;

  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  /// @brief Field policies, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policies;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 153 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate, ___certs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate, ___policies) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*, "Org.BouncyCastle.Asn1.Esf", "OtherSigningCertificate");
