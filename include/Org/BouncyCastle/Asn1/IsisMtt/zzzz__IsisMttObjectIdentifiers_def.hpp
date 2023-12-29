#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IsisMttObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt {
class IsisMttObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.IsisMtt::IsisMttObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(192))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt::IsisMttObjectIdentifiers*
class CORDL_TYPE IsisMttObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdIsisMtt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMtt, put = setStaticF_IdIsisMtt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMtt;

  /// @brief Field IdIsisMttCP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttCP, put = setStaticF_IdIsisMttCP))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttCP;

  /// @brief Field IdIsisMttCPAccredited, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttCPAccredited, put = setStaticF_IdIsisMttCPAccredited))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttCPAccredited;

  /// @brief Field IdIsisMttAT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttAT, put = setStaticF_IdIsisMttAT))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttAT;

  /// @brief Field IdIsisMttATDateOfCertGen, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATDateOfCertGen, put = setStaticF_IdIsisMttATDateOfCertGen))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATDateOfCertGen;

  /// @brief Field IdIsisMttATProcuration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATProcuration, put = setStaticF_IdIsisMttATProcuration))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATProcuration;

  /// @brief Field IdIsisMttATAdmission, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATAdmission, put = setStaticF_IdIsisMttATAdmission))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATAdmission;

  /// @brief Field IdIsisMttATMonetaryLimit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATMonetaryLimit, put = setStaticF_IdIsisMttATMonetaryLimit))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATMonetaryLimit;

  /// @brief Field IdIsisMttATDeclarationOfMajority, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATDeclarationOfMajority,
                             put = setStaticF_IdIsisMttATDeclarationOfMajority))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATDeclarationOfMajority;

  /// @brief Field IdIsisMttATIccsn, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATIccsn, put = setStaticF_IdIsisMttATIccsn))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATIccsn;

  /// @brief Field IdIsisMttATPKReference, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATPKReference, put = setStaticF_IdIsisMttATPKReference))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATPKReference;

  /// @brief Field IdIsisMttATRestriction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATRestriction, put = setStaticF_IdIsisMttATRestriction))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATRestriction;

  /// @brief Field IdIsisMttATRetrieveIfAllowed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATRetrieveIfAllowed, put = setStaticF_IdIsisMttATRetrieveIfAllowed))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATRetrieveIfAllowed;

  /// @brief Field IdIsisMttATRequestedCertificate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATRequestedCertificate,
                             put = setStaticF_IdIsisMttATRequestedCertificate))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATRequestedCertificate;

  /// @brief Field IdIsisMttATNamingAuthorities, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATNamingAuthorities, put = setStaticF_IdIsisMttATNamingAuthorities))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATNamingAuthorities;

  /// @brief Field IdIsisMttATCertInDirSince, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATCertInDirSince, put = setStaticF_IdIsisMttATCertInDirSince))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATCertInDirSince;

  /// @brief Field IdIsisMttATCertHash, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATCertHash, put = setStaticF_IdIsisMttATCertHash))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATCertHash;

  /// @brief Field IdIsisMttATNameAtBirth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATNameAtBirth, put = setStaticF_IdIsisMttATNameAtBirth))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATNameAtBirth;

  /// @brief Field IdIsisMttATAdditionalInformation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATAdditionalInformation,
                             put = setStaticF_IdIsisMttATAdditionalInformation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATAdditionalInformation;

  /// @brief Field IdIsisMttATLiabilityLimitationFlag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIsisMttATLiabilityLimitationFlag,
                             put = setStaticF_IdIsisMttATLiabilityLimitationFlag))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIsisMttATLiabilityLimitationFlag;

  static inline void setStaticF_IdIsisMtt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMtt();

  static inline void setStaticF_IdIsisMttCP(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttCP();

  static inline void setStaticF_IdIsisMttCPAccredited(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttCPAccredited();

  static inline void setStaticF_IdIsisMttAT(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttAT();

  static inline void setStaticF_IdIsisMttATDateOfCertGen(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATDateOfCertGen();

  static inline void setStaticF_IdIsisMttATProcuration(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATProcuration();

  static inline void setStaticF_IdIsisMttATAdmission(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATAdmission();

  static inline void setStaticF_IdIsisMttATMonetaryLimit(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATMonetaryLimit();

  static inline void setStaticF_IdIsisMttATDeclarationOfMajority(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATDeclarationOfMajority();

  static inline void setStaticF_IdIsisMttATIccsn(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATIccsn();

  static inline void setStaticF_IdIsisMttATPKReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATPKReference();

  static inline void setStaticF_IdIsisMttATRestriction(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATRestriction();

  static inline void setStaticF_IdIsisMttATRetrieveIfAllowed(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATRetrieveIfAllowed();

  static inline void setStaticF_IdIsisMttATRequestedCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATRequestedCertificate();

  static inline void setStaticF_IdIsisMttATNamingAuthorities(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATNamingAuthorities();

  static inline void setStaticF_IdIsisMttATCertInDirSince(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATCertInDirSince();

  static inline void setStaticF_IdIsisMttATCertHash(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATCertHash();

  static inline void setStaticF_IdIsisMttATNameAtBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATNameAtBirth();

  static inline void setStaticF_IdIsisMttATAdditionalInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATAdditionalInformation();

  static inline void setStaticF_IdIsisMttATLiabilityLimitationFlag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATLiabilityLimitationFlag();

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xf05814 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IsisMttObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsisMttObjectIdentifiers(IsisMttObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsisMttObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsisMttObjectIdentifiers(IsisMttObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsisMttObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::IsisMttObjectIdentifiers*, "Org.BouncyCastle.Asn1.IsisMtt", "IsisMttObjectIdentifiers");
