#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OfbBlockCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class OfbBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::OfbBlockCipher
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(975))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::OfbBlockCipher*
class CORDL_TYPE OfbBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __get_IV, put = __set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field ofbV, offset 0x18, size 0x8
  __declspec(property(get = __get_ofbV, put = __set_ofbV))::ArrayW<uint8_t, ::Array<uint8_t>*> ofbV;

  /// @brief Field ofbOutV, offset 0x20, size 0x8
  __declspec(property(get = __get_ofbOutV, put = __set_ofbOutV))::ArrayW<uint8_t, ::Array<uint8_t>*> ofbOutV;

  /// @brief Field blockSize, offset 0x28, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  /// @brief Field cipher, offset 0x30, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

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

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  static inline ::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t blockSize);

  /// @brief Method .ctor addr 0xeb0e98 size 0x1e0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t blockSize);

  /// @brief Method GetUnderlyingCipher addr 0xeb1078 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init addr 0xeb1080 size 0x1bc virtual true final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName addr 0xeb1300 size 0x104 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay addr 0xeb1404 size 0x8 virtual true final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize addr 0xeb140c size 0x8 virtual true final true
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock addr 0xeb1414 size 0x258 virtual true final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xeb123c size 0xc4 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "OfbBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OfbBlockCipher(OfbBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OfbBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OfbBlockCipher(OfbBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OfbBlockCipher();

public:
  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field ofbV, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ofbV;

  /// @brief Field ofbOutV, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ofbOutV;

  /// @brief Field blockSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field cipher, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, ___ofbV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, ___ofbOutV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, ___blockSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, ___cipher) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "OfbBlockCipher");
