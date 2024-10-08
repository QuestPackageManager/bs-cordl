#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/EsfAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EsfAttributes)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class EsfAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::EsfAttributes);
// Type: Org.BouncyCastle.Asn1.Esf::EsfAttributes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::EsfAttributes*
class CORDL_TYPE EsfAttributes : public ::System::Object {
public:
  // Declarations
  /// @brief Field ArchiveTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ArchiveTimestamp, put = setStaticF_ArchiveTimestamp)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ArchiveTimestamp;

  /// @brief Field ArchiveTimestampV2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ArchiveTimestampV2, put = setStaticF_ArchiveTimestampV2)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ArchiveTimestampV2;

  /// @brief Field CertCrlTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CertCrlTimestamp, put = setStaticF_CertCrlTimestamp)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertCrlTimestamp;

  /// @brief Field CertValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CertValues, put = setStaticF_CertValues)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertValues;

  /// @brief Field CertificateRefs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CertificateRefs, put = setStaticF_CertificateRefs)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificateRefs;

  /// @brief Field CommitmentType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CommitmentType, put = setStaticF_CommitmentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CommitmentType;

  /// @brief Field ContentTimestamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ContentTimestamp, put = setStaticF_ContentTimestamp)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentTimestamp;

  /// @brief Field EscTimeStamp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EscTimeStamp, put = setStaticF_EscTimeStamp)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* EscTimeStamp;

  /// @brief Field OtherSigCert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OtherSigCert, put = setStaticF_OtherSigCert)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* OtherSigCert;

  /// @brief Field RevocationRefs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevocationRefs, put = setStaticF_RevocationRefs)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* RevocationRefs;

  /// @brief Field RevocationValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevocationValues, put = setStaticF_RevocationValues)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* RevocationValues;

  /// @brief Field SigPolicyId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SigPolicyId, put = setStaticF_SigPolicyId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SigPolicyId;

  /// @brief Field SignerAttr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignerAttr, put = setStaticF_SignerAttr)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignerAttr;

  /// @brief Field SignerLocation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignerLocation, put = setStaticF_SignerLocation)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignerLocation;

  static inline ::Org::BouncyCastle::Asn1::Esf::EsfAttributes* New_ctor();

  /// @brief Method .ctor, addr 0x22e069c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ArchiveTimestamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ArchiveTimestampV2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertCrlTimestamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertValues();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificateRefs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CommitmentType();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ContentTimestamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EscTimeStamp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OtherSigCert();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RevocationRefs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RevocationValues();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SigPolicyId();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignerAttr();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SignerLocation();

  static inline void setStaticF_ArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ArchiveTimestampV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_EscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_OtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SigPolicyId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EsfAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EsfAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EsfAttributes(EsfAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EsfAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EsfAttributes(EsfAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 144 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::EsfAttributes, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::EsfAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::EsfAttributes*, "Org.BouncyCastle.Asn1.Esf", "EsfAttributes");
