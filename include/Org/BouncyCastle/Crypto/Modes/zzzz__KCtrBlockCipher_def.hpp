#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KCtrBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class KCtrBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::KCtrBlockCipher
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(973))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::KCtrBlockCipher*
class CORDL_TYPE KCtrBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __get_IV, put = __set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field ofbV, offset 0x18, size 0x8
  __declspec(property(get = __get_ofbV, put = __set_ofbV))::ArrayW<uint8_t, ::Array<uint8_t>*> ofbV;

  /// @brief Field ofbOutV, offset 0x20, size 0x8
  __declspec(property(get = __get_ofbOutV, put = __set_ofbOutV))::ArrayW<uint8_t, ::Array<uint8_t>*> ofbOutV;

  /// @brief Field initialised, offset 0x28, size 0x1
  __declspec(property(get = __get_initialised, put = __set_initialised)) bool initialised;

  /// @brief Field byteCount, offset 0x2c, size 0x4
  __declspec(property(get = __get_byteCount, put = __set_byteCount)) int32_t byteCount;

  /// @brief Field blockSize, offset 0x30, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x38, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_IV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_IV() const;

  constexpr void __set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ofbV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ofbV() const;

  constexpr void __set_ofbV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ofbOutV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ofbOutV() const;

  constexpr void __set_ofbOutV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_initialised();

  constexpr bool const& __get_initialised() const;

  constexpr void __set_initialised(bool value);

  constexpr int32_t& __get_byteCount();

  constexpr int32_t const& __get_byteCount() const;

  constexpr void __set_byteCount(int32_t value);

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  static inline ::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xf23704, size 0x228, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetUnderlyingCipher, addr 0xf2392c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0xf23934, size 0x1b4, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xf23c1c, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf23cdc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xf23ce4, size 0xa4, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method ReturnByte, addr 0xf23d88, size 0x4, virtual true, abstract: false, final true
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method ProcessBytes, addr 0xf23edc, size 0x140, virtual true, abstract: false, final true
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method CalculateByte, addr 0xf23d8c, size 0x150, virtual false, abstract: false, final false
  inline uint8_t CalculateByte(uint8_t b);

  /// @brief Method ProcessBlock, addr 0xf24064, size 0x100, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf23ae8, size 0x134, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method incrementCounterAt, addr 0xf2401c, size 0x44, virtual false, abstract: false, final false
  inline void incrementCounterAt(int32_t pos);

  /// @brief Method checkCounter, addr 0xf24060, size 0x4, virtual false, abstract: false, final false
  inline void checkCounter();

  // Ctor Parameters [CppParam { name: "", ty: "KCtrBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KCtrBlockCipher(KCtrBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KCtrBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KCtrBlockCipher(KCtrBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KCtrBlockCipher();

public:
  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field ofbV, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ofbV;

  /// @brief Field ofbOutV, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ofbOutV;

  /// @brief Field initialised, offset: 0x28, size: 0x1, def value: None
  bool ___initialised;

  /// @brief Field byteCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___byteCount;

  /// @brief Field blockSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field cipher, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___ofbV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___ofbOutV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___initialised) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___byteCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___blockSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, ___cipher) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "KCtrBlockCipher");
