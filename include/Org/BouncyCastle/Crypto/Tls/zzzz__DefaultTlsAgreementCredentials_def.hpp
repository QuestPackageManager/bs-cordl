#pragma once
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
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsAgreementCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsAgreementCredentials
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1159))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1208))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsAgreementCredentials*
class CORDL_TYPE DefaultTlsAgreementCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials {
public:
  // Declarations
  /// @brief Field mCertificate, offset 0x10, size 0x8
  __declspec(property(get = __get_mCertificate, put = __set_mCertificate))::Org::BouncyCastle::Crypto::Tls::Certificate* mCertificate;

  /// @brief Field mPrivateKey, offset 0x18, size 0x8
  __declspec(property(get = __get_mPrivateKey, put = __set_mPrivateKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mPrivateKey;

  /// @brief Field mBasicAgreement, offset 0x20, size 0x8
  __declspec(property(get = __get_mBasicAgreement, put = __set_mBasicAgreement))::Org::BouncyCastle::Crypto::IBasicAgreement* mBasicAgreement;

  /// @brief Field mTruncateAgreement, offset 0x28, size 0x1
  __declspec(property(get = __get_mTruncateAgreement, put = __set_mTruncateAgreement)) bool mTruncateAgreement;

  __declspec(property(get = get_Certificate))::Org::BouncyCastle::Crypto::Tls::Certificate* Certificate;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __get_mCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __get_mCertificate() const;

  constexpr void __set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_mPrivateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_mPrivateKey() const;

  constexpr void __set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& __get_mBasicAgreement();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBasicAgreement*> const& __get_mBasicAgreement() const;

  constexpr void __set_mBasicAgreement(::Org::BouncyCastle::Crypto::IBasicAgreement* value);

  constexpr bool& __get_mTruncateAgreement();

  constexpr bool const& __get_mTruncateAgreement() const;

  constexpr void __set_mTruncateAgreement(bool value);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials* New_ctor(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                                           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method .ctor addr 0xf62d1c size 0x2d4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method get_Certificate addr 0xf62ff0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate();

  /// @brief Method GenerateAgreement addr 0xf62ff8 size 0x1b0 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateAgreement(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* peerPublicKey);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsAgreementCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsAgreementCredentials(DefaultTlsAgreementCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsAgreementCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsAgreementCredentials(DefaultTlsAgreementCredentials const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsAgreementCredentials();

public:
  /// @brief Field mCertificate, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mCertificate;

  /// @brief Field mPrivateKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___mPrivateKey;

  /// @brief Field mBasicAgreement, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBasicAgreement* ___mBasicAgreement;

  /// @brief Field mTruncateAgreement, offset: 0x28, size: 0x1, def value: None
  bool ___mTruncateAgreement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsAgreementCredentials");
