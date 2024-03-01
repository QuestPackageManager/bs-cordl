#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IStreamCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IStreamCipher);
// Type: Org.BouncyCastle.Crypto::IStreamCipher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::IStreamCipher*
class CORDL_TYPE IStreamCipher {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  /// @brief Method ReturnByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method get_AlgorithmName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AlgorithmName();

  // Ctor Parameters [CppParam { name: "", ty: "IStreamCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStreamCipher(IStreamCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStreamCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStreamCipher(IStreamCipher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IStreamCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IStreamCipher*, "Org.BouncyCastle.Crypto", "IStreamCipher");
