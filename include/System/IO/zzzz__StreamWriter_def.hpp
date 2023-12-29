#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter)
namespace System::IO {
class Stream;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Encoder;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::IO {
class StreamWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamWriter);
// Type: System.IO::StreamWriter
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3575))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3569))
// CS Name: ::System.IO::StreamWriter*
class CORDL_TYPE StreamWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  /// @brief Field _stream, offset 0x30, size 0x8
  __declspec(property(get = __get__stream, put = __set__stream))::System::IO::Stream* _stream;

  /// @brief Field _encoding, offset 0x38, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _encoder, offset 0x40, size 0x8
  __declspec(property(get = __get__encoder, put = __set__encoder))::System::Text::Encoder* _encoder;

  /// @brief Field _byteBuffer, offset 0x48, size 0x8
  __declspec(property(get = __get__byteBuffer, put = __set__byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _charBuffer, offset 0x50, size 0x8
  __declspec(property(get = __get__charBuffer, put = __set__charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _charPos, offset 0x58, size 0x4
  __declspec(property(get = __get__charPos, put = __set__charPos)) int32_t _charPos;

  /// @brief Field _charLen, offset 0x5c, size 0x4
  __declspec(property(get = __get__charLen, put = __set__charLen)) int32_t _charLen;

  /// @brief Field _autoFlush, offset 0x60, size 0x1
  __declspec(property(get = __get__autoFlush, put = __set__autoFlush)) bool _autoFlush;

  /// @brief Field _haveWrittenPreamble, offset 0x61, size 0x1
  __declspec(property(get = __get__haveWrittenPreamble, put = __set__haveWrittenPreamble)) bool _haveWrittenPreamble;

  /// @brief Field _closable, offset 0x62, size 0x1
  __declspec(property(get = __get__closable, put = __set__closable)) bool _closable;

  /// @brief Field _asyncWriteTask, offset 0x68, size 0x8
  __declspec(property(get = __get__asyncWriteTask, put = __set__asyncWriteTask))::System::Threading::Tasks::Task* _asyncWriteTask;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::StreamWriter* Null;

  __declspec(property(put = set_AutoFlush)) bool AutoFlush;

  __declspec(property(get = get_LeaveOpen)) bool LeaveOpen;

  __declspec(property(get = get_Encoding))::System::Text::Encoding* Encoding;

  constexpr ::System::IO::Stream*& __get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__stream() const;

  constexpr void __set__stream(::System::IO::Stream* value);

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  constexpr ::System::Text::Encoder*& __get__encoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoder*> const& __get__encoder() const;

  constexpr void __set__encoder(::System::Text::Encoder* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__byteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__byteBuffer() const;

  constexpr void __set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__charBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__charBuffer() const;

  constexpr void __set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get__charPos();

  constexpr int32_t const& __get__charPos() const;

  constexpr void __set__charPos(int32_t value);

  constexpr int32_t& __get__charLen();

  constexpr int32_t const& __get__charLen() const;

  constexpr void __set__charLen(int32_t value);

  constexpr bool& __get__autoFlush();

  constexpr bool const& __get__autoFlush() const;

  constexpr void __set__autoFlush(bool value);

  constexpr bool& __get__haveWrittenPreamble();

  constexpr bool const& __get__haveWrittenPreamble() const;

  constexpr void __set__haveWrittenPreamble(bool value);

  constexpr bool& __get__closable();

  constexpr bool const& __get__closable() const;

  constexpr void __set__closable(bool value);

  constexpr ::System::Threading::Tasks::Task*& __get__asyncWriteTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get__asyncWriteTask() const;

  constexpr void __set__asyncWriteTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF_Null(::System::IO::StreamWriter* value);

  static inline ::System::IO::StreamWriter* getStaticF_Null();

  /// @brief Method CheckAsyncTaskInProgress addr 0x23a8cd0 size 0x64 virtual false final false
  inline void CheckAsyncTaskInProgress();

  /// @brief Method ThrowAsyncIOInProgress addr 0x23a8d34 size 0x50 virtual false final false
  static inline void ThrowAsyncIOInProgress();

  /// @brief Method get_UTF8NoBOM addr 0x23a8d84 size 0x50 virtual false final false
  static inline ::System::Text::Encoding* get_UTF8NoBOM();

  static inline ::System::IO::StreamWriter* New_ctor();

  /// @brief Method .ctor addr 0x23a8dd4 size 0xbc virtual false final false
  inline void _ctor();

  static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor addr 0x23a8f18 size 0x74 virtual false final false
  inline void _ctor(::System::IO::Stream* stream);

  static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x23a91a4 size 0xc virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int32_t bufferSize);

  /// @brief Method .ctor addr 0x23a91b0 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int32_t bufferSize);

  static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int32_t bufferSize, bool leaveOpen);

  /// @brief Method .ctor addr 0x23a8f8c size 0x218 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int32_t bufferSize, bool leaveOpen);

  static inline ::System::IO::StreamWriter* New_ctor(::StringW path);

  /// @brief Method .ctor addr 0x23a92f0 size 0x74 virtual false final false
  inline void _ctor(::StringW path);

  static inline ::System::IO::StreamWriter* New_ctor(::StringW path, bool append);

  /// @brief Method .ctor addr 0x23a95b4 size 0x78 virtual false final false
  inline void _ctor(::StringW path, bool append);

  static inline ::System::IO::StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding, int32_t bufferSize);

  /// @brief Method .ctor addr 0x23a9364 size 0x250 virtual false final false
  inline void _ctor(::StringW path, bool append, ::System::Text::Encoding* encoding, int32_t bufferSize);

  /// @brief Method Init addr 0x23a91b8 size 0x138 virtual false final false
  inline void Init(::System::IO::Stream* streamArg, ::System::Text::Encoding* encodingArg, int32_t bufferSize, bool shouldLeaveOpen);

  /// @brief Method Close addr 0x23a96a8 size 0x6c virtual true final false
  inline void Close();

  /// @brief Method Dispose addr 0x23a9714 size 0x94 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush addr 0x23a9928 size 0x20 virtual true final false
  inline void Flush();

  /// @brief Method Flush addr 0x23a97a8 size 0x180 virtual false final false
  inline void Flush(bool flushStream, bool flushEncoder);

  /// @brief Method set_AutoFlush addr 0x23a9948 size 0x44 virtual true final false
  inline void set_AutoFlush(bool value);

  /// @brief Method get_LeaveOpen addr 0x23a998c size 0x10 virtual false final false
  inline bool get_LeaveOpen();

  /// @brief Method get_Encoding addr 0x23a999c size 0x8 virtual true final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method Write addr 0x23a99a4 size 0x8c virtual true final false
  inline void Write(char16_t value);

  /// @brief Method Write addr 0x23a9a30 size 0x268 virtual true final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method Write addr 0x23a9c98 size 0x3d8 virtual true final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteSpan addr 0x23aa070 size 0x2c8 virtual false final false
  inline void WriteSpan(::System::ReadOnlySpan_1<char16_t> buffer, bool appendNewLine);

  /// @brief Method Write addr 0x23aa338 size 0x26c virtual true final false
  inline void Write(::StringW value);

  /// @brief Method WriteLine addr 0x23aa5a4 size 0x2fc virtual true final false
  inline void WriteLine(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamWriter(StreamWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamWriter(StreamWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamWriter();

public:
  /// @brief Field _stream, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _encoding, offset: 0x38, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _encoder, offset: 0x40, size: 0x8, def value: None
  ::System::Text::Encoder* ____encoder;

  /// @brief Field _byteBuffer, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____byteBuffer;

  /// @brief Field _charBuffer, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____charBuffer;

  /// @brief Field _charPos, offset: 0x58, size: 0x4, def value: None
  int32_t ____charPos;

  /// @brief Field _charLen, offset: 0x5c, size: 0x4, def value: None
  int32_t ____charLen;

  /// @brief Field _autoFlush, offset: 0x60, size: 0x1, def value: None
  bool ____autoFlush;

  /// @brief Field _haveWrittenPreamble, offset: 0x61, size: 0x1, def value: None
  bool ____haveWrittenPreamble;

  /// @brief Field _closable, offset: 0x62, size: 0x1, def value: None
  bool ____closable;

  /// @brief Field _asyncWriteTask, offset: 0x68, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____asyncWriteTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StreamWriter, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____stream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____encoding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____encoder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____byteBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charLen) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____autoFlush) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____haveWrittenPreamble) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____closable) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____asyncWriteTask) == 0x68, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter*, "System.IO", "StreamWriter");
