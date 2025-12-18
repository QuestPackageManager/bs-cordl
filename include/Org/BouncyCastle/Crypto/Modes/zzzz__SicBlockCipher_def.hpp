#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/SicBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SicBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class SicBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.SicBlockCipher
class CORDL_TYPE SicBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field IV, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_IV, put = __cordl_internal_set_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field blockSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field counter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) ::ArrayW<uint8_t, ::Array<uint8_t>*> counter;

  /// @brief Field counterOut, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_counterOut, put = __cordl_internal_set_counterOut)) ::ArrayW<uint8_t, ::Array<uint8_t>*> counterOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method GetBlockSize, addr 0x33098a0, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetUnderlyingCipher, addr 0x33094c4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0x33094cc, size 0x304, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method ProcessBlock, addr 0x3309948, size 0x1d8, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x3309b20, size 0x104, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_IV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_IV();

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_counter() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_counter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_counterOut() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_counterOut();

  constexpr void __cordl_internal_set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_counter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_counterOut(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x33093b4, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0x33097d0, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x3309898, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SicBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SicBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SicBlockCipher(SicBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SicBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SicBlockCipher(SicBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 977 };

  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field blockSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field counter, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___counter;

  /// @brief Field counterOut, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___counterOut;

  /// @brief Field IV, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, ___blockSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, ___counter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, ___counterOut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, ___IV) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "SicBlockCipher");
