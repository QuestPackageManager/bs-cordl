#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/TrustAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrustAnchor)
namespace Org::BouncyCastle::Asn1::X509 {
class NameConstraints;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::TrustAnchor);
// Type: Org.BouncyCastle.Pkix::TrustAnchor
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::TrustAnchor*
class CORDL_TYPE TrustAnchor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CA))::Org::BouncyCastle::Asn1::X509::X509Name* CA;

  __declspec(property(get = get_CAName))::StringW CAName;

  __declspec(property(get = get_CAPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CAPublicKey;

  __declspec(property(get = get_GetNameConstraints))::ArrayW<uint8_t, ::Array<uint8_t>*> GetNameConstraints;

  __declspec(property(get = get_TrustedCert))::Org::BouncyCastle::X509::X509Certificate* TrustedCert;

  /// @brief Field caName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_caName, put = __cordl_internal_set_caName))::StringW caName;

  /// @brief Field caPrincipal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_caPrincipal, put = __cordl_internal_set_caPrincipal))::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal;

  /// @brief Field nc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nc, put = __cordl_internal_set_nc))::Org::BouncyCastle::Asn1::X509::NameConstraints* nc;

  /// @brief Field ncBytes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ncBytes, put = __cordl_internal_set_ncBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> ncBytes;

  /// @brief Field pubKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pubKey, put = __cordl_internal_set_pubKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey;

  /// @brief Field trustedCert, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_trustedCert, put = __cordl_internal_set_trustedCert))::Org::BouncyCastle::X509::X509Certificate* trustedCert;

  static inline ::Org::BouncyCastle::Pkix::TrustAnchor* New_ctor(::StringW caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints);

  static inline ::Org::BouncyCastle::Pkix::TrustAnchor* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints);

  static inline ::Org::BouncyCastle::Pkix::TrustAnchor* New_ctor(::Org::BouncyCastle::X509::X509Certificate* trustedCert, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints);

  /// @brief Method ToString, addr 0x1386828, size 0x1e8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_caName() const;

  constexpr ::StringW& __cordl_internal_get_caName();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_caPrincipal();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __cordl_internal_get_caPrincipal() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::NameConstraints*& __cordl_internal_get_nc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::NameConstraints*> const& __cordl_internal_get_nc() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ncBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ncBytes();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_pubKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_pubKey() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_trustedCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __cordl_internal_get_trustedCert() const;

  constexpr void __cordl_internal_set_caName(::StringW value);

  constexpr void __cordl_internal_set_caPrincipal(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_nc(::Org::BouncyCastle::Asn1::X509::NameConstraints* value);

  constexpr void __cordl_internal_set_ncBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_pubKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_trustedCert(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method .ctor, addr 0x1386664, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::StringW caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints);

  /// @brief Method .ctor, addr 0x1386598, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints);

  /// @brief Method .ctor, addr 0x1386454, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* trustedCert, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints);

  /// @brief Method get_CA, addr 0x13867b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_CA();

  /// @brief Method get_CAName, addr 0x13867bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CAName();

  /// @brief Method get_CAPublicKey, addr 0x13867c4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_CAPublicKey();

  /// @brief Method get_GetNameConstraints, addr 0x13867cc, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_GetNameConstraints();

  /// @brief Method get_TrustedCert, addr 0x13867ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_TrustedCert();

  /// @brief Method setNameConstraints, addr 0x13864dc, size 0xbc, virtual false, abstract: false, final false
  inline void setNameConstraints(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrustAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrustAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrustAnchor(TrustAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrustAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrustAnchor(TrustAnchor const&) = delete;

  /// @brief Field pubKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___pubKey;

  /// @brief Field caName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___caName;

  /// @brief Field caPrincipal, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___caPrincipal;

  /// @brief Field trustedCert, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___trustedCert;

  /// @brief Field ncBytes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ncBytes;

  /// @brief Field nc, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::NameConstraints* ___nc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::TrustAnchor, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::TrustAnchor, ___pubKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::TrustAnchor, ___caName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::TrustAnchor, ___caPrincipal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::TrustAnchor, ___trustedCert) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::TrustAnchor, ___ncBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::TrustAnchor, ___nc) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::TrustAnchor);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::TrustAnchor*, "Org.BouncyCastle.Pkix", "TrustAnchor");
