#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedCipherWrapper)
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class BufferedCipherWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper);
// Type: Org.BouncyCastle.Crypto.Operators::BufferedCipherWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(982))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::BufferedCipherWrapper*
class CORDL_TYPE BufferedCipherWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field bufferedCipher, offset 0x10, size 0x8
  __declspec(property(get = __get_bufferedCipher, put = __set_bufferedCipher))::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher;

  /// @brief Field stream, offset 0x18, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::Org::BouncyCastle::Crypto::IO::CipherStream* stream;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipher"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __get_bufferedCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& __get_bufferedCipher() const;

  constexpr void __set_bufferedCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::CipherStream*> const& __get_stream() const;

  constexpr void __set_stream(::Org::BouncyCastle::Crypto::IO::CipherStream* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper* New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source);

  /// @brief Method .ctor, addr 0xf285e0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source);

  /// @brief Method GetMaxOutputSize, addr 0xf28674, size 0xac, virtual true, abstract: false, final true
  inline int32_t GetMaxOutputSize(int32_t inputLen);

  /// @brief Method GetUpdateOutputSize, addr 0xf28720, size 0xac, virtual true, abstract: false, final true
  inline int32_t GetUpdateOutputSize(int32_t inputLen);

  /// @brief Method get_Stream, addr 0xf287cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_Stream();

  // Ctor Parameters [CppParam { name: "", ty: "BufferedCipherWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedCipherWrapper(BufferedCipherWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedCipherWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedCipherWrapper(BufferedCipherWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedCipherWrapper();

public:
  /// @brief Field bufferedCipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___bufferedCipher;

  /// @brief Field stream, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::CipherStream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, ___bufferedCipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, ___stream) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*, "Org.BouncyCastle.Crypto.Operators", "BufferedCipherWrapper");
