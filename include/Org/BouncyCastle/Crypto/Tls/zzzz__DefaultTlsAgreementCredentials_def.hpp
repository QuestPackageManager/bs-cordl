#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsAgreementCredentials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsAgreementCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsAgreementCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsAgreementCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsAgreementCredentials
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsAgreementCredentials*
class CORDL_TYPE DefaultTlsAgreementCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials {
public:
  // Declarations
  __declspec(property(get = get_Certificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* Certificate;

  /// @brief Field mBasicAgreement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mBasicAgreement, put = __cordl_internal_set_mBasicAgreement)) ::Org::BouncyCastle::Crypto::IBasicAgreement* mBasicAgreement;

  /// @brief Field mCertificate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificate, put = __cordl_internal_set_mCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* mCertificate;

  /// @brief Field mPrivateKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mPrivateKey, put = __cordl_internal_set_mPrivateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mPrivateKey;

  /// @brief Field mTruncateAgreement, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_mTruncateAgreement, put = __cordl_internal_set_mTruncateAgreement)) bool mTruncateAgreement;

  /// @brief Method GenerateAgreement, addr 0x23a8d38, size 0x1b0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateAgreement(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* peerPublicKey);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials* New_ctor(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                                           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& __cordl_internal_get_mBasicAgreement();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBasicAgreement*> const& __cordl_internal_get_mBasicAgreement() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_mCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __cordl_internal_get_mCertificate() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_mPrivateKey() const;

  constexpr bool const& __cordl_internal_get_mTruncateAgreement() const;

  constexpr bool& __cordl_internal_get_mTruncateAgreement();

  constexpr void __cordl_internal_set_mBasicAgreement(::Org::BouncyCastle::Crypto::IBasicAgreement* value);

  constexpr void __cordl_internal_set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr void __cordl_internal_set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_mTruncateAgreement(bool value);

  /// @brief Method .ctor, addr 0x23a8a7c, size 0x2b4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method get_Certificate, addr 0x23a8d30, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsAgreementCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsAgreementCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsAgreementCredentials(DefaultTlsAgreementCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsAgreementCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsAgreementCredentials(DefaultTlsAgreementCredentials const&) = delete;

  /// @brief Field mCertificate, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mCertificate;

  /// @brief Field mPrivateKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mPrivateKey;

  /// @brief Field mBasicAgreement, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBasicAgreement* ___mBasicAgreement;

  /// @brief Field mTruncateAgreement, offset: 0x28, size: 0x1, def value: None
  bool ___mTruncateAgreement;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, ___mCertificate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, ___mPrivateKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, ___mBasicAgreement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, ___mTruncateAgreement) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsAgreementCredentials");
