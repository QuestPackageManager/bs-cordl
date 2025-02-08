#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPbeEncryptedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPbeEncryptedData)
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SymmetricKeyEncSessionPacket;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPbeEncryptedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData);
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPbeEncryptedData
class CORDL_TYPE PgpPbeEncryptedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData {
public:
  // Declarations
  /// @brief Field keyData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyData, put = __cordl_internal_set_keyData)) ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData;

  /// @brief Method CreateStreamCipher, addr 0x2532e38, size 0x134, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBufferedCipher* CreateStreamCipher(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag keyAlgorithm);

  /// @brief Method DoGetDataStream, addr 0x2532588, size 0x878, virtual false, abstract: false, final false
  inline ::System::IO::Stream* DoGetDataStream(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method GetDataStream, addr 0x253255c, size 0x2c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStream(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method GetDataStreamRaw, addr 0x2532e30, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStreamRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method GetDataStreamUtf8, addr 0x2532e00, size 0x30, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStreamUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method GetInputStream, addr 0x2532540, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData,
                                                                                  ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* const& __cordl_internal_get_keyData() const;

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*& __cordl_internal_get_keyData();

  constexpr void __cordl_internal_set_keyData(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* value);

  /// @brief Method .ctor, addr 0x252d690, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPbeEncryptedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPbeEncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPbeEncryptedData(PgpPbeEncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPbeEncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPbeEncryptedData(PgpPbeEncryptedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1657 };

  /// @brief Field keyData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* ___keyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData, ___keyData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPbeEncryptedData");
