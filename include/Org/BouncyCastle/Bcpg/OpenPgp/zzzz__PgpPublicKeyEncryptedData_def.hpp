#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKeyEncryptedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPublicKeyEncryptedData)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyEncSessionPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyEncryptedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData);
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKeyEncryptedData
class CORDL_TYPE PgpPublicKeyEncryptedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData {
public:
  // Declarations
  __declspec(property(get = get_KeyId)) int64_t KeyId;

  /// @brief Field keyData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyData, put = __cordl_internal_set_keyData)) ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData;

  /// @brief Method ConfirmCheckSum, addr 0x2536f60, size 0xa0, virtual false, abstract: false, final false
  inline bool ConfirmCheckSum(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo);

  /// @brief Method GetDataStream, addr 0x25377fc, size 0x740, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStream(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey);

  /// @brief Method GetKeyCipher, addr 0x2536d28, size 0x238, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* GetKeyCipher(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm);

  /// @brief Method GetSymmetricAlgorithm, addr 0x253701c, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag GetSymmetricAlgorithm(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData,
                                                                                        ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

  /// @brief Method ProcessEncodedMpi, addr 0x2538428, size 0x198, virtual false, abstract: false, final false
  static inline void ProcessEncodedMpi(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher, int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> mpiEnc);

  /// @brief Method RecoverSessionData, addr 0x2537044, size 0x7b8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RecoverSessionData(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* const& __cordl_internal_get_keyData() const;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*& __cordl_internal_get_keyData();

  constexpr void __cordl_internal_set_keyData(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* value);

  /// @brief Method .ctor, addr 0x2536cfc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

  /// @brief Method get_KeyId, addr 0x2537000, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKeyEncryptedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyEncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKeyEncryptedData(PgpPublicKeyEncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyEncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKeyEncryptedData(PgpPublicKeyEncryptedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1660 };

  /// @brief Field keyData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* ___keyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData, ___keyData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyEncryptedData");
