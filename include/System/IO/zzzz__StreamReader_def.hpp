#pragma once
// IWYU pragma private; include "System/IO/StreamReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader)
namespace GlobalNamespace {
class StreamReader_NullStreamReader;
}
namespace System::IO {
struct StreamReader__ReadAsyncInternal_d__66;
}
namespace System::IO {
struct StreamReader__ReadBufferAsync_d__69;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
namespace System::IO {
struct StreamReader__ReadAsyncInternal_d__66;
}
namespace System::IO {
struct StreamReader__ReadBufferAsync_d__69;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamReader);
MARK_VAL_T(::System::IO::StreamReader__ReadAsyncInternal_d__66);
MARK_VAL_T(::System::IO::StreamReader__ReadBufferAsync_d__69);
// Dependencies System.Memory`1<T>, System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::IO {
// Is value type: true
// CS Name: System.IO.StreamReader/<ReadAsyncInternal>d__66
struct CORDL_TYPE StreamReader__ReadAsyncInternal_d__66 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3d3e1e4, size 0xa88, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3d3ec6c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamReader__ReadAsyncInternal_d__66();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::System::Memory_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_charsRead_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_readToUserBuffer_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_tmpByteBuffer_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None },
  // CppParam { name: "_tmpStream_5__5", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "_count_5__6", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_n_5__7", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "",
  // def_value: None }]
  constexpr StreamReader__ReadAsyncInternal_d__66(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, ::System::IO::StreamReader* __4__this,
                                                  ::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken, int32_t _charsRead_5__2, bool _readToUserBuffer_5__3,
                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__4, ::System::IO::Stream* _tmpStream_5__5, int32_t _count_5__6,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1, int32_t _n_5__7,
                                                  ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3576 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::IO::StreamReader* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x10, def value: None
  ::System::Memory_1<char16_t> buffer;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <charsRead>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t _charsRead_5__2;

  /// @brief Field <readToUserBuffer>5__3, offset: 0x4c, size: 0x1, def value: None
  bool _readToUserBuffer_5__3;

  /// @brief Field <tmpByteBuffer>5__4, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__4;

  /// @brief Field <tmpStream>5__5, offset: 0x58, size: 0x8, def value: None
  ::System::IO::Stream* _tmpStream_5__5;

  /// @brief Field <count>5__6, offset: 0x60, size: 0x4, def value: None
  int32_t _count_5__6;

  /// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <n>5__7, offset: 0x78, size: 0x4, def value: None
  int32_t _n_5__7;

  /// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, _charsRead_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, _readToUserBuffer_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, _tmpByteBuffer_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, _tmpStream_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, _count_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, _n_5__7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadAsyncInternal_d__66, __u__2) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StreamReader__ReadAsyncInternal_d__66, 0x90>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::IO {
// Is value type: true
// CS Name: System.IO.StreamReader/<ReadBufferAsync>d__69
struct CORDL_TYPE StreamReader__ReadBufferAsync_d__69 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3d3ecc4, size 0x600, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3d3f2c4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamReader__ReadBufferAsync_d__69();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_tmpStream_5__3", ty:
  // "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr StreamReader__ReadBufferAsync_d__69(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::IO::StreamReader* __4__this,
                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__2, ::System::IO::Stream* _tmpStream_5__3,
                                                ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::StreamReader* __4__this;

  /// @brief Field <tmpByteBuffer>5__2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__2;

  /// @brief Field <tmpStream>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* _tmpStream_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamReader__ReadBufferAsync_d__69, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadBufferAsync_d__69, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadBufferAsync_d__69, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadBufferAsync_d__69, _tmpByteBuffer_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadBufferAsync_d__69, _tmpStream_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader__ReadBufferAsync_d__69, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StreamReader__ReadBufferAsync_d__69, 0x48>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.IO.TextReader
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StreamReader
class CORDL_TYPE StreamReader : public ::System::IO::TextReader {
public:
  // Declarations
  using NullStreamReader = ::GlobalNamespace::StreamReader_NullStreamReader;

  using _ReadAsyncInternal_d__66 = ::System::IO::StreamReader__ReadAsyncInternal_d__66;

  using _ReadBufferAsync_d__69 = ::System::IO::StreamReader__ReadBufferAsync_d__69;

  __declspec(property(get = get_BaseStream)) ::System::IO::Stream* BaseStream;

  __declspec(property(get = get_CurrentEncoding)) ::System::Text::Encoding* CurrentEncoding;

  __declspec(property(get = get_EndOfStream)) bool EndOfStream;

  __declspec(property(get = get_LeaveOpen)) bool LeaveOpen;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::IO::StreamReader* Null;

  /// @brief Field _asyncReadTask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncReadTask, put = __cordl_internal_set__asyncReadTask)) ::System::Threading::Tasks::Task* _asyncReadTask;

  /// @brief Field _byteBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__byteBuffer, put = __cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _byteLen, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__byteLen, put = __cordl_internal_set__byteLen)) int32_t _byteLen;

  /// @brief Field _bytePos, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__bytePos, put = __cordl_internal_set__bytePos)) int32_t _bytePos;

  /// @brief Field _charBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__charBuffer, put = __cordl_internal_set__charBuffer)) ::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _charLen, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__charLen, put = __cordl_internal_set__charLen)) int32_t _charLen;

  /// @brief Field _charPos, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__charPos, put = __cordl_internal_set__charPos)) int32_t _charPos;

  /// @brief Field _checkPreamble, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get__checkPreamble, put = __cordl_internal_set__checkPreamble)) bool _checkPreamble;

  /// @brief Field _closable, offset 0x57, size 0x1
  __declspec(property(get = __cordl_internal_get__closable, put = __cordl_internal_set__closable)) bool _closable;

  /// @brief Field _decoder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__decoder, put = __cordl_internal_set__decoder)) ::System::Text::Decoder* _decoder;

  /// @brief Field _detectEncoding, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__detectEncoding, put = __cordl_internal_set__detectEncoding)) bool _detectEncoding;

  /// @brief Field _encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::System::Text::Encoding* _encoding;

  /// @brief Field _isBlocked, offset 0x56, size 0x1
  __declspec(property(get = __cordl_internal_get__isBlocked, put = __cordl_internal_set__isBlocked)) bool _isBlocked;

  /// @brief Field _maxCharsPerBuffer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCharsPerBuffer, put = __cordl_internal_set__maxCharsPerBuffer)) int32_t _maxCharsPerBuffer;

  /// @brief Field _stream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream)) ::System::IO::Stream* _stream;

  /// @brief Method CheckAsyncTaskInProgress, addr 0x3d3bb38, size 0x64, virtual false, abstract: false, final false
  inline void CheckAsyncTaskInProgress();

  /// @brief Method Close, addr 0x3d3c350, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CompressBuffer, addr 0x3d3d180, size 0x44, virtual false, abstract: false, final false
  inline void CompressBuffer(int32_t n);

  /// @brief Method DataAvailable, addr 0x3d3e000, size 0x10, virtual false, abstract: false, final false
  inline bool DataAvailable();

  /// @brief Method DetectEncoding, addr 0x3d3d1c4, size 0x2b4, virtual false, abstract: false, final false
  inline void DetectEncoding();

  /// @brief Method Dispose, addr 0x3d3c360, size 0xd0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Init, addr 0x3d3c340, size 0x10, virtual false, abstract: false, final false
  inline void Init(::System::IO::Stream* stream);

  /// @brief Method Init, addr 0x3d3bf58, size 0x128, virtual false, abstract: false, final false
  inline void Init(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method IsPreamble, addr 0x3d3d478, size 0x118, virtual false, abstract: false, final false
  inline bool IsPreamble();

  static inline ::System::IO::StreamReader* New_ctor();

  static inline ::System::IO::StreamReader* New_ctor(::StringW path);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method Peek, addr 0x3d3c4e8, size 0xc4, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3d3c5ac, size 0xc4, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d3c670, size 0x18c, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Read, addr 0x3d3ca14, size 0xe0, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadAsync, addr 0x3d3d958, size 0x2b4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadAsyncInternal, addr 0x3d3dde0, size 0x130, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncInternal(::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadBuffer, addr 0x3d3d590, size 0x16c, virtual true, abstract: false, final false
  inline int32_t ReadBuffer();

  /// @brief Method ReadBuffer, addr 0x3d3cd58, size 0x310, virtual false, abstract: false, final false
  inline int32_t ReadBuffer(::System::Span_1<char16_t> userBuffer, ::ByRef<bool> readToUserBuffer);

  /// @brief Method ReadBufferAsync, addr 0x3d3df10, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadBufferAsync();

  /// @brief Method ReadLine, addr 0x3d3d6fc, size 0x25c, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadSpan, addr 0x3d3c7fc, size 0x218, virtual false, abstract: false, final false
  inline int32_t ReadSpan(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadToEnd, addr 0x3d3d068, size 0x118, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method ThrowAsyncIOInProgress, addr 0x3d3bb9c, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowAsyncIOInProgress();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__asyncReadTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__asyncReadTask();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__byteBuffer();

  constexpr int32_t const& __cordl_internal_get__byteLen() const;

  constexpr int32_t& __cordl_internal_get__byteLen();

  constexpr int32_t const& __cordl_internal_get__bytePos() const;

  constexpr int32_t& __cordl_internal_get__bytePos();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__charBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__charBuffer();

  constexpr int32_t const& __cordl_internal_get__charLen() const;

  constexpr int32_t& __cordl_internal_get__charLen();

  constexpr int32_t const& __cordl_internal_get__charPos() const;

  constexpr int32_t& __cordl_internal_get__charPos();

  constexpr bool const& __cordl_internal_get__checkPreamble() const;

  constexpr bool& __cordl_internal_get__checkPreamble();

  constexpr bool const& __cordl_internal_get__closable() const;

  constexpr bool& __cordl_internal_get__closable();

  constexpr ::System::Text::Decoder* const& __cordl_internal_get__decoder() const;

  constexpr ::System::Text::Decoder*& __cordl_internal_get__decoder();

  constexpr bool const& __cordl_internal_get__detectEncoding() const;

  constexpr bool& __cordl_internal_get__detectEncoding();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr bool const& __cordl_internal_get__isBlocked() const;

  constexpr bool& __cordl_internal_get__isBlocked();

  constexpr int32_t const& __cordl_internal_get__maxCharsPerBuffer() const;

  constexpr int32_t& __cordl_internal_get__maxCharsPerBuffer();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr void __cordl_internal_set__asyncReadTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__byteLen(int32_t value);

  constexpr void __cordl_internal_set__bytePos(int32_t value);

  constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__charLen(int32_t value);

  constexpr void __cordl_internal_set__charPos(int32_t value);

  constexpr void __cordl_internal_set__checkPreamble(bool value);

  constexpr void __cordl_internal_set__closable(bool value);

  constexpr void __cordl_internal_set__decoder(::System::Text::Decoder* value);

  constexpr void __cordl_internal_set__detectEncoding(bool value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__isBlocked(bool value);

  constexpr void __cordl_internal_set__maxCharsPerBuffer(int32_t value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x3d3bbe8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d3c080, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method .ctor, addr 0x3d3c0b8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x3d3c328, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x3d3c334, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x3d3c0f4, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x3d3bcac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x3d3bce8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x3d3bf38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x3d3bf48, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x3d3bd28, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  static inline ::System::IO::StreamReader* getStaticF_Null();

  /// @brief Method get_BaseStream, addr 0x3d3c448, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_CurrentEncoding, addr 0x3d3c440, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_CurrentEncoding();

  /// @brief Method get_EndOfStream, addr 0x3d3c450, size 0x98, virtual false, abstract: false, final false
  inline bool get_EndOfStream();

  /// @brief Method get_LeaveOpen, addr 0x3d3c430, size 0x10, virtual false, abstract: false, final false
  inline bool get_LeaveOpen();

  static inline void setStaticF_Null(::System::IO::StreamReader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamReader(StreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamReader(StreamReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3578 };

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

static_assert(::cordl_internals::size_check_v<::System::IO::StreamReader, 0x60>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamReader*, "System.IO", "StreamReader");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamReader__ReadAsyncInternal_d__66, "System.IO", "StreamReader/<ReadAsyncInternal>d__66");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamReader__ReadBufferAsync_d__69, "System.IO", "StreamReader/<ReadBufferAsync>d__69");
