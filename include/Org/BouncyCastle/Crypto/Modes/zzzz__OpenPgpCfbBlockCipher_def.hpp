#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/OpenPgpCfbBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenPgpCfbBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class OpenPgpCfbBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher
class CORDL_TYPE OpenPgpCfbBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field FR, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FR, put = __cordl_internal_set_FR)) ::ArrayW<uint8_t, ::Array<uint8_t>*> FR;

  /// @brief Field FRE, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_FRE, put = __cordl_internal_set_FRE)) ::ArrayW<uint8_t, ::Array<uint8_t>*> FRE;

  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_IV, put = __cordl_internal_set_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field blockSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field count, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field forEncryption, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0x23afa08, size 0x650, virtual false, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0x23b0058, size 0x608, virtual false, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method EncryptByte, addr 0x23b08d0, size 0x34, virtual false, abstract: false, final false
  inline uint8_t EncryptByte(uint8_t data, int32_t blockOff);

  /// @brief Method GetBlockSize, addr 0x23af954, size 0xa4, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method GetUnderlyingCipher, addr 0x23af884, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0x23b0728, size 0x1a8, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method ProcessBlock, addr 0x23af9f8, size 0x10, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x23b0660, size 0xc8, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_FR() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_FR();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_FRE() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_FRE();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_IV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_IV();

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr void __cordl_internal_set_FR(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_FRE(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  /// @brief Method .ctor, addr 0x23af784, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0x23af88c, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x23af94c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenPgpCfbBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenPgpCfbBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenPgpCfbBlockCipher(OpenPgpCfbBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenPgpCfbBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenPgpCfbBlockCipher(OpenPgpCfbBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 976 };

  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field FR, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___FR;

  /// @brief Field FRE, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___FRE;

  /// @brief Field cipher, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field blockSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field forEncryption, offset: 0x38, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___FR) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___FRE) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___cipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___blockSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, ___forEncryption) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "OpenPgpCfbBlockCipher");
