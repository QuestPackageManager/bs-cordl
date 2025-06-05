#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IO/MacStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacStream)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class MacStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::MacStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IO.MacStream
class CORDL_TYPE MacStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field inMac, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inMac, put = __cordl_internal_set_inMac)) ::Org::BouncyCastle::Crypto::IMac* inMac;

  /// @brief Field outMac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_outMac, put = __cordl_internal_set_outMac)) ::Org::BouncyCastle::Crypto::IMac* outMac;

  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Method Close, addr 0x2392da8, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x2392e10, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Crypto::IO::MacStream* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IMac* readMac, ::Org::BouncyCastle::Crypto::IMac* writeMac);

  /// @brief Method Read, addr 0x239295c, size 0xfc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x2392a58, size 0xd0, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadMac, addr 0x239294c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* ReadMac();

  /// @brief Method Seek, addr 0x2392e34, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x2392e58, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t length);

  /// @brief Method Write, addr 0x2392b28, size 0xf0, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x2392c18, size 0xc8, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method WriteMac, addr 0x2392954, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* WriteMac();

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_inMac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_inMac();

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_outMac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_outMac();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_inMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_outMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x23928cc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IMac* readMac, ::Org::BouncyCastle::Crypto::IMac* writeMac);

  /// @brief Method get_CanRead, addr 0x2392ce0, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x2392d20, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x2392d00, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x2392d40, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2392d60, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x2392d84, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacStream(MacStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacStream(MacStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 931 };

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field inMac, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___inMac;

  /// @brief Field outMac, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___outMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacStream, ___inMac) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacStream, ___outMac) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::MacStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::MacStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::MacStream*, "Org.BouncyCastle.Crypto.IO", "MacStream");
