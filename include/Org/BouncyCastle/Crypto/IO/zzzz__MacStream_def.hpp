#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.IO::MacStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(931))
// CS Name: ::Org.BouncyCastle.Crypto.IO::MacStream*
class CORDL_TYPE MacStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::System::IO::Stream* stream;

  /// @brief Field inMac, offset 0x30, size 0x8
  __declspec(property(get = __get_inMac, put = __set_inMac))::Org::BouncyCastle::Crypto::IMac* inMac;

  /// @brief Field outMac, offset 0x38, size 0x8
  __declspec(property(get = __get_outMac, put = __set_outMac))::Org::BouncyCastle::Crypto::IMac* outMac;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_stream() const;

  constexpr void __set_stream(::System::IO::Stream* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_inMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_inMac() const;

  constexpr void __set_inMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_outMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_outMac() const;

  constexpr void __set_outMac(::Org::BouncyCastle::Crypto::IMac* value);

  static inline ::Org::BouncyCastle::Crypto::IO::MacStream* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IMac* readMac, ::Org::BouncyCastle::Crypto::IMac* writeMac);

  /// @brief Method .ctor, addr 0xf08428, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IMac* readMac, ::Org::BouncyCastle::Crypto::IMac* writeMac);

  /// @brief Method ReadMac, addr 0xf084a8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* ReadMac();

  /// @brief Method WriteMac, addr 0xf084b0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* WriteMac();

  /// @brief Method Read, addr 0xf084b8, size 0xfc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0xf085b4, size 0xd0, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Write, addr 0xf08684, size 0xf0, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0xf08774, size 0xc8, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method get_CanRead, addr 0xf0883c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0xf0885c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek, addr 0xf0887c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_Length, addr 0xf0889c, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0xf088bc, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0xf088e0, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method Close, addr 0xf08904, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0xf0896c, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method Seek, addr 0xf08990, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0xf089b4, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t length);

  // Ctor Parameters [CppParam { name: "", ty: "MacStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacStream(MacStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacStream(MacStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacStream();

public:
  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field inMac, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___inMac;

  /// @brief Field outMac, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___outMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::MacStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacStream, ___inMac) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacStream, ___outMac) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::MacStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::MacStream*, "Org.BouncyCastle.Crypto.IO", "MacStream");
