#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/BufferedCipherWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedCipherWrapper)
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class BufferedCipherWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper);
// Dependencies Org.BouncyCastle.Crypto.ICipher, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.BufferedCipherWrapper
class CORDL_TYPE BufferedCipherWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Stream)) ::System::IO::Stream* Stream;

  /// @brief Field bufferedCipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferedCipher, put = __cordl_internal_set_bufferedCipher)) ::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher;

  /// @brief Field stream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::Org::BouncyCastle::Crypto::IO::CipherStream* stream;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipher"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipher*() noexcept;

  /// @brief Method GetMaxOutputSize, addr 0x23b5978, size 0xac, virtual true, abstract: false, final true
  inline int32_t GetMaxOutputSize(int32_t inputLen);

  /// @brief Method GetUpdateOutputSize, addr 0x23b5a24, size 0xac, virtual true, abstract: false, final true
  inline int32_t GetUpdateOutputSize(int32_t inputLen);

  static inline ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper* New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& __cordl_internal_get_bufferedCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __cordl_internal_get_bufferedCipher();

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* const& __cordl_internal_get_stream() const;

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_bufferedCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr void __cordl_internal_set_stream(::Org::BouncyCastle::Crypto::IO::CipherStream* value);

  /// @brief Method .ctor, addr 0x23b58ec, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source);

  /// @brief Method get_Stream, addr 0x23b5ad0, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_Stream();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipher"
  constexpr ::Org::BouncyCastle::Crypto::ICipher* i___Org__BouncyCastle__Crypto__ICipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedCipherWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedCipherWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedCipherWrapper(BufferedCipherWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedCipherWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedCipherWrapper(BufferedCipherWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 982 };

  /// @brief Field bufferedCipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___bufferedCipher;

  /// @brief Field stream, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::CipherStream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, ___bufferedCipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, ___stream) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*, "Org.BouncyCastle.Crypto.Operators", "BufferedCipherWrapper");
