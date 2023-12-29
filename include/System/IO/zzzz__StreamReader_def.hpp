#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader)
namespace System::Text {
class Encoding;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Decoder;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class __StreamReader__NullStreamReader;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamReader);
// Type: System.IO::StreamReader
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3568))
// CS Name: ::System.IO::StreamReader*
class CORDL_TYPE StreamReader : public ::System::IO::TextReader {
public:
  // Declarations
  using NullStreamReader = ::System::IO::__StreamReader__NullStreamReader;

  /// @brief Field _stream, offset 0x18, size 0x8
  __declspec(property(get = __get__stream, put = __set__stream))::System::IO::Stream* _stream;

  /// @brief Field _encoding, offset 0x20, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _decoder, offset 0x28, size 0x8
  __declspec(property(get = __get__decoder, put = __set__decoder))::System::Text::Decoder* _decoder;

  /// @brief Field _byteBuffer, offset 0x30, size 0x8
  __declspec(property(get = __get__byteBuffer, put = __set__byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _charBuffer, offset 0x38, size 0x8
  __declspec(property(get = __get__charBuffer, put = __set__charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _charPos, offset 0x40, size 0x4
  __declspec(property(get = __get__charPos, put = __set__charPos)) int32_t _charPos;

  /// @brief Field _charLen, offset 0x44, size 0x4
  __declspec(property(get = __get__charLen, put = __set__charLen)) int32_t _charLen;

  /// @brief Field _byteLen, offset 0x48, size 0x4
  __declspec(property(get = __get__byteLen, put = __set__byteLen)) int32_t _byteLen;

  /// @brief Field _bytePos, offset 0x4c, size 0x4
  __declspec(property(get = __get__bytePos, put = __set__bytePos)) int32_t _bytePos;

  /// @brief Field _maxCharsPerBuffer, offset 0x50, size 0x4
  __declspec(property(get = __get__maxCharsPerBuffer, put = __set__maxCharsPerBuffer)) int32_t _maxCharsPerBuffer;

  /// @brief Field _detectEncoding, offset 0x54, size 0x1
  __declspec(property(get = __get__detectEncoding, put = __set__detectEncoding)) bool _detectEncoding;

  /// @brief Field _checkPreamble, offset 0x55, size 0x1
  __declspec(property(get = __get__checkPreamble, put = __set__checkPreamble)) bool _checkPreamble;

  /// @brief Field _isBlocked, offset 0x56, size 0x1
  __declspec(property(get = __get__isBlocked, put = __set__isBlocked)) bool _isBlocked;

  /// @brief Field _closable, offset 0x57, size 0x1
  __declspec(property(get = __get__closable, put = __set__closable)) bool _closable;

  /// @brief Field _asyncReadTask, offset 0x58, size 0x8
  __declspec(property(get = __get__asyncReadTask, put = __set__asyncReadTask))::System::Threading::Tasks::Task* _asyncReadTask;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::StreamReader* Null;

  __declspec(property(get = get_CurrentEncoding))::System::Text::Encoding* CurrentEncoding;

  __declspec(property(get = get_BaseStream))::System::IO::Stream* BaseStream;

  __declspec(property(get = get_LeaveOpen)) bool LeaveOpen;

  __declspec(property(get = get_EndOfStream)) bool EndOfStream;

  constexpr ::System::IO::Stream*& __get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__stream() const;

  constexpr void __set__stream(::System::IO::Stream* value);

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  constexpr ::System::Text::Decoder*& __get__decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& __get__decoder() const;

  constexpr void __set__decoder(::System::Text::Decoder* value);

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

  constexpr int32_t& __get__byteLen();

  constexpr int32_t const& __get__byteLen() const;

  constexpr void __set__byteLen(int32_t value);

  constexpr int32_t& __get__bytePos();

  constexpr int32_t const& __get__bytePos() const;

  constexpr void __set__bytePos(int32_t value);

  constexpr int32_t& __get__maxCharsPerBuffer();

  constexpr int32_t const& __get__maxCharsPerBuffer() const;

  constexpr void __set__maxCharsPerBuffer(int32_t value);

  constexpr bool& __get__detectEncoding();

  constexpr bool const& __get__detectEncoding() const;

  constexpr void __set__detectEncoding(bool value);

  constexpr bool& __get__checkPreamble();

  constexpr bool const& __get__checkPreamble() const;

  constexpr void __set__checkPreamble(bool value);

  constexpr bool& __get__isBlocked();

  constexpr bool const& __get__isBlocked() const;

  constexpr void __set__isBlocked(bool value);

  constexpr bool& __get__closable();

  constexpr bool const& __get__closable() const;

  constexpr void __set__closable(bool value);

  constexpr ::System::Threading::Tasks::Task*& __get__asyncReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get__asyncReadTask() const;

  constexpr void __set__asyncReadTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF_Null(::System::IO::StreamReader* value);

  static inline ::System::IO::StreamReader* getStaticF_Null();

  /// @brief Method CheckAsyncTaskInProgress addr 0x23a6f20 size 0x64 virtual false final false
  inline void CheckAsyncTaskInProgress();

  /// @brief Method ThrowAsyncIOInProgress addr 0x23a6f84 size 0x50 virtual false final false
  static inline void ThrowAsyncIOInProgress();

  static inline ::System::IO::StreamReader* New_ctor();

  /// @brief Method .ctor addr 0x23a6fd4 size 0xbc virtual false final false
  inline void _ctor();

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor addr 0x23a7098 size 0x3c virtual false final false
  inline void _ctor(::System::IO::Stream* stream);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor addr 0x23a70d4 size 0x40 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x23a733c size 0x10 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor addr 0x23a734c size 0x10 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method .ctor addr 0x23a7114 size 0x228 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path);

  /// @brief Method .ctor addr 0x23a7484 size 0x38 virtual false final false
  inline void _ctor(::StringW path);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor addr 0x23a74bc size 0x3c virtual false final false
  inline void _ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x23a7744 size 0xc virtual false final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor addr 0x23a7750 size 0xc virtual false final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  /// @brief Method .ctor addr 0x23a74f8 size 0x24c virtual false final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  /// @brief Method Init addr 0x23a735c size 0x128 virtual false final false
  inline void Init(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method Init addr 0x23a775c size 0x10 virtual false final false
  inline void Init(::System::IO::Stream* stream);

  /// @brief Method Close addr 0x23a776c size 0x10 virtual true final false
  inline void Close();

  /// @brief Method Dispose addr 0x23a777c size 0xd0 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method get_CurrentEncoding addr 0x23a785c size 0x8 virtual true final false
  inline ::System::Text::Encoding* get_CurrentEncoding();

  /// @brief Method get_BaseStream addr 0x23a7864 size 0x8 virtual true final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_LeaveOpen addr 0x23a784c size 0x10 virtual false final false
  inline bool get_LeaveOpen();

  /// @brief Method get_EndOfStream addr 0x23a786c size 0x9c virtual false final false
  inline bool get_EndOfStream();

  /// @brief Method Peek addr 0x23a7908 size 0xc8 virtual true final false
  inline int32_t Peek();

  /// @brief Method Read addr 0x23a79d0 size 0xc8 virtual true final false
  inline int32_t Read();

  /// @brief Method Read addr 0x23a7a98 size 0x1c0 virtual true final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadSpan addr 0x23a7c58 size 0x268 virtual false final false
  inline int32_t ReadSpan(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadToEnd addr 0x23a81d0 size 0x11c virtual true final false
  inline ::StringW ReadToEnd();

  /// @brief Method CompressBuffer addr 0x23a82ec size 0x44 virtual false final false
  inline void CompressBuffer(int32_t n);

  /// @brief Method DetectEncoding addr 0x23a8330 size 0x2b8 virtual false final false
  inline void DetectEncoding();

  /// @brief Method IsPreamble addr 0x23a85e8 size 0x130 virtual false final false
  inline bool IsPreamble();

  /// @brief Method ReadBuffer addr 0x23a8718 size 0x16c virtual true final false
  inline int32_t ReadBuffer();

  /// @brief Method ReadBuffer addr 0x23a7ec0 size 0x310 virtual false final false
  inline int32_t ReadBuffer(::System::Span_1<char16_t> userBuffer, ByRef<bool> readToUserBuffer);

  /// @brief Method ReadLine addr 0x23a8884 size 0x260 virtual true final false
  inline ::StringW ReadLine();

  /// @brief Method DataAvailable addr 0x23a8ae4 size 0x10 virtual false final false
  inline bool DataAvailable();

  // Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamReader(StreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamReader(StreamReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamReader();

public:
  /// @brief Field _stream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _decoder, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Decoder* ____decoder;

  /// @brief Field _byteBuffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____byteBuffer;

  /// @brief Field _charBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____charBuffer;

  /// @brief Field _charPos, offset: 0x40, size: 0x4, def value: None
  int32_t ____charPos;

  /// @brief Field _charLen, offset: 0x44, size: 0x4, def value: None
  int32_t ____charLen;

  /// @brief Field _byteLen, offset: 0x48, size: 0x4, def value: None
  int32_t ____byteLen;

  /// @brief Field _bytePos, offset: 0x4c, size: 0x4, def value: None
  int32_t ____bytePos;

  /// @brief Field _maxCharsPerBuffer, offset: 0x50, size: 0x4, def value: None
  int32_t ____maxCharsPerBuffer;

  /// @brief Field _detectEncoding, offset: 0x54, size: 0x1, def value: None
  bool ____detectEncoding;

  /// @brief Field _checkPreamble, offset: 0x55, size: 0x1, def value: None
  bool ____checkPreamble;

  /// @brief Field _isBlocked, offset: 0x56, size: 0x1, def value: None
  bool ____isBlocked;

  /// @brief Field _closable, offset: 0x57, size: 0x1, def value: None
  bool ____closable;

  /// @brief Field _asyncReadTask, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____asyncReadTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StreamReader, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____decoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____byteBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____charBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____charPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____charLen) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____byteLen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____bytePos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____maxCharsPerBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____detectEncoding) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____checkPreamble) == 0x55, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____isBlocked) == 0x56, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____closable) == 0x57, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____asyncReadTask) == 0x58, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamReader*, "System.IO", "StreamReader");
