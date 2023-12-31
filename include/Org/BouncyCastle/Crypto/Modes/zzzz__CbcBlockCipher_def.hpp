#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CbcBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::CbcBlockCipher
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(957))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::CbcBlockCipher*
class CORDL_TYPE CbcBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __get_IV, put = __set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field cbcV, offset 0x18, size 0x8
  __declspec(property(get = __get_cbcV, put = __set_cbcV))::ArrayW<uint8_t, ::Array<uint8_t>*> cbcV;

  /// @brief Field cbcNextV, offset 0x20, size 0x8
  __declspec(property(get = __get_cbcNextV, put = __set_cbcNextV))::ArrayW<uint8_t, ::Array<uint8_t>*> cbcNextV;

  /// @brief Field blockSize, offset 0x28, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x30, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field encrypting, offset 0x38, size 0x1
  __declspec(property(get = __get_encrypting, put = __set_encrypting)) bool encrypting;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_IV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_IV() const;

  constexpr void __set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_cbcV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_cbcV() const;

  constexpr void __set_cbcV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_cbcNextV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_cbcNextV() const;

  constexpr void __set_cbcNextV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr bool& __get_encrypting();

  constexpr bool const& __get_encrypting() const;

  constexpr void __set_encrypting(bool value);

  static inline ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xf09474, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetUnderlyingCipher, addr 0xf14d0c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0xf14d14, size 0x1f4, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xf14fe4, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf150a4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xf150ac, size 0xa4, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock, addr 0xf15150, size 0x10, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf14f08, size 0xdc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method EncryptBlock, addr 0xf15328, size 0x1d4, virtual false, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DecryptBlock, addr 0xf15160, size 0x1c8, virtual false, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "CbcBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CbcBlockCipher(CbcBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CbcBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CbcBlockCipher(CbcBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CbcBlockCipher();

public:
  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field cbcV, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___cbcV;

  /// @brief Field cbcNextV, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___cbcNextV;

  /// @brief Field blockSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field cipher, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field encrypting, offset: 0x38, size: 0x1, def value: None
  bool ___encrypting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, ___cbcV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, ___cbcNextV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, ___blockSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, ___cipher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, ___encrypting) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CbcBlockCipher");
