#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateStructure)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure);
// Type: Org.BouncyCastle.Asn1.X509::X509CertificateStructure
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(402))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509CertificateStructure*
class CORDL_TYPE X509CertificateStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field tbsCert, offset 0x10, size 0x8
  __declspec(property(get = __get_tbsCert, put = __set_tbsCert))::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert;

  /// @brief Field sigAlgID, offset 0x18, size 0x8
  __declspec(property(get = __get_sigAlgID, put = __set_sigAlgID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __get_sig, put = __set_sig))::Org::BouncyCastle::Asn1::DerBitString* sig;

  __declspec(property(get = get_TbsCertificate))::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* TbsCertificate;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_StartDate))::Org::BouncyCastle::Asn1::X509::Time* StartDate;

  __declspec(property(get = get_EndDate))::Org::BouncyCastle::Asn1::X509::Time* EndDate;

  __declspec(property(get = get_Subject))::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectPublicKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKeyInfo;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::DerBitString* Signature;

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*& __get_tbsCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*> const& __get_tbsCert() const;

  constexpr void __set_tbsCert(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_sigAlgID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_sigAlgID() const;

  constexpr void __set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_sig() const;

  constexpr void __set_sig(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance addr 0x119d338 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x119d350 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* New_ctor(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert,
                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID, ::Org::BouncyCastle::Asn1::DerBitString* sig);

  /// @brief Method .ctor addr 0x119d540 size 0xdc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID, ::Org::BouncyCastle::Asn1::DerBitString* sig);

  static inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x119d3f4 size 0x14c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_TbsCertificate addr 0x119d61c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* get_TbsCertificate();

  /// @brief Method get_Version addr 0x119d624 size 0x18 virtual false final false
  inline int32_t get_Version();

  /// @brief Method get_SerialNumber addr 0x119d63c size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_Issuer addr 0x119d658 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_StartDate addr 0x119d674 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_StartDate();

  /// @brief Method get_EndDate addr 0x119d690 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_EndDate();

  /// @brief Method get_Subject addr 0x119d6ac size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_SubjectPublicKeyInfo addr 0x119d6c8 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();

  /// @brief Method get_SignatureAlgorithm addr 0x119d6e4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_Signature addr 0x119d6ec size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method GetSignatureOctets addr 0x119d6f4 size 0x20 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method ToAsn1Object addr 0x119d714 size 0x11c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateStructure(X509CertificateStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateStructure(X509CertificateStructure const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateStructure();

public:
  /// @brief Field tbsCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* ___tbsCert;

  /// @brief Field sigAlgID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgID;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, "Org.BouncyCastle.Asn1.X509", "X509CertificateStructure");
