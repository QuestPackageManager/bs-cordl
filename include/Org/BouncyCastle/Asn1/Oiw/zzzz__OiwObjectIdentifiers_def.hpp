#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OiwObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Oiw {
class OiwObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Oiw::OiwObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Oiw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(225))
// CS Name: ::Org.BouncyCastle.Asn1.Oiw::OiwObjectIdentifiers*
class CORDL_TYPE OiwObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field MD4WithRsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD4WithRsa, put = setStaticF_MD4WithRsa))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD4WithRsa;

  /// @brief Field MD5WithRsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD5WithRsa, put = setStaticF_MD5WithRsa))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD5WithRsa;

  /// @brief Field MD4WithRsaEncryption, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MD4WithRsaEncryption, put = setStaticF_MD4WithRsaEncryption))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MD4WithRsaEncryption;

  /// @brief Field DesEcb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEcb, put = setStaticF_DesEcb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEcb;

  /// @brief Field DesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesCbc, put = setStaticF_DesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesCbc;

  /// @brief Field DesOfb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesOfb, put = setStaticF_DesOfb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesOfb;

  /// @brief Field DesCfb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesCfb, put = setStaticF_DesCfb))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesCfb;

  /// @brief Field DesEde, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEde, put = setStaticF_DesEde))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEde;

  /// @brief Field IdSha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSha1, put = setStaticF_IdSha1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSha1;

  /// @brief Field DsaWithSha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DsaWithSha1, put = setStaticF_DsaWithSha1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DsaWithSha1;

  /// @brief Field Sha1WithRsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sha1WithRsa, put = setStaticF_Sha1WithRsa))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Sha1WithRsa;

  /// @brief Field ElGamalAlgorithm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ElGamalAlgorithm, put = setStaticF_ElGamalAlgorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ElGamalAlgorithm;

  static inline void setStaticF_MD4WithRsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4WithRsa();

  static inline void setStaticF_MD5WithRsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD5WithRsa();

  static inline void setStaticF_MD4WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MD4WithRsaEncryption();

  static inline void setStaticF_DesEcb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEcb();

  static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc();

  static inline void setStaticF_DesOfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesOfb();

  static inline void setStaticF_DesCfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCfb();

  static inline void setStaticF_DesEde(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde();

  static inline void setStaticF_IdSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha1();

  static inline void setStaticF_DsaWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha1();

  static inline void setStaticF_Sha1WithRsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Sha1WithRsa();

  static inline void setStaticF_ElGamalAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ElGamalAlgorithm();

  static inline ::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0xf855ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OiwObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OiwObjectIdentifiers(OiwObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OiwObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OiwObjectIdentifiers(OiwObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OiwObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Oiw
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers*, "Org.BouncyCastle.Asn1.Oiw", "OiwObjectIdentifiers");
