#pragma once
// IWYU pragma private; include "System/IO/BinaryReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryReader)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::IO {
class BinaryReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::BinaryReader);
// Dependencies System.IDisposable, System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.BinaryReader
class CORDL_TYPE BinaryReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseStream)) ::System::IO::Stream* BaseStream;

  /// @brief Field m_2BytesPerChar, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_2BytesPerChar, put = __cordl_internal_set_m_2BytesPerChar)) bool m_2BytesPerChar;

  /// @brief Field m_buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_buffer, put = __cordl_internal_set_m_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_buffer;

  /// @brief Field m_charBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_charBuffer, put = __cordl_internal_set_m_charBuffer)) ::ArrayW<char16_t, ::Array<char16_t>*> m_charBuffer;

  /// @brief Field m_charBytes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_charBytes, put = __cordl_internal_set_m_charBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_charBytes;

  /// @brief Field m_decoder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_decoder, put = __cordl_internal_set_m_decoder)) ::System::Text::Decoder* m_decoder;

  /// @brief Field m_isMemoryStream, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isMemoryStream, put = __cordl_internal_set_m_isMemoryStream)) bool m_isMemoryStream;

  /// @brief Field m_leaveOpen, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_m_leaveOpen, put = __cordl_internal_set_m_leaveOpen)) bool m_leaveOpen;

  /// @brief Field m_maxCharsSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCharsSize, put = __cordl_internal_set_m_maxCharsSize)) int32_t m_maxCharsSize;

  /// @brief Field m_singleChar, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_singleChar, put = __cordl_internal_set_m_singleChar)) ::ArrayW<char16_t, ::Array<char16_t>*> m_singleChar;

  /// @brief Field m_stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stream, put = __cordl_internal_set_m_stream)) ::System::IO::Stream* m_stream;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x3d779e4, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x3d77a38, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3d779f4, size 0x44, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FillBuffer, addr 0x3d78d7c, size 0x11c, virtual true, abstract: false, final false
  inline void FillBuffer(int32_t numBytes);

  /// @brief Method InternalReadChars, addr 0x3d7862c, size 0x2f8, virtual false, abstract: false, final false
  inline int32_t InternalReadChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method InternalReadOneChar, addr 0x3d77a60, size 0x270, virtual false, abstract: false, final false
  inline int32_t InternalReadOneChar();

  static inline ::System::IO::BinaryReader* New_ctor(::System::IO::Stream* input);

  static inline ::System::IO::BinaryReader* New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding);

  static inline ::System::IO::BinaryReader* New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method Read, addr 0x3d77a48, size 0x18, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d78a80, size 0x170, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Read7BitEncodedInt, addr 0x3d7858c, size 0xa0, virtual false, abstract: false, final false
  inline int32_t Read7BitEncodedInt();

  /// @brief Method ReadBoolean, addr 0x3d77cd0, size 0x48, virtual true, abstract: false, final false
  inline bool ReadBoolean();

  /// @brief Method ReadByte, addr 0x3d77d18, size 0x34, virtual true, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadBytes, addr 0x3d78bf0, size 0x18c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(int32_t count);

  /// @brief Method ReadChar, addr 0x3d77d8c, size 0x24, virtual true, abstract: false, final false
  inline char16_t ReadChar();

  /// @brief Method ReadChars, addr 0x3d78924, size 0x15c, virtual true, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> ReadChars(int32_t count);

  /// @brief Method ReadDecimal, addr 0x3d78164, size 0x198, virtual true, abstract: false, final false
  inline ::System::Decimal ReadDecimal();

  /// @brief Method ReadDouble, addr 0x3d78134, size 0x30, virtual true, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadInt16, addr 0x3d77db0, size 0x48, virtual true, abstract: false, final false
  inline int16_t ReadInt16();

  /// @brief Method ReadInt32, addr 0x3d77e40, size 0xf4, virtual true, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadInt64, addr 0x3d77fa4, size 0xb0, virtual true, abstract: false, final false
  inline int64_t ReadInt64();

  /// @brief Method ReadSByte, addr 0x3d77d4c, size 0x40, virtual true, abstract: false, final false
  inline int8_t ReadSByte();

  /// @brief Method ReadSingle, addr 0x3d78104, size 0x30, virtual true, abstract: false, final false
  inline float_t ReadSingle();

  /// @brief Method ReadString, addr 0x3d782fc, size 0x290, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadUInt16, addr 0x3d77df8, size 0x48, virtual true, abstract: false, final false
  inline uint16_t ReadUInt16();

  /// @brief Method ReadUInt32, addr 0x3d77f34, size 0x70, virtual true, abstract: false, final false
  inline uint32_t ReadUInt32();

  /// @brief Method ReadUInt64, addr 0x3d78054, size 0xb0, virtual true, abstract: false, final false
  inline uint64_t ReadUInt64();

  constexpr bool const& __cordl_internal_get_m_2BytesPerChar() const;

  constexpr bool& __cordl_internal_get_m_2BytesPerChar();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_buffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_m_charBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_m_charBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_charBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_charBytes();

  constexpr ::System::Text::Decoder* const& __cordl_internal_get_m_decoder() const;

  constexpr ::System::Text::Decoder*& __cordl_internal_get_m_decoder();

  constexpr bool const& __cordl_internal_get_m_isMemoryStream() const;

  constexpr bool& __cordl_internal_get_m_isMemoryStream();

  constexpr bool const& __cordl_internal_get_m_leaveOpen() const;

  constexpr bool& __cordl_internal_get_m_leaveOpen();

  constexpr int32_t const& __cordl_internal_get_m_maxCharsSize() const;

  constexpr int32_t& __cordl_internal_get_m_maxCharsSize();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_m_singleChar() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_m_singleChar();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_m_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_stream();

  constexpr void __cordl_internal_set_m_2BytesPerChar(bool value);

  constexpr void __cordl_internal_set_m_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_m_charBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_decoder(::System::Text::Decoder* value);

  constexpr void __cordl_internal_set_m_isMemoryStream(bool value);

  constexpr void __cordl_internal_set_m_leaveOpen(bool value);

  constexpr void __cordl_internal_set_m_maxCharsSize(int32_t value);

  constexpr void __cordl_internal_set_m_singleChar(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_m_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x3d776f4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x3d779d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x3d77764, size 0x270, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method get_BaseStream, addr 0x3d779dc, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryReader(BinaryReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryReader(BinaryReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3627 };

  /// @brief Field m_stream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___m_stream;

  /// @brief Field m_buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_buffer;

  /// @brief Field m_decoder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Decoder* ___m_decoder;

  /// @brief Field m_charBytes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_charBytes;

  /// @brief Field m_singleChar, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___m_singleChar;

  /// @brief Field m_charBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___m_charBuffer;

  /// @brief Field m_maxCharsSize, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_maxCharsSize;

  /// @brief Field m_2BytesPerChar, offset: 0x44, size: 0x1, def value: None
  bool ___m_2BytesPerChar;

  /// @brief Field m_isMemoryStream, offset: 0x45, size: 0x1, def value: None
  bool ___m_isMemoryStream;

  /// @brief Field m_leaveOpen, offset: 0x46, size: 0x1, def value: None
  bool ___m_leaveOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::BinaryReader, ___m_stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_decoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_charBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_singleChar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_charBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_maxCharsSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_2BytesPerChar) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_isMemoryStream) == 0x45, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryReader, ___m_leaveOpen) == 0x46, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::BinaryReader, 0x48>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::BinaryReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BinaryReader*, "System.IO", "BinaryReader");
