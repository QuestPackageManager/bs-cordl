#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedAsymmetricBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedAsymmetricBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher);
// Type: Org.BouncyCastle.Crypto::BufferedAsymmetricBlockCipher
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(965))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1343))
// CS Name: ::Org.BouncyCastle.Crypto::BufferedAsymmetricBlockCipher*
class CORDL_TYPE BufferedAsymmetricBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
  // Declarations
  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;

  /// @brief Field buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field bufOff, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __cordl_internal_get_cipher() const;

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xff124c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method GetBufferPosition, addr 0xff12b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetBufferPosition();

  /// @brief Method get_AlgorithmName, addr 0xff12c0, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetBlockSize, addr 0xff1360, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetOutputSize, addr 0xff1404, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t length);

  /// @brief Method GetUpdateOutputSize, addr 0xff14a8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t length);

  /// @brief Method Init, addr 0xff14b0, size 0x16c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessByte, addr 0xff161c, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessByte(uint8_t input);

  /// @brief Method ProcessBytes, addr 0xff16b0, size 0xf0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method DoFinal, addr 0xff17a0, size 0x11c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal();

  /// @brief Method DoFinal, addr 0xff18bc, size 0x30, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Reset, addr 0xff18ec, size 0x2c, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "BufferedAsymmetricBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedAsymmetricBlockCipher(BufferedAsymmetricBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedAsymmetricBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedAsymmetricBlockCipher(BufferedAsymmetricBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedAsymmetricBlockCipher();

public:
  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___cipher;

  /// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field bufOff, offset: 0x20, size: 0x4, def value: None
  int32_t ___bufOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher, ___buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher, ___bufOff) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*, "Org.BouncyCastle.Crypto", "BufferedAsymmetricBlockCipher");
