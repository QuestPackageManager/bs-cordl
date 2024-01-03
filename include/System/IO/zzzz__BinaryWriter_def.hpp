#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class IAsyncDisposable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::IO {
class BinaryWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::BinaryWriter);
// Type: System.IO::BinaryWriter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3622))
// CS Name: ::System.IO::BinaryWriter*
class CORDL_TYPE BinaryWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field OutStream, offset 0x10, size 0x8
  __declspec(property(get = __get_OutStream, put = __set_OutStream))::System::IO::Stream* OutStream;

  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _encoding, offset 0x20, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _encoder, offset 0x28, size 0x8
  __declspec(property(get = __get__encoder, put = __set__encoder))::System::Text::Encoder* _encoder;

  /// @brief Field _leaveOpen, offset 0x30, size 0x1
  __declspec(property(get = __get__leaveOpen, put = __set__leaveOpen)) bool _leaveOpen;

  /// @brief Field _largeByteBuffer, offset 0x38, size 0x8
  __declspec(property(get = __get__largeByteBuffer, put = __set__largeByteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _largeByteBuffer;

  /// @brief Field _maxChars, offset 0x40, size 0x4
  __declspec(property(get = __get__maxChars, put = __set__maxChars)) int32_t _maxChars;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::BinaryWriter* Null;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable() noexcept;

  constexpr ::System::IO::Stream*& __get_OutStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_OutStream() const;

  constexpr void __set_OutStream(::System::IO::Stream* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  constexpr ::System::Text::Encoder*& __get__encoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoder*> const& __get__encoder() const;

  constexpr void __set__encoder(::System::Text::Encoder* value);

  constexpr bool& __get__leaveOpen();

  constexpr bool const& __get__leaveOpen() const;

  constexpr void __set__leaveOpen(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__largeByteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__largeByteBuffer() const;

  constexpr void __set__largeByteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__maxChars();

  constexpr int32_t const& __get__maxChars() const;

  constexpr void __set__maxChars(int32_t value);

  static inline void setStaticF_Null(::System::IO::BinaryWriter* value);

  static inline ::System::IO::BinaryWriter* getStaticF_Null();

  static inline ::System::IO::BinaryWriter* New_ctor();

  /// @brief Method .ctor, addr 0x253a8ec, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::BinaryWriter* New_ctor(::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x253a9d8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output);

  static inline ::System::IO::BinaryWriter* New_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x253abd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding);

  static inline ::System::IO::BinaryWriter* New_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method .ctor, addr 0x253aa58, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method Close, addr 0x253abd8, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x253abe8, size 0x48, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Dispose, addr 0x253ac30, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Flush, addr 0x253ac40, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method DisposeAsync, addr 0x253ac64, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method Write, addr 0x253ae38, size 0x50, virtual true, abstract: false, final false
  inline void Write(bool value);

  /// @brief Method Write, addr 0x253ae88, size 0x24, virtual true, abstract: false, final false
  inline void Write(uint8_t value);

  /// @brief Method Write, addr 0x253aeac, size 0x24, virtual true, abstract: false, final false
  inline void Write(int8_t value);

  /// @brief Method Write, addr 0x253aed0, size 0x7c, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method Write, addr 0x253af4c, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x253af70, size 0x12c, virtual true, abstract: false, final false
  inline void Write(char16_t ch);

  /// @brief Method Write, addr 0x253b09c, size 0xa8, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method Write, addr 0x253b144, size 0x3c, virtual true, abstract: false, final false
  inline void Write(double_t value);

  /// @brief Method Write, addr 0x253b180, size 0x68, virtual true, abstract: false, final false
  inline void Write(int16_t value);

  /// @brief Method Write, addr 0x253b1e8, size 0x68, virtual true, abstract: false, final false
  inline void Write(uint16_t value);

  /// @brief Method Write, addr 0x253b250, size 0xa0, virtual true, abstract: false, final false
  inline void Write(int32_t value);

  /// @brief Method Write, addr 0x253b2f0, size 0xa0, virtual true, abstract: false, final false
  inline void Write(uint32_t value);

  /// @brief Method Write, addr 0x253b390, size 0x110, virtual true, abstract: false, final false
  inline void Write(int64_t value);

  /// @brief Method Write, addr 0x253b4a0, size 0x110, virtual true, abstract: false, final false
  inline void Write(uint64_t value);

  /// @brief Method Write, addr 0x253b5b0, size 0x3c, virtual true, abstract: false, final false
  inline void Write(float_t value);

  /// @brief Method Write, addr 0x253b5ec, size 0x2b4, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write7BitEncodedInt, addr 0x253b8a0, size 0x60, virtual false, abstract: false, final false
  inline void Write7BitEncodedInt(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "BinaryWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryWriter(BinaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryWriter(BinaryWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryWriter();

public:
  /// @brief Field OutStream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___OutStream;

  /// @brief Field _buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _encoder, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Encoder* ____encoder;

  /// @brief Field _leaveOpen, offset: 0x30, size: 0x1, def value: None
  bool ____leaveOpen;

  /// @brief Field _largeByteBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____largeByteBuffer;

  /// @brief Field _maxChars, offset: 0x40, size: 0x4, def value: None
  int32_t ____maxChars;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::BinaryWriter, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ___OutStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ____buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ____encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ____encoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ____leaveOpen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ____largeByteBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::BinaryWriter, ____maxChars) == 0x40, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::BinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BinaryWriter*, "System.IO", "BinaryWriter");
