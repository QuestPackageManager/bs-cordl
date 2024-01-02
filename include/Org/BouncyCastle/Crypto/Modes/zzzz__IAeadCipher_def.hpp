#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAeadCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::IAeadCipher);
// Type: Org.BouncyCastle.Crypto.Modes::IAeadCipher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(958))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::IAeadCipher*
class CORDL_TYPE IAeadCipher {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Method get_AlgorithmName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessAadByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DoFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetMac, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetUpdateOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method GetOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "IAeadCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAeadCipher(IAeadCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAeadCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAeadCipher(IAeadCipher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::IAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::IAeadCipher*, "Org.BouncyCastle.Crypto.Modes", "IAeadCipher");
