#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsBlockCipher)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsBlockCipher
class CORDL_TYPE TlsBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ReadMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac* ReadMac;

  __declspec(property(get = get_WriteMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac* WriteMac;

  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field decryptCipher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_decryptCipher, put = __cordl_internal_set_decryptCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* decryptCipher;

  /// @brief Field encryptCipher, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptCipher, put = __cordl_internal_set_encryptCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* encryptCipher;

  /// @brief Field encryptThenMac, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_encryptThenMac, put = __cordl_internal_set_encryptThenMac)) bool encryptThenMac;

  /// @brief Field mReadMac, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadMac, put = __cordl_internal_set_mReadMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac* mReadMac;

  /// @brief Field mWriteMac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteMac, put = __cordl_internal_set_mWriteMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac* mWriteMac;

  /// @brief Field randomData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_randomData, put = __cordl_internal_set_randomData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> randomData;

  /// @brief Field useExplicitIV, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_useExplicitIV, put = __cordl_internal_set_useExplicitIV)) bool useExplicitIV;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  /// @brief Method CheckPaddingConstantTime, addr 0x3379650, size 0x1b0, virtual true, abstract: false, final false
  inline int32_t CheckPaddingConstantTime(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t blockSize, int32_t macSize);

  /// @brief Method ChooseExtraPadBlocks, addr 0x3379800, size 0xa8, virtual true, abstract: false, final false
  inline int32_t ChooseExtraPadBlocks(::Org::BouncyCastle::Security::SecureRandom* r, int32_t max);

  /// @brief Method DecodeCiphertext, addr 0x33791a4, size 0x4ac, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  /// @brief Method EncodePlaintext, addr 0x3378b40, size 0x664, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method GetPlaintextLimit, addr 0x3378a30, size 0x110, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  /// @brief Method LowestBitSet, addr 0x33798a8, size 0x28, virtual true, abstract: false, final false
  inline int32_t LowestBitSet(int32_t x);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IBlockCipher* clientWriteCipher,
                                                                           ::Org::BouncyCastle::Crypto::IBlockCipher* serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                           ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_context() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_context();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_decryptCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_decryptCipher();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_encryptCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_encryptCipher();

  constexpr bool const& __cordl_internal_get_encryptThenMac() const;

  constexpr bool& __cordl_internal_get_encryptThenMac();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& __cordl_internal_get_mReadMac() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __cordl_internal_get_mReadMac();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& __cordl_internal_get_mWriteMac() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __cordl_internal_get_mWriteMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_randomData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_randomData();

  constexpr bool const& __cordl_internal_get_useExplicitIV() const;

  constexpr bool& __cordl_internal_get_useExplicitIV();

  constexpr void __cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_decryptCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_encryptCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_encryptThenMac(bool value);

  constexpr void __cordl_internal_set_mReadMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  constexpr void __cordl_internal_set_mWriteMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  constexpr void __cordl_internal_set_randomData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_useExplicitIV(bool value);

  /// @brief Method .ctor, addr 0x3377e84, size 0xbac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IBlockCipher* clientWriteCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* serverWriteCipher,
                    ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize);

  /// @brief Method get_ReadMac, addr 0x3377e7c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* get_ReadMac();

  /// @brief Method get_WriteMac, addr 0x3377e74, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* get_WriteMac();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsBlockCipher(TlsBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsBlockCipher(TlsBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1288 };

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field randomData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___randomData;

  /// @brief Field useExplicitIV, offset: 0x20, size: 0x1, def value: None
  bool ___useExplicitIV;

  /// @brief Field encryptThenMac, offset: 0x21, size: 0x1, def value: None
  bool ___encryptThenMac;

  /// @brief Field encryptCipher, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___encryptCipher;

  /// @brief Field decryptCipher, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___decryptCipher;

  /// @brief Field mWriteMac, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___mWriteMac;

  /// @brief Field mReadMac, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___mReadMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___randomData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___useExplicitIV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___encryptThenMac) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___encryptCipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___decryptCipher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___mWriteMac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, ___mReadMac) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsBlockCipher");
