#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpKeyPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpKeyPair)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyPair
class CORDL_TYPE PgpKeyPair : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_PrivateKey)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* PrivateKey;

  __declspec(property(get = get_PublicKey)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* PublicKey;

  /// @brief Field priv, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_priv, put = __cordl_internal_set_priv)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv;

  /// @brief Field pub, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pub, put = __cordl_internal_set_pub)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* keyPair,
                                                                         ::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* const& __cordl_internal_get_priv() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& __cordl_internal_get_priv();

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* const& __cordl_internal_get_pub() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& __cordl_internal_get_pub();

  constexpr void __cordl_internal_set_priv(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value);

  constexpr void __cordl_internal_set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value);

  /// @brief Method .ctor, addr 0x252d450, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* keyPair, ::System::DateTime time);

  /// @brief Method .ctor, addr 0x252d470, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time);

  /// @brief Method .ctor, addr 0x252dab0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv);

  /// @brief Method get_KeyId, addr 0x252dadc, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_PrivateKey, addr 0x252db00, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* get_PrivateKey();

  /// @brief Method get_PublicKey, addr 0x252daf8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* get_PublicKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyPair(PgpKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyPair(PgpKeyPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1646 };

  /// @brief Field pub, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ___pub;

  /// @brief Field priv, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ___priv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ___pub) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ___priv) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyPair");
