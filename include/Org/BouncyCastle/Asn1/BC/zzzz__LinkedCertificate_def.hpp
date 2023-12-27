#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(LinkedCertificate)
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::BC {
class LinkedCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BC::LinkedCertificate);
// Type: Org.BouncyCastle.Asn1.BC::LinkedCertificate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::BC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8))
// CS Name: ::Org.BouncyCastle.Asn1.BC::LinkedCertificate*
class CORDL_TYPE LinkedCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mDigest, put = __set_mDigest))::Org::BouncyCastle::Asn1::X509::DigestInfo* mDigest;

  /// @brief Field mCertLocation, offset 0x18, size 0x8
  __declspec(property(get = __get_mCertLocation, put = __set_mCertLocation))::Org::BouncyCastle::Asn1::X509::GeneralName* mCertLocation;

  /// @brief Field mCertIssuer, offset 0x20, size 0x8
  __declspec(property(get = __get_mCertIssuer, put = __set_mCertIssuer))::Org::BouncyCastle::Asn1::X509::X509Name* mCertIssuer;

  /// @brief Field mCACerts, offset 0x28, size 0x8
  __declspec(property(get = __get_mCACerts, put = __set_mCACerts))::Org::BouncyCastle::Asn1::X509::GeneralNames* mCACerts;

  __declspec(property(get = get_Digest))::Org::BouncyCastle::Asn1::X509::DigestInfo* Digest;

  __declspec(property(get = get_CertLocation))::Org::BouncyCastle::Asn1::X509::GeneralName* CertLocation;

  __declspec(property(get = get_CertIssuer))::Org::BouncyCastle::Asn1::X509::X509Name* CertIssuer;

  __declspec(property(get = get_CACerts))::Org::BouncyCastle::Asn1::X509::GeneralNames* CACerts;

  constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo*& __get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DigestInfo*> const& __get_mDigest() const;

  constexpr void __set_mDigest(::Org::BouncyCastle::Asn1::X509::DigestInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_mCertLocation();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_mCertLocation() const;

  constexpr void __set_mCertLocation(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_mCertIssuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_mCertIssuer() const;

  constexpr void __set_mCertIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __get_mCACerts();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __get_mCACerts() const;

  constexpr void __set_mCACerts(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation);

  /// @brief Method .ctor addr 0xe63584 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation);

  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation,
                                                                           ::Org::BouncyCastle::Asn1::X509::X509Name* certIssuer, ::Org::BouncyCastle::Asn1::X509::GeneralNames* caCerts);

  /// @brief Method .ctor addr 0xe635b4 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation, ::Org::BouncyCastle::Asn1::X509::X509Name* certIssuer,
                    ::Org::BouncyCastle::Asn1::X509::GeneralNames* caCerts);

  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe635f4 size 0x1c8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe637bc size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* GetInstance(::System::Object* obj);

  /// @brief Method get_Digest addr 0xe63860 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* get_Digest();

  /// @brief Method get_CertLocation addr 0xe63868 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_CertLocation();

  /// @brief Method get_CertIssuer addr 0xe63870 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_CertIssuer();

  /// @brief Method get_CACerts addr 0xe63878 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_CACerts();

  /// @brief Method ToAsn1Object addr 0xe63880 size 0x158 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "LinkedCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedCertificate(LinkedCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedCertificate(LinkedCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedCertificate();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BC::LinkedCertificate, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::BC
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BC::LinkedCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BC::LinkedCertificate*, "Org.BouncyCastle.Asn1.BC", "LinkedCertificate");
