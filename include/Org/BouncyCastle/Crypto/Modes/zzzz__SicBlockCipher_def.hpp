#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SicBlockCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class SicBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::SicBlockCipher
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(977))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::SicBlockCipher*
class CORDL_TYPE SicBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field blockSize, offset 0x18, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  /// @brief Field counter, offset 0x20, size 0x8
  __declspec(property(get = __get_counter, put = __set_counter))::ArrayW<uint8_t, ::Array<uint8_t>*> counter;

  /// @brief Field counterOut, offset 0x28, size 0x8
  __declspec(property(get = __get_counterOut, put = __set_counterOut))::ArrayW<uint8_t, ::Array<uint8_t>*> counterOut;

  /// @brief Field IV, offset 0x30, size 0x8
  __declspec(property(get = __get_IV, put = __set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_counter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_counter() const;

  constexpr void __set_counter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_counterOut();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_counterOut() const;

  constexpr void __set_counterOut(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_IV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_IV() const;

  constexpr void __set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor addr 0xf279cc size 0x100 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetUnderlyingCipher addr 0xf27acc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init addr 0xf27ad4 size 0x2e8 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName addr 0xf27dbc size 0xc0 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay addr 0xf27e7c size 0x8 virtual true final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize addr 0xf27e84 size 0xa4 virtual true final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock addr 0xf27f28 size 0x1bc virtual true final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xf280e4 size 0xfc virtual true final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "SicBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SicBlockCipher(SicBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SicBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SicBlockCipher(SicBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SicBlockCipher();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "SicBlockCipher");
