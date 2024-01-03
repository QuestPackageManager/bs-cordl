#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestInputBuffer)
namespace Org::BouncyCastle::Crypto::Tls {
class __DigestInputBuffer__DigStream;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DigestInputBuffer__DigStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream);
// Type: ::DigStream
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1219))
// CS Name: ::DigestInputBuffer::DigStream*
class CORDL_TYPE __DigestInputBuffer__DigStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field d, offset 0x30, size 0x8
  __declspec(property(get = __get_d, put = __set_d))::Org::BouncyCastle::Crypto::IDigest* d;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_d();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_d() const;

  constexpr void __set_d(::Org::BouncyCastle::Crypto::IDigest* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream* New_ctor(::Org::BouncyCastle::Crypto::IDigest* d);

  /// @brief Method .ctor, addr 0xf68764, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* d);

  /// @brief Method WriteByte, addr 0xf6878c, size 0xac, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Write, addr 0xf68838, size 0xc4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "__DigestInputBuffer__DigStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DigestInputBuffer__DigStream(__DigestInputBuffer__DigStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DigestInputBuffer__DigStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DigestInputBuffer__DigStream(__DigestInputBuffer__DigStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DigestInputBuffer__DigStream();

public:
  /// @brief Field d, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream, ___d) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DigestInputBuffer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1220))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DigestInputBuffer*
class CORDL_TYPE DigestInputBuffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  using DigStream = ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream;

  /// @brief Method UpdateDigest, addr 0xf66ce0, size 0x78, virtual false, abstract: false, final false
  inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d);

  static inline ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* New_ctor();

  /// @brief Method .ctor, addr 0xf66a18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestInputBuffer(DigestInputBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestInputBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestInputBuffer(DigestInputBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestInputBuffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*, "Org.BouncyCastle.Crypto.Tls", "DigestInputBuffer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*, "Org.BouncyCastle.Crypto.Tls", "DigestInputBuffer/DigStream");
