#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CertificateList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateList)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
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
class DerBitString;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertificateList);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.CertificateList
class CORDL_TYPE CertificateList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_NextUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* NextUpdate;

  __declspec(property(get = get_Signature)) ::Org::BouncyCastle::Asn1::DerBitString* Signature;

  __declspec(property(get = get_SignatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_TbsCertList)) ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* TbsCertList;

  __declspec(property(get = get_ThisUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* ThisUpdate;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sig, put = __cordl_internal_set_sig)) ::Org::BouncyCastle::Asn1::DerBitString* sig;

  /// @brief Field sigAlgID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgID, put = __cordl_internal_set_sigAlgID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;

  /// @brief Field tbsCertList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsCertList, put = __cordl_internal_set_tbsCertList)) ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCertList;

  /// @brief Method GetInstance, addr 0x346267c, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificateList* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x3462690, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificateList* GetInstance(::System::Object* obj);

  /// @brief Method GetRevokedCertificateEnumeration, addr 0x346289c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetRevokedCertificateEnumeration();

  /// @brief Method GetRevokedCertificates, addr 0x3462884, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*> GetRevokedCertificates();

  /// @brief Method GetSignatureOctets, addr 0x34628c4, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  static inline ::Org::BouncyCastle::Asn1::X509::CertificateList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3462940, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_sig() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_sig();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_sigAlgID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_sigAlgID();

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* const& __cordl_internal_get_tbsCertList() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList*& __cordl_internal_get_tbsCertList();

  constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_tbsCertList(::Org::BouncyCastle::Asn1::X509::TbsCertificateList* value);

  /// @brief Method .ctor, addr 0x3462730, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Issuer, addr 0x34628f8, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_NextUpdate, addr 0x3462928, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();

  /// @brief Method get_Signature, addr 0x34628bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method get_SignatureAlgorithm, addr 0x34628b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_TbsCertList, addr 0x346287c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* get_TbsCertList();

  /// @brief Method get_ThisUpdate, addr 0x3462910, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();

  /// @brief Method get_Version, addr 0x34628e0, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateList(CertificateList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateList(CertificateList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 347 };

  /// @brief Field tbsCertList, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* ___tbsCertList;

  /// @brief Field sigAlgID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgID;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificateList, ___tbsCertList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificateList, ___sigAlgID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificateList, ___sig) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertificateList, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificateList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificateList*, "Org.BouncyCastle.Asn1.X509", "CertificateList");
