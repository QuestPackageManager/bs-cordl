#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmpObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Cmp::CmpObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(20))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CmpObjectIdentifiers*
class CORDL_TYPE CmpObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field passwordBasedMac, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_passwordBasedMac, put = setStaticF_passwordBasedMac))::Org::BouncyCastle::Asn1::DerObjectIdentifier* passwordBasedMac;

  /// @brief Field dhBasedMac, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dhBasedMac, put = setStaticF_dhBasedMac))::Org::BouncyCastle::Asn1::DerObjectIdentifier* dhBasedMac;

  /// @brief Field it_caProtEncCert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_caProtEncCert, put = setStaticF_it_caProtEncCert))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_caProtEncCert;

  /// @brief Field it_signKeyPairTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_signKeyPairTypes, put = setStaticF_it_signKeyPairTypes))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_signKeyPairTypes;

  /// @brief Field it_encKeyPairTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_encKeyPairTypes, put = setStaticF_it_encKeyPairTypes))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_encKeyPairTypes;

  /// @brief Field it_preferredSymAlg, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_preferredSymAlg, put = setStaticF_it_preferredSymAlg))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_preferredSymAlg;

  /// @brief Field it_caKeyUpdateInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_caKeyUpdateInfo, put = setStaticF_it_caKeyUpdateInfo))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_caKeyUpdateInfo;

  /// @brief Field it_currentCRL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_currentCRL, put = setStaticF_it_currentCRL))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_currentCRL;

  /// @brief Field it_unsupportedOIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_unsupportedOIDs, put = setStaticF_it_unsupportedOIDs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_unsupportedOIDs;

  /// @brief Field it_keyPairParamReq, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_keyPairParamReq, put = setStaticF_it_keyPairParamReq))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_keyPairParamReq;

  /// @brief Field it_keyPairParamRep, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_keyPairParamRep, put = setStaticF_it_keyPairParamRep))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_keyPairParamRep;

  /// @brief Field it_revPassphrase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_revPassphrase, put = setStaticF_it_revPassphrase))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_revPassphrase;

  /// @brief Field it_implicitConfirm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_implicitConfirm, put = setStaticF_it_implicitConfirm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_implicitConfirm;

  /// @brief Field it_confirmWaitTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_confirmWaitTime, put = setStaticF_it_confirmWaitTime))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_confirmWaitTime;

  /// @brief Field it_origPKIMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_origPKIMessage, put = setStaticF_it_origPKIMessage))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_origPKIMessage;

  /// @brief Field it_suppLangTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_it_suppLangTags, put = setStaticF_it_suppLangTags))::Org::BouncyCastle::Asn1::DerObjectIdentifier* it_suppLangTags;

  /// @brief Field regCtrl_regToken, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_regToken, put = setStaticF_regCtrl_regToken))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_regToken;

  /// @brief Field regCtrl_authenticator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_authenticator, put = setStaticF_regCtrl_authenticator))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_authenticator;

  /// @brief Field regCtrl_pkiPublicationInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_pkiPublicationInfo, put = setStaticF_regCtrl_pkiPublicationInfo))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_pkiPublicationInfo;

  /// @brief Field regCtrl_pkiArchiveOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_pkiArchiveOptions, put = setStaticF_regCtrl_pkiArchiveOptions))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_pkiArchiveOptions;

  /// @brief Field regCtrl_oldCertID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_oldCertID, put = setStaticF_regCtrl_oldCertID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_oldCertID;

  /// @brief Field regCtrl_protocolEncrKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_protocolEncrKey, put = setStaticF_regCtrl_protocolEncrKey))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_protocolEncrKey;

  /// @brief Field regCtrl_altCertTemplate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regCtrl_altCertTemplate, put = setStaticF_regCtrl_altCertTemplate))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regCtrl_altCertTemplate;

  /// @brief Field regInfo_utf8Pairs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regInfo_utf8Pairs, put = setStaticF_regInfo_utf8Pairs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regInfo_utf8Pairs;

  /// @brief Field regInfo_certReq, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_regInfo_certReq, put = setStaticF_regInfo_certReq))::Org::BouncyCastle::Asn1::DerObjectIdentifier* regInfo_certReq;

  /// @brief Field ct_encKeyWithID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ct_encKeyWithID, put = setStaticF_ct_encKeyWithID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ct_encKeyWithID;

  static inline void setStaticF_passwordBasedMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_passwordBasedMac();

  static inline void setStaticF_dhBasedMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dhBasedMac();

  static inline void setStaticF_it_caProtEncCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_caProtEncCert();

  static inline void setStaticF_it_signKeyPairTypes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_signKeyPairTypes();

  static inline void setStaticF_it_encKeyPairTypes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_encKeyPairTypes();

  static inline void setStaticF_it_preferredSymAlg(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_preferredSymAlg();

  static inline void setStaticF_it_caKeyUpdateInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_caKeyUpdateInfo();

  static inline void setStaticF_it_currentCRL(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_currentCRL();

  static inline void setStaticF_it_unsupportedOIDs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_unsupportedOIDs();

  static inline void setStaticF_it_keyPairParamReq(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_keyPairParamReq();

  static inline void setStaticF_it_keyPairParamRep(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_keyPairParamRep();

  static inline void setStaticF_it_revPassphrase(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_revPassphrase();

  static inline void setStaticF_it_implicitConfirm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_implicitConfirm();

  static inline void setStaticF_it_confirmWaitTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_confirmWaitTime();

  static inline void setStaticF_it_origPKIMessage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_origPKIMessage();

  static inline void setStaticF_it_suppLangTags(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_it_suppLangTags();

  static inline void setStaticF_regCtrl_regToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_regToken();

  static inline void setStaticF_regCtrl_authenticator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_authenticator();

  static inline void setStaticF_regCtrl_pkiPublicationInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_pkiPublicationInfo();

  static inline void setStaticF_regCtrl_pkiArchiveOptions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_pkiArchiveOptions();

  static inline void setStaticF_regCtrl_oldCertID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_oldCertID();

  static inline void setStaticF_regCtrl_protocolEncrKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_protocolEncrKey();

  static inline void setStaticF_regCtrl_altCertTemplate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regCtrl_altCertTemplate();

  static inline void setStaticF_regInfo_utf8Pairs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regInfo_utf8Pairs();

  static inline void setStaticF_regInfo_certReq(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_regInfo_certReq();

  static inline void setStaticF_ct_encKeyWithID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ct_encKeyWithID();

  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xdf1aac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CmpObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmpObjectIdentifiers(CmpObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmpObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmpObjectIdentifiers(CmpObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmpObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers*, "Org.BouncyCastle.Asn1.Cmp", "CmpObjectIdentifiers");
