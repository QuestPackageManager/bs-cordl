#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsEncryptionCredentials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsEncryptionCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsEncryptionCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials);
// Dependencies Org.BouncyCastle.Crypto.Tls.AbstractTlsEncryptionCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsEncryptionCredentials
class CORDL_TYPE DefaultTlsEncryptionCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials {
public:
  // Declarations
  __declspec(property(get = get_Certificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* Certificate;

  /// @brief Field mCertificate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mCertificate, put = __cordl_internal_set_mCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate* mCertificate;

  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mPrivateKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPrivateKey, put = __cordl_internal_set_mPrivateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mPrivateKey;

  /// @brief Method DecryptPreMasterSecret, addr 0x23ea274, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPreMasterSecret);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*
  New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& __cordl_internal_get_mCertificate() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_mCertificate();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_mContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_mPrivateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_mPrivateKey();

  constexpr void __cordl_internal_set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x23ea04c, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method get_Certificate, addr 0x23ea26c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsEncryptionCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsEncryptionCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsEncryptionCredentials(DefaultTlsEncryptionCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsEncryptionCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsEncryptionCredentials(DefaultTlsEncryptionCredentials const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1213 };

  /// @brief Field mContext, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  /// @brief Field mCertificate, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mCertificate;

  /// @brief Field mPrivateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mPrivateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials, ___mContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials, ___mCertificate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials, ___mPrivateKey) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsEncryptionCredentials");
