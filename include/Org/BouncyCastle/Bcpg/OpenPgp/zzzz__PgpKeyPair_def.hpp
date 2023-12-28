#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpKeyPair)
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1646))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyPair*
class CORDL_TYPE PgpKeyPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field pub, offset 0x10, size 0x8
  __declspec(property(get = __get_pub, put = __set_pub))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub;

  /// @brief Field priv, offset 0x18, size 0x8
  __declspec(property(get = __get_priv, put = __set_priv))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_PublicKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* PublicKey;

  __declspec(property(get = get_PrivateKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* PrivateKey;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& __get_pub();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*> const& __get_pub() const;

  constexpr void __set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& __get_priv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*> const& __get_priv() const;

  constexpr void __set_priv(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* keyPair,
                                                                         ::System::DateTime time);

  /// @brief Method .ctor addr 0x10ad80c size 0x20 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* keyPair, ::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time);

  /// @brief Method .ctor addr 0x10ad82c size 0xd4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv);

  /// @brief Method .ctor addr 0x10ade9c size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv);

  /// @brief Method get_KeyId addr 0x10adec8 size 0x1c virtual false final false
  inline int64_t get_KeyId();

  /// @brief Method get_PublicKey addr 0x10adee4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* get_PublicKey();

  /// @brief Method get_PrivateKey addr 0x10adeec size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* get_PrivateKey();

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyPair(PgpKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyPair(PgpKeyPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyPair();

public:
  /// @brief Field pub, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ___pub;

  /// @brief Field priv, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ___priv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyPair");
