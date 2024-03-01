#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509ObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X509::X509ObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509ObjectIdentifiers*
class CORDL_TYPE X509ObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field CommonName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CommonName, put = setStaticF_CommonName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CommonName;

  /// @brief Field CountryName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountryName, put = setStaticF_CountryName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CountryName;

  /// @brief Field CrlAccessMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CrlAccessMethod, put = setStaticF_CrlAccessMethod))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlAccessMethod;

  /// @brief Field IdAD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdAD, put = setStaticF_IdAD))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdAD;

  /// @brief Field IdADCAIssuers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdADCAIssuers, put = setStaticF_IdADCAIssuers))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdADCAIssuers;

  /// @brief Field IdADOcsp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdADOcsp, put = setStaticF_IdADOcsp))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdADOcsp;

  /// @brief Field IdEARsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdEARsa, put = setStaticF_IdEARsa))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEARsa;

  /// @brief Field IdPE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdPE, put = setStaticF_IdPE))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdPE;

  /// @brief Field IdPkix, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdPkix, put = setStaticF_IdPkix))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdPkix;

  /// @brief Field IdSha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSha1, put = setStaticF_IdSha1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha1;

  /// @brief Field LocalityName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LocalityName, put = setStaticF_LocalityName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* LocalityName;

  /// @brief Field OcspAccessMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OcspAccessMethod, put = setStaticF_OcspAccessMethod))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OcspAccessMethod;

  /// @brief Field Organization, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Organization, put = setStaticF_Organization))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Organization;

  /// @brief Field OrganizationalUnitName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OrganizationalUnitName, put = setStaticF_OrganizationalUnitName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OrganizationalUnitName;

  /// @brief Field RipeMD160, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RipeMD160, put = setStaticF_RipeMD160))::Org::BouncyCastle::Asn1::DerObjectIdentifier* RipeMD160;

  /// @brief Field RipeMD160WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RipeMD160WithRsaEncryption, put = setStaticF_RipeMD160WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* RipeMD160WithRsaEncryption;

  /// @brief Field StateOrProvinceName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateOrProvinceName, put = setStaticF_StateOrProvinceName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* StateOrProvinceName;

  /// @brief Field id_at_name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_at_name, put = setStaticF_id_at_name))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_at_name;

  /// @brief Field id_at_organizationIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_at_organizationIdentifier, put = setStaticF_id_at_organizationIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_at_organizationIdentifier;

  /// @brief Field id_at_telephoneNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_at_telephoneNumber, put = setStaticF_id_at_telephoneNumber))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_at_telephoneNumber;

  static inline ::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x1217b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CommonName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CountryName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlAccessMethod();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAD();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADCAIssuers();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADOcsp();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEARsa();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPE();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdPkix();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_LocalityName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OcspAccessMethod();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Organization();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OrganizationalUnitName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD160();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RipeMD160WithRsaEncryption();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_StateOrProvinceName();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_at_name();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_at_organizationIdentifier();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_at_telephoneNumber();

  static inline void setStaticF_CommonName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CountryName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CrlAccessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdAD(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdADCAIssuers(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdADOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdEARsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdPE(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdPkix(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_LocalityName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_OcspAccessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Organization(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_OrganizationalUnitName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RipeMD160WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_StateOrProvinceName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_at_name(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_at_organizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_id_at_telephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ObjectIdentifiers(X509ObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ObjectIdentifiers(X509ObjectIdentifiers const&) = delete;

  /// @brief Field ID offset 0xffffffff size 0x8
  static constexpr ::ConstString _cordl_ID{ u"2.5.4" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers*, "Org.BouncyCastle.Asn1.X509", "X509ObjectIdentifiers");
