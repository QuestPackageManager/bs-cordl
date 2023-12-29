#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CrmfObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CrmfObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Crmf::CrmfObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(110))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CrmfObjectIdentifiers*
class CORDL_TYPE CrmfObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field id_pkix, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_pkix, put = setStaticF_id_pkix))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_pkix;

  /// @brief Field id_pkip, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_pkip, put = setStaticF_id_pkip))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_pkip;

  /// @brief Field id_regCtrl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_regCtrl, put = setStaticF_id_regCtrl))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_regCtrl;

  /// @brief Field id_regCtrl_regToken, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_regCtrl_regToken, put = setStaticF_id_regCtrl_regToken))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_regCtrl_regToken;

  /// @brief Field id_regCtrl_authenticator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_regCtrl_authenticator, put = setStaticF_id_regCtrl_authenticator))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_regCtrl_authenticator;

  /// @brief Field id_regCtrl_pkiPublicationInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_regCtrl_pkiPublicationInfo,
                             put = setStaticF_id_regCtrl_pkiPublicationInfo))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_regCtrl_pkiPublicationInfo;

  /// @brief Field id_regCtrl_pkiArchiveOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_regCtrl_pkiArchiveOptions, put = setStaticF_id_regCtrl_pkiArchiveOptions))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_regCtrl_pkiArchiveOptions;

  /// @brief Field id_ct_encKeyWithID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_ct_encKeyWithID, put = setStaticF_id_ct_encKeyWithID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_ct_encKeyWithID;

  static inline void setStaticF_id_pkix(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_pkix();

  static inline void setStaticF_id_pkip(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_pkip();

  static inline void setStaticF_id_regCtrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl();

  static inline void setStaticF_id_regCtrl_regToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_regToken();

  static inline void setStaticF_id_regCtrl_authenticator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_authenticator();

  static inline void setStaticF_id_regCtrl_pkiPublicationInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_pkiPublicationInfo();

  static inline void setStaticF_id_regCtrl_pkiArchiveOptions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_regCtrl_pkiArchiveOptions();

  static inline void setStaticF_id_ct_encKeyWithID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ct_encKeyWithID();

  static inline ::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xe1095c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CrmfObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrmfObjectIdentifiers(CrmfObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrmfObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrmfObjectIdentifiers(CrmfObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrmfObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers*, "Org.BouncyCastle.Asn1.Crmf", "CrmfObjectIdentifiers");
