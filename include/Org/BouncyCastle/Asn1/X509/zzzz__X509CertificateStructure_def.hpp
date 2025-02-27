#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509CertificateStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateStructure)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
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
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509CertificateStructure
class CORDL_TYPE X509CertificateStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_EndDate)) ::Org::BouncyCastle::Asn1::X509::Time* EndDate;

  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_Signature)) ::Org::BouncyCastle::Asn1::DerBitString* Signature;

  __declspec(property(get = get_SignatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_StartDate)) ::Org::BouncyCastle::Asn1::X509::Time* StartDate;

  __declspec(property(get = get_Subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectPublicKeyInfo)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKeyInfo;

  __declspec(property(get = get_TbsCertificate)) ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* TbsCertificate;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sig, put = __cordl_internal_set_sig)) ::Org::BouncyCastle::Asn1::DerBitString* sig;

  /// @brief Field sigAlgID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgID, put = __cordl_internal_set_sigAlgID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;

  /// @brief Field tbsCert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsCert, put = __cordl_internal_set_tbsCert)) ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert;

  /// @brief Method GetInstance, addr 0x261a024, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x261a03c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetInstance(::System::Object* obj);

  /// @brief Method GetSignatureOctets, addr 0x261a3d0, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* New_ctor(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert,
                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID, ::Org::BouncyCastle::Asn1::DerBitString* sig);

  /// @brief Method ToAsn1Object, addr 0x261a3f0, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_sig() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_sig();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_sigAlgID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_sigAlgID();

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* const& __cordl_internal_get_tbsCert() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*& __cordl_internal_get_tbsCert();

  constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_tbsCert(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* value);

  /// @brief Method .ctor, addr 0x261a0e0, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x261a228, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID, ::Org::BouncyCastle::Asn1::DerBitString* sig);

  /// @brief Method get_EndDate, addr 0x261a36c, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_EndDate();

  /// @brief Method get_Issuer, addr 0x261a334, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_SerialNumber, addr 0x261a318, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_Signature, addr 0x261a3c8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method get_SignatureAlgorithm, addr 0x261a3c0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_StartDate, addr 0x261a350, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_StartDate();

  /// @brief Method get_Subject, addr 0x261a388, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_SubjectPublicKeyInfo, addr 0x261a3a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();

  /// @brief Method get_TbsCertificate, addr 0x261a2f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* get_TbsCertificate();

  /// @brief Method get_Version, addr 0x261a300, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateStructure(X509CertificateStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateStructure(X509CertificateStructure const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 402 };

  /// @brief Field tbsCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* ___tbsCert;

  /// @brief Field sigAlgID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgID;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, ___tbsCert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, ___sigAlgID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, ___sig) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, "Org.BouncyCastle.Asn1.X509", "X509CertificateStructure");
