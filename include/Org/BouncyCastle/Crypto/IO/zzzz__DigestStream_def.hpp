#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IO/DigestStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestStream)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class DigestStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::DigestStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IO.DigestStream
class CORDL_TYPE DigestStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field inDigest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inDigest, put = __cordl_internal_set_inDigest)) ::Org::BouncyCastle::Crypto::IDigest* inDigest;

  /// @brief Field outDigest, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_outDigest, put = __cordl_internal_set_outDigest)) ::Org::BouncyCastle::Crypto::IDigest* outDigest;

  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Method Close, addr 0x32eaadc, size 0x7c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x32eab58, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Crypto::IO::DigestStream* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IDigest* readDigest,
                                                                        ::Org::BouncyCastle::Crypto::IDigest* writeDigest);

  /// @brief Method Read, addr 0x32ea680, size 0x108, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x32ea788, size 0xd4, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadDigest, addr 0x32ea670, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* ReadDigest();

  /// @brief Method Seek, addr 0x32eab78, size 0x20, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x32eab98, size 0x20, virtual true, abstract: false, final false
  inline void SetLength(int64_t length);

  /// @brief Method Write, addr 0x32ea85c, size 0xfc, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x32ea958, size 0xd4, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method WriteDigest, addr 0x32ea678, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* WriteDigest();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_inDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_inDigest();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_outDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_outDigest();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_inDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_outDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x32ea5f8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IDigest* readDigest, ::Org::BouncyCastle::Crypto::IDigest* writeDigest);

  /// @brief Method get_CanRead, addr 0x32eaa2c, size 0x1c, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x32eaa64, size 0x1c, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x32eaa48, size 0x1c, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x32eaa80, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x32eaa9c, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x32eaabc, size 0x20, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestStream(DigestStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestStream(DigestStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 929 };

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field inDigest, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___inDigest;

  /// @brief Field outDigest, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___outDigest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::DigestStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::DigestStream, ___inDigest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::DigestStream, ___outDigest) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::DigestStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::DigestStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::DigestStream*, "Org.BouncyCastle.Crypto.IO", "DigestStream");
