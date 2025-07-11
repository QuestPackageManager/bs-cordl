#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/Rfc6637Utilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc6637Utilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Rfc6637Utilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.Rfc6637Utilities
class CORDL_TYPE Rfc6637Utilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field ANONYMOUS_SENDER, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ANONYMOUS_SENDER, put = setStaticF_ANONYMOUS_SENDER)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ANONYMOUS_SENDER;

  /// @brief Method CreateKey, addr 0x25395c0, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyData, ::Org::BouncyCastle::Math::EC::ECPoint* s);

  /// @brief Method CreateUserKeyingMaterial, addr 0x254ed0c, size 0x268, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateUserKeyingMaterial(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyData);

  /// @brief Method GetAgreementAlgorithm, addr 0x254e9e0, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW GetAgreementAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyData);

  /// @brief Method GetKeyEncryptionOID, addr 0x254eb4c, size 0x130, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetKeyEncryptionOID(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algID);

  /// @brief Method GetKeyLength, addr 0x254ec7c, size 0x90, virtual false, abstract: false, final false
  static inline int32_t GetKeyLength(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algID);

  /// @brief Method Kdf, addr 0x254ef74, size 0x37c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Kdf(::Org::BouncyCastle::Bcpg::HashAlgorithmTag digestAlg, ::Org::BouncyCastle::Math::EC::ECPoint* s, int32_t keyLen,
                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> parameters);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities* New_ctor();

  /// @brief Method .ctor, addr 0x254e9d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ANONYMOUS_SENDER();

  static inline void setStaticF_ANONYMOUS_SENDER(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc6637Utilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc6637Utilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc6637Utilities(Rfc6637Utilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc6637Utilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc6637Utilities(Rfc6637Utilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*, "Org.BouncyCastle.Bcpg.OpenPgp", "Rfc6637Utilities");
