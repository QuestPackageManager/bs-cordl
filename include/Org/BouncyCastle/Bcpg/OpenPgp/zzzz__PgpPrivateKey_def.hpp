#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPrivateKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPrivateKey)
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPrivateKey
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPrivateKey*
class CORDL_TYPE PgpPrivateKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Key;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_PublicKeyPacket))::Org::BouncyCastle::Bcpg::PublicKeyPacket* PublicKeyPacket;

  /// @brief Field keyID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyID, put = __cordl_internal_set_keyID)) int64_t keyID;

  /// @brief Field privateKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey;

  /// @brief Field publicKeyPacket, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKeyPacket, put = __cordl_internal_set_publicKeyPacket))::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicKeyPacket;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* New_ctor(int64_t keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicKeyPacket,
                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  constexpr int64_t const& __cordl_internal_get_keyID() const;

  constexpr int64_t& __cordl_internal_get_keyID();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_privateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& __cordl_internal_get_publicKeyPacket();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::PublicKeyPacket*> const& __cordl_internal_get_publicKeyPacket() const;

  constexpr void __cordl_internal_set_keyID(int64_t value);

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_publicKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value);

  /// @brief Method .ctor, addr 0x1317e6c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int64_t keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method get_Key, addr 0x131ceac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Key();

  /// @brief Method get_KeyId, addr 0x131ce9c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_PublicKeyPacket, addr 0x131cea4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* get_PublicKeyPacket();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPrivateKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPrivateKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPrivateKey(PgpPrivateKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPrivateKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPrivateKey(PgpPrivateKey const&) = delete;

  /// @brief Field keyID, offset: 0x10, size: 0x8, def value: None
  int64_t ___keyID;

  /// @brief Field publicKeyPacket, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyPacket* ___publicKeyPacket;

  /// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___privateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, ___keyID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, ___publicKeyPacket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, ___privateKey) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPrivateKey");
