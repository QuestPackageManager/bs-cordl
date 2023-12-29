#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CtsBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CtsBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::CtsBlockCipher
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(967))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::CtsBlockCipher*
class CORDL_TYPE CtsBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedBlockCipher {
public:
  // Declarations
  /// @brief Field blockSize, offset 0x28, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor addr 0xea5f6c size 0x1ac virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetUpdateOutputSize addr 0xea6118 size 0x38 virtual true final false
  inline int32_t GetUpdateOutputSize(int32_t length);

  /// @brief Method GetOutputSize addr 0xea6150 size 0xc virtual true final false
  inline int32_t GetOutputSize(int32_t length);

  /// @brief Method ProcessByte addr 0xea615c size 0x14c virtual true final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes addr 0xea62a8 size 0x340 virtual true final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal addr 0xea65e8 size 0x5a8 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "CtsBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CtsBlockCipher(CtsBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CtsBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CtsBlockCipher(CtsBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CtsBlockCipher();

public:
  /// @brief Field blockSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___blockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher, ___blockSize) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CtsBlockCipher");
