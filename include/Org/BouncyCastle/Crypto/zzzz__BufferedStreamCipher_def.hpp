#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/BufferedStreamCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStreamCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedStreamCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::BufferedStreamCipher);
// Dependencies Org.BouncyCastle.Crypto.BufferedCipherBase
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.BufferedStreamCipher
class CORDL_TYPE BufferedStreamCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IStreamCipher* cipher;

  /// @brief Method DoFinal, addr 0x244a518, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal();

  /// @brief Method DoFinal, addr 0x244a588, size 0xb8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GetBlockSize, addr 0x244a0dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetOutputSize, addr 0x244a0e4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t inputLen);

  /// @brief Method GetUpdateOutputSize, addr 0x244a0ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t inputLen);

  /// @brief Method Init, addr 0x2449fd8, size 0x104, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::BufferedStreamCipher* New_ctor(::Org::BouncyCastle::Crypto::IStreamCipher* cipher);

  /// @brief Method ProcessByte, addr 0x244a0f4, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessByte(uint8_t input);

  /// @brief Method ProcessByte, addr 0x244a1e8, size 0x134, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x244a31c, size 0x108, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method ProcessBytes, addr 0x244a424, size 0xf4, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x244a640, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher*& __cordl_internal_get_cipher();

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IStreamCipher* value);

  /// @brief Method .ctor, addr 0x2449e80, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IStreamCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0x2449f38, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedStreamCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedStreamCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedStreamCipher(BufferedStreamCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedStreamCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedStreamCipher(BufferedStreamCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1345 };

  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IStreamCipher* ___cipher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedStreamCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::BufferedStreamCipher, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedStreamCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedStreamCipher*, "Org.BouncyCastle.Crypto", "BufferedStreamCipher");
