#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsSignerCredentials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsSignerCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsSignerCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsSignerCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsSignerCredentials
class CORDL_TYPE DefaultTlsSignerCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials {
public:
  // Declarations
  __declspec(property(get = get_Certificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* Certificate;

  __declspec(property(get = get_SignatureAndHashAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* SignatureAndHashAlgorithm;

  /// @brief Field mCertificate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificate, put = __cordl_internal_set_mCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* mCertificate;

  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mPrivateKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPrivateKey, put = __cordl_internal_set_mPrivateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mPrivateKey;

  /// @brief Field mSignatureAndHashAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mSignatureAndHashAlgorithm,
                      put = __cordl_internal_set_mSignatureAndHashAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* mSignatureAndHashAlgorithm;

  /// @brief Field mSigner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mSigner, put = __cordl_internal_set_mSigner)) ::Org::BouncyCastle::Crypto::Tls::TlsSigner* mSigner;

  /// @brief Method GenerateCertificateSignature, addr 0x23ec7dc, size 0x238, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*
  New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                        ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                        ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& __cordl_internal_get_mCertificate() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_mCertificate();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_mContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_mPrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mPrivateKey();

  constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* const& __cordl_internal_get_mSignatureAndHashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*& __cordl_internal_get_mSignatureAndHashAlgorithm();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* const& __cordl_internal_get_mSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& __cordl_internal_get_mSigner();

  constexpr void __cordl_internal_set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_mSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* value);

  constexpr void __cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value);

  /// @brief Method .ctor, addr 0x23ec3cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method .ctor, addr 0x23ec3d4, size 0x400, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);

  /// @brief Method get_Certificate, addr 0x23ec7d4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate();

  /// @brief Method get_SignatureAndHashAlgorithm, addr 0x23eca14, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* get_SignatureAndHashAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsSignerCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSignerCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsSignerCredentials(DefaultTlsSignerCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSignerCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsSignerCredentials(DefaultTlsSignerCredentials const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1215 };

  /// @brief Field mContext, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  /// @brief Field mCertificate, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mCertificate;

  /// @brief Field mPrivateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mPrivateKey;

  /// @brief Field mSignatureAndHashAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* ___mSignatureAndHashAlgorithm;

  /// @brief Field mSigner, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSigner* ___mSigner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, ___mContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, ___mCertificate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, ___mPrivateKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, ___mSignatureAndHashAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, ___mSigner) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSignerCredentials");
