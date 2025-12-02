#pragma once
// IWYU pragma private; include "System/Xml/XmlStreamNodeWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlStreamNodeWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class UTF8Encoding;
}
// Forward declare root types
namespace System::Xml {
class XmlStreamNodeWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlStreamNodeWriter);
// Dependencies System.Xml.XmlNodeWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlStreamNodeWriter
class CORDL_TYPE XmlStreamNodeWriter : public ::System::Xml::XmlNodeWriter {
public:
  // Declarations
  __declspec(property(get = get_Position)) int32_t Position;

  /// @brief Field UTF8Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UTF8Encoding, put = setStaticF_UTF8Encoding)) ::System::Text::UTF8Encoding* UTF8Encoding;

  /// @brief Field buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field encoding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field offset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field ownsStream, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_ownsStream, put = __cordl_internal_set_ownsStream)) bool ownsStream;

  /// @brief Field stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Method Advance, addr 0x5f0cfc0, size 0x10, virtual false, abstract: false, final false
  inline void Advance(int32_t count);

  /// @brief Method Close, addr 0x5f0d63c, size 0x34, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EnsureByte, addr 0x5f0cfd0, size 0x20, virtual false, abstract: false, final false
  inline void EnsureByte();

  /// @brief Method Flush, addr 0x5f0d604, size 0x38, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushBuffer, addr 0x5f0d5c4, size 0x40, virtual true, abstract: false, final false
  inline void FlushBuffer();

  /// @brief Method GetBuffer, addr 0x5f0cf74, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(int32_t count, ::ByRef<int32_t> offset);

  static inline ::System::Xml::XmlStreamNodeWriter* New_ctor();

  /// @brief Method SetOutput, addr 0x5f0cf28, size 0x18, virtual false, abstract: false, final false
  inline void SetOutput(::System::IO::Stream* stream, bool ownsStream, ::System::Text::Encoding* encoding);

  /// @brief Method UnsafeGetUTF8Chars, addr 0x5f0d4b8, size 0x10c, virtual false, abstract: false, final false
  inline int32_t UnsafeGetUTF8Chars(char16_t* chars, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method UnsafeWriteUTF8Chars, addr 0x5f0d19c, size 0x108, virtual false, abstract: false, final false
  inline void UnsafeWriteUTF8Chars(char16_t* chars, int32_t charCount);

  /// @brief Method WriteByte, addr 0x5f0cff0, size 0x6c, virtual false, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method WriteByte, addr 0x5f0d05c, size 0x4, virtual false, abstract: false, final false
  inline void WriteByte(char16_t ch);

  /// @brief Method WriteBytes, addr 0x5f0d060, size 0x98, virtual false, abstract: false, final false
  inline void WriteBytes(uint8_t b1, uint8_t b2);

  /// @brief Method WriteBytes, addr 0x5f0d0f8, size 0x4, virtual false, abstract: false, final false
  inline void WriteBytes(char16_t ch1, char16_t ch2);

  /// @brief Method WriteUTF8Char, addr 0x5f0d0fc, size 0xa0, virtual false, abstract: false, final false
  inline void WriteUTF8Char(int32_t ch);

  /// @brief Method WriteUTF8Chars, addr 0x5f0d3cc, size 0xc8, virtual false, abstract: false, final false
  inline void WriteUTF8Chars(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t charOffset, int32_t charCount);

  /// @brief Method WriteUTF8Chars, addr 0x5f0d494, size 0x24, virtual false, abstract: false, final false
  inline void WriteUTF8Chars(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr bool const& __cordl_internal_get_ownsStream() const;

  constexpr bool& __cordl_internal_get_ownsStream();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_ownsStream(bool value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x5f0ce98, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::UTF8Encoding* getStaticF_UTF8Encoding();

  /// @brief Method get_Position, addr 0x5f0cf40, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_Position();

  static inline void setStaticF_UTF8Encoding(::System::Text::UTF8Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlStreamNodeWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlStreamNodeWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlStreamNodeWriter(XmlStreamNodeWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlStreamNodeWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlStreamNodeWriter(XmlStreamNodeWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16946 };

  /// @brief Field stream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field offset, offset: 0x20, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field ownsStream, offset: 0x24, size: 0x1, def value: None
  bool ___ownsStream;

  /// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlStreamNodeWriter, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlStreamNodeWriter, ___buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlStreamNodeWriter, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlStreamNodeWriter, ___ownsStream) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlStreamNodeWriter, ___encoding) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlStreamNodeWriter, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlStreamNodeWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlStreamNodeWriter*, "System.Xml", "XmlStreamNodeWriter");
