#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BC/LinkedCertificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(LinkedCertificate)
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::BC {
class LinkedCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BC::LinkedCertificate);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::BC {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BC.LinkedCertificate
class CORDL_TYPE LinkedCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CACerts)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* CACerts;

  __declspec(property(get = get_CertIssuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* CertIssuer;

  __declspec(property(get = get_CertLocation)) ::Org::BouncyCastle::Asn1::X509::GeneralName* CertLocation;

  __declspec(property(get = get_Digest)) ::Org::BouncyCastle::Asn1::X509::DigestInfo* Digest;

  /// @brief Field mCACerts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mCACerts, put = __cordl_internal_set_mCACerts)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* mCACerts;

  /// @brief Field mCertIssuer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertIssuer, put = __cordl_internal_set_mCertIssuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* mCertIssuer;

  /// @brief Field mCertLocation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertLocation, put = __cordl_internal_set_mCertLocation)) ::Org::BouncyCastle::Asn1::X509::GeneralName* mCertLocation;

  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Asn1::X509::DigestInfo* mDigest;

  /// @brief Method GetInstance, addr 0x22f2eb4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation);

  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation,
                                                                           ::Org::BouncyCastle::Asn1::X509::X509Name* certIssuer, ::Org::BouncyCastle::Asn1::X509::GeneralNames* caCerts);

  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f2f78, size 0x14c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& __cordl_internal_get_mCACerts() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_mCACerts();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_mCertIssuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_mCertIssuer();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_mCertLocation() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_mCertLocation();

  constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo* const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo*& __cordl_internal_get_mDigest();

  constexpr void __cordl_internal_set_mCACerts(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_mCertIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_mCertLocation(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Asn1::X509::DigestInfo* value);

  /// @brief Method .ctor, addr 0x22f2c80, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation);

  /// @brief Method .ctor, addr 0x22f2cb0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation, ::Org::BouncyCastle::Asn1::X509::X509Name* certIssuer,
                    ::Org::BouncyCastle::Asn1::X509::GeneralNames* caCerts);

  /// @brief Method .ctor, addr 0x22f2cf0, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CACerts, addr 0x22f2f70, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_CACerts();

  /// @brief Method get_CertIssuer, addr 0x22f2f68, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_CertIssuer();

  /// @brief Method get_CertLocation, addr 0x22f2f60, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_CertLocation();

  /// @brief Method get_Digest, addr 0x22f2f58, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* get_Digest();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedCertificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedCertificate(LinkedCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedCertificate(LinkedCertificate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8 };

  /// @brief Field mDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DigestInfo* ___mDigest;

  /// @brief Field mCertLocation, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___mCertLocation;

  /// @brief Field mCertIssuer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___mCertIssuer;

  /// @brief Field mCACerts, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___mCACerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::BC::LinkedCertificate, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BC::LinkedCertificate, ___mCertLocation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BC::LinkedCertificate, ___mCertIssuer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BC::LinkedCertificate, ___mCACerts) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BC::LinkedCertificate, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::BC
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BC::LinkedCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BC::LinkedCertificate*, "Org.BouncyCastle.Asn1.BC", "LinkedCertificate");
