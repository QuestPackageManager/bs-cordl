#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\BufferedAeadCipher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedAeadCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedAeadCipher;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::BufferedAeadCipher*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::BufferedAeadCipher*, "Org.BouncyCastle.Crypto", "BufferedAeadCipher");
// Dependencies Org.BouncyCastle.Crypto.BufferedCipherBase
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.BufferedAeadCipher
class CORDL_TYPE BufferedAeadCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* cipher;

  /// @brief Method DoFinal, addr 0x349d72c, size 0xd8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> DoFinal();

  /// @brief Method DoFinal, addr 0x349d804, size 0x17c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen);

  /// @brief Method DoFinal, addr 0x349d980, size 0xc0, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0x349d1a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetOutputSize, addr 0x349d260, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t length);

  /// @brief Method GetUpdateOutputSize, addr 0x349d1a8, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t length);

  /// @brief Method Init, addr 0x349d094, size 0x10c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::BufferedAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Modes::IAeadCipher* cipher);

  /// @brief Method ProcessByte, addr 0x349d3e8, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> ProcessByte(uint8_t input);

  /// @brief Method ProcessByte, addr 0x349d318, size 0xd0, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x349d4dc, size 0x168, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length);

  /// @brief Method ProcessBytes, addr 0x349d644, size 0xe8, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method Reset, addr 0x349da40, size 0xa8, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*& __cordl_internal_get_cipher();

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Modes::IAeadCipher* value);

  /// @brief Method .ctor, addr 0x349cf40, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Modes::IAeadCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0x349cff0, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedAeadCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedAeadCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedAeadCipher(BufferedAeadCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedAeadCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedAeadCipher(BufferedAeadCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1342 };

  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* ___cipher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedAeadCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::BufferedAeadCipher) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
