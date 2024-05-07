#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/ICipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICipher)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ICipher);
// Type: Org.BouncyCastle.Crypto::ICipher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::ICipher*
class CORDL_TYPE ICipher {
public:
  // Declarations
  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Method GetMaxOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetMaxOutputSize(int32_t inputLen);

  /// @brief Method GetUpdateOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetUpdateOutputSize(int32_t inputLen);

  /// @brief Method get_Stream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* get_Stream();

  // Ctor Parameters [CppParam { name: "", ty: "ICipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICipher(ICipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICipher(ICipher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ICipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ICipher*, "Org.BouncyCastle.Crypto", "ICipher");
