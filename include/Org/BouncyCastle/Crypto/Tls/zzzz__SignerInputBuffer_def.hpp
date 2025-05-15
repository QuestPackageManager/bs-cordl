#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SignerInputBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerInputBuffer)
namespace Org::BouncyCastle::Crypto::Tls {
class SignerInputBuffer_SigStream;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignerInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignerInputBuffer_SigStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream
class CORDL_TYPE SignerInputBuffer_SigStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field s, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) ::Org::BouncyCastle::Crypto::ISigner* s;

  static inline ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream* New_ctor(::Org::BouncyCastle::Crypto::ISigner* s);

  /// @brief Method Write, addr 0x241c190, size 0xc4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x241c0e4, size 0xac, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get_s() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_s(::Org::BouncyCastle::Crypto::ISigner* value);

  /// @brief Method .ctor, addr 0x241c0b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInputBuffer_SigStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInputBuffer_SigStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInputBuffer_SigStream(SignerInputBuffer_SigStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInputBuffer_SigStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInputBuffer_SigStream(SignerInputBuffer_SigStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1276 };

  /// @brief Field s, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream, ___s) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Dependencies System.IO.MemoryStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.SignerInputBuffer
class CORDL_TYPE SignerInputBuffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  using SigStream = ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream;

  static inline ::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer* New_ctor();

  /// @brief Method UpdateSigner, addr 0x241c044, size 0x70, virtual false, abstract: false, final false
  inline void UpdateSigner(::Org::BouncyCastle::Crypto::ISigner* s);

  /// @brief Method .ctor, addr 0x241c0dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerInputBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerInputBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerInputBuffer(SignerInputBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerInputBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerInputBuffer(SignerInputBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer*, "Org.BouncyCastle.Crypto.Tls", "SignerInputBuffer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignerInputBuffer_SigStream*, "Org.BouncyCastle.Crypto.Tls", "SignerInputBuffer/SigStream");
