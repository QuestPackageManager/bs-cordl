#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DigestInputBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestInputBuffer)
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer_DigStream;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer_DigStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DigestInputBuffer/DigStream
class CORDL_TYPE DigestInputBuffer_DigStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field d, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::Org::BouncyCastle::Crypto::IDigest* d;

  static inline ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream* New_ctor(::Org::BouncyCastle::Crypto::IDigest* d);

  /// @brief Method Write, addr 0x23eb02c, size 0xc4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x23eaf80, size 0xac, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_d() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_d();

  constexpr void __cordl_internal_set_d(::Org::BouncyCastle::Crypto::IDigest* value);

  /// @brief Method .ctor, addr 0x23eaf58, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* d);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestInputBuffer_DigStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer_DigStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestInputBuffer_DigStream(DigestInputBuffer_DigStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer_DigStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestInputBuffer_DigStream(DigestInputBuffer_DigStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1219 };

  /// @brief Field d, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream, ___d) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Dependencies System.IO.MemoryStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DigestInputBuffer
class CORDL_TYPE DigestInputBuffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  using DigStream = ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream;

  static inline ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* New_ctor();

  /// @brief Method UpdateDigest, addr 0x23e94f0, size 0x70, virtual false, abstract: false, final false
  inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d);

  /// @brief Method .ctor, addr 0x23e9228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestInputBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestInputBuffer(DigestInputBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestInputBuffer(DigestInputBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*, "Org.BouncyCastle.Crypto.Tls", "DigestInputBuffer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*, "Org.BouncyCastle.Crypto.Tls", "DigestInputBuffer/DigStream");
