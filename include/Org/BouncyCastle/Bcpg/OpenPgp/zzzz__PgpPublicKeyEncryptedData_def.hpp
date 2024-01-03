#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyEncryptedData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1660))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyEncryptedData*
class CORDL_TYPE PgpPublicKeyEncryptedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData {
public:
  // Declarations
  /// @brief Field keyData, offset 0x28, size 0x8
  __declspec(property(get = __get_keyData, put = __set_keyData))::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*& __get_keyData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*> const& __get_keyData() const;

  constexpr void __set_keyData(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData,
                                                                                        ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

  /// @brief Method .ctor, addr 0x10b85b8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

  /// @brief Method GetKeyCipher, addr 0x10b85e4, size 0x248, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IBufferedCipher* GetKeyCipher(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm);

  /// @brief Method ConfirmCheckSum, addr 0x10b882c, size 0x98, virtual false, abstract: false, final false
  inline bool ConfirmCheckSum(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo);

  /// @brief Method get_KeyId, addr 0x10b88c4, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method GetSymmetricAlgorithm, addr 0x10b88e0, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag GetSymmetricAlgorithm(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey);

  /// @brief Method GetDataStream, addr 0x10b90d0, size 0x78c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStream(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey);

  /// @brief Method RecoverSessionData, addr 0x10b8908, size 0x7c8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RecoverSessionData(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey);

  /// @brief Method ProcessEncodedMpi, addr 0x10b9d58, size 0x190, virtual false, abstract: false, final false
  static inline void ProcessEncodedMpi(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher, int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> mpiEnc);

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyEncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKeyEncryptedData(PgpPublicKeyEncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyEncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKeyEncryptedData(PgpPublicKeyEncryptedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKeyEncryptedData();

public:
  /// @brief Field keyData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* ___keyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData, ___keyData) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyEncryptedData");
