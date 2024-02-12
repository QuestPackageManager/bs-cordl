#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsSigner)
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
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner);
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1175))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AbstractTlsSigner*
class CORDL_TYPE AbstractTlsSigner : public ::System::Object {
public:
  // Declarations
  /// @brief Field mContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSigner"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSigner*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSigner"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* i___Org__BouncyCastle__Crypto__Tls__TlsSigner() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __cordl_internal_get_mContext() const;

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  /// @brief Method Init, addr 0xf867ec, size 0x8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method GenerateRawSignature, addr 0xf867f4, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> md5AndSha1);

  /// @brief Method GenerateRawSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method VerifyRawSignature, addr 0xf86810, size 0x20, virtual true, abstract: false, final false
  inline bool VerifyRawSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> md5AndSha1);

  /// @brief Method VerifyRawSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method CreateSigner, addr 0xf86830, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateSigner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreateVerifyer, addr 0xf86848, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method CreateVerifyer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method IsValidPublicKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner* New_ctor();

  /// @brief Method .ctor, addr 0xf86860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsSigner(AbstractTlsSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsSigner(AbstractTlsSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsSigner();

public:
  /// @brief Field mContext, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner, ___mContext) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsSigner");
