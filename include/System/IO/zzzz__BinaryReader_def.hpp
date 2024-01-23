#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::IO {
class BinaryReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::BinaryReader);
// Type: System.IO::BinaryReader
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 71, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3621))
// CS Name: ::System.IO::BinaryReader*
class CORDL_TYPE BinaryReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stream, put = __cordl_internal_set_m_stream))::System::IO::Stream* m_stream;

  /// @brief Field m_buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_buffer, put = __cordl_internal_set_m_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> m_buffer;

  /// @brief Field m_decoder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_decoder, put = __cordl_internal_set_m_decoder))::System::Text::Decoder* m_decoder;

  /// @brief Field m_charBytes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_charBytes, put = __cordl_internal_set_m_charBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> m_charBytes;

  /// @brief Field m_singleChar, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_singleChar, put = __cordl_internal_set_m_singleChar))::ArrayW<char16_t, ::Array<char16_t>*> m_singleChar;

  /// @brief Field m_charBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_charBuffer, put = __cordl_internal_set_m_charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> m_charBuffer;

  /// @brief Field m_maxCharsSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCharsSize, put = __cordl_internal_set_m_maxCharsSize)) int32_t m_maxCharsSize;

  /// @brief Field m_2BytesPerChar, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_2BytesPerChar, put = __cordl_internal_set_m_2BytesPerChar)) bool m_2BytesPerChar;

  /// @brief Field m_isMemoryStream, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isMemoryStream, put = __cordl_internal_set_m_isMemoryStream)) bool m_isMemoryStream;

  /// @brief Field m_leaveOpen, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_m_leaveOpen, put = __cordl_internal_set_m_leaveOpen)) bool m_leaveOpen;

  __declspec(property(get = get_BaseStream))::System::IO::Stream* BaseStream;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_m_stream() const;

  constexpr void __cordl_internal_set_m_stream(::System::IO::Stream* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_buffer() const;

  constexpr void __cordl_internal_set_m_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Text::Decoder*& __cordl_internal_get_m_decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& __cordl_internal_get_m_decoder() const;

  constexpr void __cordl_internal_set_m_decoder(::System::Text::Decoder* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_charBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_charBytes() const;

  constexpr void __cordl_internal_set_m_charBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_m_singleChar();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_m_singleChar() const;

  constexpr void __cordl_internal_set_m_singleChar(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_m_charBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_m_charBuffer() const;

  constexpr void __cordl_internal_set_m_charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __cordl_internal_get_m_maxCharsSize();

  constexpr int32_t const& __cordl_internal_get_m_maxCharsSize() const;

  constexpr void __cordl_internal_set_m_maxCharsSize(int32_t value);

  constexpr bool& __cordl_internal_get_m_2BytesPerChar();

  constexpr bool const& __cordl_internal_get_m_2BytesPerChar() const;

  constexpr void __cordl_internal_set_m_2BytesPerChar(bool value);

  constexpr bool& __cordl_internal_get_m_isMemoryStream();

  constexpr bool const& __cordl_internal_get_m_isMemoryStream() const;

  constexpr void __cordl_internal_set_m_isMemoryStream(bool value);

  constexpr bool& __cordl_internal_get_m_leaveOpen();

  constexpr bool const& __cordl_internal_get_m_leaveOpen() const;

  constexpr void __cordl_internal_set_m_leaveOpen(bool value);

  static inline ::System::IO::BinaryReader* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x2539080, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  static inline ::System::IO::BinaryReader* New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x2539378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding);

  static inline ::System::IO::BinaryReader* New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method .ctor, addr 0x25390f8, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method get_BaseStream, addr 0x2539380, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method Close, addr 0x2539388, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x2539398, size 0x44, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Dispose, addr 0x25393dc, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Read, addr 0x25393ec, size 0x18, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method ReadBoolean, addr 0x2539674, size 0x48, virtual true, abstract: false, final false
  inline bool ReadBoolean();

  /// @brief Method ReadByte, addr 0x25396bc, size 0x34, virtual true, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadSByte, addr 0x25396f0, size 0x40, virtual true, abstract: false, final false
  inline int8_t ReadSByte();

  /// @brief Method ReadChar, addr 0x2539730, size 0x24, virtual true, abstract: false, final false
  inline char16_t ReadChar();

  /// @brief Method ReadInt16, addr 0x2539754, size 0x48, virtual true, abstract: false, final false
  inline int16_t ReadInt16();

  /// @brief Method ReadUInt16, addr 0x253979c, size 0x48, virtual true, abstract: false, final false
  inline uint16_t ReadUInt16();

  /// @brief Method ReadInt32, addr 0x25397e4, size 0xf4, virtual true, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadUInt32, addr 0x25398d8, size 0x70, virtual true, abstract: false, final false
  inline uint32_t ReadUInt32();

  /// @brief Method ReadInt64, addr 0x2539948, size 0xb0, virtual true, abstract: false, final false
  inline int64_t ReadInt64();

  /// @brief Method ReadUInt64, addr 0x25399f8, size 0xb0, virtual true, abstract: false, final false
  inline uint64_t ReadUInt64();

  /// @brief Method ReadSingle, addr 0x2539aa8, size 0x30, virtual true, abstract: false, final false
  inline float_t ReadSingle();

  /// @brief Method ReadDouble, addr 0x2539ad8, size 0x30, virtual true, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadDecimal, addr 0x2539b08, size 0x214, virtual true, abstract: false, final false
  inline ::System::Decimal ReadDecimal();

  /// @brief Method ReadString, addr 0x2539d1c, size 0x298, virtual true, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method InternalReadChars, addr 0x253a05c, size 0x2f8, virtual false, abstract: false, final false
  inline int32_t InternalReadChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method InternalReadOneChar, addr 0x2539404, size 0x270, virtual false, abstract: false, final false
  inline int32_t InternalReadOneChar();

  /// @brief Method ReadChars, addr 0x253a354, size 0x160, virtual true, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> ReadChars(int32_t count);

  /// @brief Method Read, addr 0x253a4b4, size 0x184, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadBytes, addr 0x253a638, size 0x190, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(int32_t count);

  /// @brief Method FillBuffer, addr 0x253a7c8, size 0x124, virtual true, abstract: false, final false
  inline void FillBuffer(int32_t numBytes);

  /// @brief Method Read7BitEncodedInt, addr 0x2539fb4, size 0xa8, virtual false, abstract: false, final false
  inline int32_t Read7BitEncodedInt();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryReader(BinaryReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryReader(BinaryReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryReader();

public:
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
static_assert(::cordl_internals::size_check_v<::System::IO::BinaryReader, 0x48>, "Size mismatch!");

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

} // namespace System::IO
NEED_NO_BOX(::System::IO::BinaryReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BinaryReader*, "System.IO", "BinaryReader");
