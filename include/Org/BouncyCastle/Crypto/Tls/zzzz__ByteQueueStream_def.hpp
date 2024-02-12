#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteQueueStream)
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueueStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream);
// Type: Org.BouncyCastle.Crypto.Tls::ByteQueueStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3617))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1184))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ByteQueueStream*
class CORDL_TYPE ByteQueueStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::Org::BouncyCastle::Crypto::Tls::ByteQueue* buffer;

  __declspec(property(get = get_Available)) int32_t Available;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __cordl_internal_get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __cordl_internal_get_buffer() const;

  constexpr void __cordl_internal_set_buffer(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* New_ctor();

  /// @brief Method .ctor, addr 0xf87dcc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Available, addr 0xf87e5c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Available();

  /// @brief Method get_CanRead, addr 0xf87e78, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0xf87e80, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0xf87e88, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method Flush, addr 0xf87e90, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method get_Length, addr 0xf87e94, size 0x40, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method Peek, addr 0xf87ed4, size 0xa0, virtual true, abstract: false, final false
  inline int32_t Peek(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method get_Position, addr 0xf87f74, size 0x40, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0xf87fb4, size 0x40, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method Read, addr 0xf87ff4, size 0x28, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method Read, addr 0xf8801c, size 0xb8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ReadByte, addr 0xf880d4, size 0x48, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0xf8811c, size 0x40, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0xf8815c, size 0x40, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Skip, addr 0xf8819c, size 0x90, virtual true, abstract: false, final false
  inline int32_t Skip(int32_t n);

  /// @brief Method Write, addr 0xf8822c, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method Write, addr 0xf88250, size 0x18, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0xf88268, size 0x88, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  // Ctor Parameters [CppParam { name: "", ty: "ByteQueueStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteQueueStream(ByteQueueStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteQueueStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteQueueStream(ByteQueueStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteQueueStream();

public:
  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueue* ___buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream, ___buffer) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*, "Org.BouncyCastle.Crypto.Tls", "ByteQueueStream");
