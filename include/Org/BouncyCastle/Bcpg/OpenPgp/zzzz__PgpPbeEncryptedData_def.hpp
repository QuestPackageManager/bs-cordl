#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPbeEncryptedData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPbeEncryptedData*
class CORDL_TYPE PgpPbeEncryptedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData {
public:
  // Declarations
  /// @brief Field keyData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyData, put = __cordl_internal_set_keyData))::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData;

  /// @brief Method CreateStreamCipher, addr 0x1222dd4, size 0x134, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBufferedCipher* CreateStreamCipher(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag keyAlgorithm);

  /// @brief Method DoGetDataStream, addr 0x12224cc, size 0x8d0, virtual false, abstract: false, final false
  inline ::System::IO::Stream* DoGetDataStream(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method GetDataStream, addr 0x12224a0, size 0x2c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStream(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method GetDataStreamRaw, addr 0x1222dcc, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStreamRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method GetDataStreamUtf8, addr 0x1222d9c, size 0x30, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStreamUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method GetInputStream, addr 0x1222484, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData,
                                                                                  ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*& __cordl_internal_get_keyData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*> const& __cordl_internal_get_keyData() const;

  constexpr void __cordl_internal_set_keyData(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* value);

  /// @brief Method .ctor, addr 0x121d4a4, size 0x30, virtual false, abstract: false, final false
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

  /// @brief Field keyData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* ___keyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData, ___keyData) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPbeEncryptedData");
