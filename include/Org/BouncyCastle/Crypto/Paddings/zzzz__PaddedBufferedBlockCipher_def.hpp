#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Paddings/PaddedBufferedBlockCipher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaddedBufferedBlockCipher)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class PaddedBufferedBlockCipher;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*, "Org.BouncyCastle.Crypto.Paddings", "PaddedBufferedBlockCipher");
// Dependencies Org.BouncyCastle.Crypto.BufferedBlockCipher
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher
class CORDL_TYPE PaddedBufferedBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedBlockCipher {
public:
  // Declarations
  /// @brief Field padding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_padding, put = __cordl_internal_set_padding)) ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;

  /// @brief Method DoFinal, addr 0x3409cf4, size 0x4e4, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method GetOutputSize, addr 0x3409898, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t length);

  /// @brief Method GetUpdateOutputSize, addr 0x34098e0, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t length);

  /// @brief Method Init, addr 0x34096e4, size 0x1b4, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher,
                                                                                           ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method ProcessByte, addr 0x3409914, size 0x12c, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x3409a40, size 0x2b4, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff);

  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* const& __cordl_internal_get_padding() const;

  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& __cordl_internal_get_padding();

  constexpr void __cordl_internal_set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* value);

  /// @brief Method .ctor, addr 0x340967c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0x3409584, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaddedBufferedBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaddedBufferedBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaddedBufferedBlockCipher(PaddedBufferedBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaddedBufferedBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaddedBufferedBlockCipher(PaddedBufferedBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1008 };

  /// @brief Field padding, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* ___padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher, ___padding) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher) == 0x30, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Paddings
