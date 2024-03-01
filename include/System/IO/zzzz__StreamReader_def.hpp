#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader)
namespace System::IO {
class Stream;
}
namespace System::IO {
class __StreamReader__NullStreamReader;
}
namespace System::IO {
struct __StreamReader___ReadAsyncInternal_d__66;
}
namespace System::IO {
struct __StreamReader___ReadBufferAsync_d__69;
}
namespace System::IO {
struct __StreamReader___ReadLineAsyncInternal_d__61;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncValueTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
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
struct __StreamReader___ReadAsyncInternal_d__66;
}
namespace System::IO {
struct __StreamReader___ReadBufferAsync_d__69;
}
namespace System::IO {
struct __StreamReader___ReadLineAsyncInternal_d__61;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamReader);
MARK_VAL_T(::System::IO::__StreamReader___ReadAsyncInternal_d__66);
MARK_VAL_T(::System::IO::__StreamReader___ReadBufferAsync_d__69);
MARK_VAL_T(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61);
// Type: ::<ReadLineAsyncInternal>d__61
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::StreamReader::<ReadLineAsyncInternal>d__61
struct CORDL_TYPE __StreamReader___ReadLineAsyncInternal_d__61 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x25f49bc, size 0x548, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25f4f04, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamReader___ReadLineAsyncInternal_d__61();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_s_5__3", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr __StreamReader___ReadLineAsyncInternal_d__61(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                         ::System::IO::StreamReader* __4__this, ::System::Text::StringBuilder* _sb_5__2,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1, ::StringW _s_5__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::IO::StreamReader* __4__this;

  /// @brief Field <sb>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Text::StringBuilder* _sb_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <s>5__3, offset: 0x40, size: 0x8, def value: None
  ::StringW _s_5__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, _sb_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, _s_5__3) == 0x40, "Offset mismatch!");

} // namespace System::IO
// Type: ::<ReadAsyncInternal>d__66
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::StreamReader::<ReadAsyncInternal>d__66
struct CORDL_TYPE __StreamReader___ReadAsyncInternal_d__66 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x25f4f5c, size 0xb20, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25f5a7c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamReader___ReadAsyncInternal_d__66();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::System::Memory_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_charsRead_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_readToUserBuffer_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_tmpByteBuffer_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None },
  // CppParam { name: "_tmpStream_5__5", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "_count_5__6", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_n_5__7", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr __StreamReader___ReadAsyncInternal_d__66(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder,
                                                     ::System::IO::StreamReader* __4__this, ::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken,
                                                     int32_t _charsRead_5__2, bool _readToUserBuffer_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__4,
                                                     ::System::IO::Stream* _tmpStream_5__5, int32_t _count_5__6,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1, int32_t _n_5__7,
                                                     ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept;

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <n>5__7, offset: 0x78, size: 0x4, def value: None
  int32_t _n_5__7;

  /// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamReader___ReadAsyncInternal_d__66, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, _charsRead_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, _readToUserBuffer_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, _tmpByteBuffer_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, _tmpStream_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, _count_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, _n_5__7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadAsyncInternal_d__66, __u__2) == 0x80, "Offset mismatch!");

} // namespace System::IO
// Type: ::<ReadBufferAsync>d__69
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::StreamReader::<ReadBufferAsync>d__69
struct CORDL_TYPE __StreamReader___ReadBufferAsync_d__69 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x25f5ad4, size 0x5f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25f60cc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamReader___ReadBufferAsync_d__69();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_tmpStream_5__3", ty:
  // "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __StreamReader___ReadBufferAsync_d__69(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::IO::StreamReader* __4__this,
                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__2, ::System::IO::Stream* _tmpStream_5__3,
                                                   ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept;

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
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamReader___ReadBufferAsync_d__69, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadBufferAsync_d__69, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadBufferAsync_d__69, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadBufferAsync_d__69, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadBufferAsync_d__69, _tmpByteBuffer_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadBufferAsync_d__69, _tmpStream_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__StreamReader___ReadBufferAsync_d__69, __u__1) == 0x38, "Offset mismatch!");

} // namespace System::IO
// Type: System.IO::StreamReader
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::StreamReader*
class CORDL_TYPE StreamReader : public ::System::IO::TextReader {
public:
  // Declarations
  using NullStreamReader = ::System::IO::__StreamReader__NullStreamReader;

  using _ReadAsyncInternal_d__66 = ::System::IO::__StreamReader___ReadAsyncInternal_d__66;

  using _ReadBufferAsync_d__69 = ::System::IO::__StreamReader___ReadBufferAsync_d__69;

  using _ReadLineAsyncInternal_d__61 = ::System::IO::__StreamReader___ReadLineAsyncInternal_d__61;

  __declspec(property(get = get_BaseStream))::System::IO::Stream* BaseStream;

  __declspec(property(get = get_CurrentEncoding))::System::Text::Encoding* CurrentEncoding;

  __declspec(property(get = get_EndOfStream)) bool EndOfStream;

  __declspec(property(get = get_LeaveOpen)) bool LeaveOpen;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::StreamReader* Null;

  /// @brief Field _asyncReadTask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncReadTask, put = __cordl_internal_set__asyncReadTask))::System::Threading::Tasks::Task* _asyncReadTask;

  /// @brief Field _byteBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__byteBuffer, put = __cordl_internal_set__byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _byteLen, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__byteLen, put = __cordl_internal_set__byteLen)) int32_t _byteLen;

  /// @brief Field _bytePos, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__bytePos, put = __cordl_internal_set__bytePos)) int32_t _bytePos;

  /// @brief Field _charBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__charBuffer, put = __cordl_internal_set__charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _charLen, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__charLen, put = __cordl_internal_set__charLen)) int32_t _charLen;

  /// @brief Field _charPos, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__charPos, put = __cordl_internal_set__charPos)) int32_t _charPos;

  /// @brief Field _checkPreamble, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get__checkPreamble, put = __cordl_internal_set__checkPreamble)) bool _checkPreamble;

  /// @brief Field _closable, offset 0x57, size 0x1
  __declspec(property(get = __cordl_internal_get__closable, put = __cordl_internal_set__closable)) bool _closable;

  /// @brief Field _decoder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__decoder, put = __cordl_internal_set__decoder))::System::Text::Decoder* _decoder;

  /// @brief Field _detectEncoding, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__detectEncoding, put = __cordl_internal_set__detectEncoding)) bool _detectEncoding;

  /// @brief Field _encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _isBlocked, offset 0x56, size 0x1
  __declspec(property(get = __cordl_internal_get__isBlocked, put = __cordl_internal_set__isBlocked)) bool _isBlocked;

  /// @brief Field _maxCharsPerBuffer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCharsPerBuffer, put = __cordl_internal_set__maxCharsPerBuffer)) int32_t _maxCharsPerBuffer;

  /// @brief Field _stream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream))::System::IO::Stream* _stream;

  /// @brief Method CheckAsyncTaskInProgress, addr 0x25f1958, size 0x64, virtual false, abstract: false, final false
  inline void CheckAsyncTaskInProgress();

  /// @brief Method Close, addr 0x25f21a4, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CompressBuffer, addr 0x25f3094, size 0x44, virtual false, abstract: false, final false
  inline void CompressBuffer(int32_t n);

  /// @brief Method DataAvailable, addr 0x25f47d0, size 0x10, virtual false, abstract: false, final false
  inline bool DataAvailable();

  /// @brief Method DetectEncoding, addr 0x25f30d8, size 0x2b8, virtual false, abstract: false, final false
  inline void DetectEncoding();

  /// @brief Method Dispose, addr 0x25f21b4, size 0xd0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Init, addr 0x25f2194, size 0x10, virtual false, abstract: false, final false
  inline void Init(::System::IO::Stream* stream);

  /// @brief Method Init, addr 0x25f1d94, size 0x128, virtual false, abstract: false, final false
  inline void Init(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method IsPreamble, addr 0x25f3390, size 0x130, virtual false, abstract: false, final false
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

  /// @brief Method Peek, addr 0x25f2340, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x25f2408, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x25f24d0, size 0x1c0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Read, addr 0x25f28f8, size 0xe0, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadAsync, addr 0x25f3c6c, size 0x2e4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadAsync, addr 0x25f4158, size 0x1e4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsyncInternal, addr 0x25f45dc, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncInternal(::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadBuffer, addr 0x25f34c0, size 0x16c, virtual true, abstract: false, final false
  inline int32_t ReadBuffer();

  /// @brief Method ReadBuffer, addr 0x25f2c68, size 0x310, virtual false, abstract: false, final false
  inline int32_t ReadBuffer(::System::Span_1<char16_t> userBuffer, ByRef<bool> readToUserBuffer);

  /// @brief Method ReadBufferAsync, addr 0x25f46d8, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadBufferAsync();

  /// @brief Method ReadLine, addr 0x25f362c, size 0x260, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadLineAsync, addr 0x25f388c, size 0x124, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsync();

  /// @brief Method ReadLineAsyncInternal, addr 0x25f3b7c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsyncInternal();

  /// @brief Method ReadSpan, addr 0x25f2690, size 0x268, virtual false, abstract: false, final false
  inline int32_t ReadSpan(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadToEnd, addr 0x25f2f78, size 0x11c, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method ThrowAsyncIOInProgress, addr 0x25f19bc, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowAsyncIOInProgress();

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__asyncReadTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__asyncReadTask() const;

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

  constexpr ::System::Text::Decoder*& __cordl_internal_get__decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> const& __cordl_internal_get__decoder() const;

  constexpr bool const& __cordl_internal_get__detectEncoding() const;

  constexpr bool& __cordl_internal_get__detectEncoding();

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get__encoding() const;

  constexpr bool const& __cordl_internal_get__isBlocked() const;

  constexpr bool& __cordl_internal_get__isBlocked();

  constexpr int32_t const& __cordl_internal_get__maxCharsPerBuffer() const;

  constexpr int32_t& __cordl_internal_get__maxCharsPerBuffer();

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__stream() const;

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

  /// @brief Method .ctor, addr 0x25f1a0c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25f1ebc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method .ctor, addr 0x25f1ef4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x25f217c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x25f2188, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x25f1f30, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x25f1ad0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x25f1b0c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x25f1d74, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x25f1d84, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x25f1b4c, size 0x228, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  static inline ::System::IO::StreamReader* getStaticF_Null();

  /// @brief Method get_BaseStream, addr 0x25f229c, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_CurrentEncoding, addr 0x25f2294, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_CurrentEncoding();

  /// @brief Method get_EndOfStream, addr 0x25f22a4, size 0x9c, virtual false, abstract: false, final false
  inline bool get_EndOfStream();

  /// @brief Method get_LeaveOpen, addr 0x25f2284, size 0x10, virtual false, abstract: false, final false
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
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadAsyncInternal_d__66, "System.IO", "StreamReader/<ReadAsyncInternal>d__66");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadBufferAsync_d__69, "System.IO", "StreamReader/<ReadBufferAsync>d__69");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, "System.IO", "StreamReader/<ReadLineAsyncInternal>d__61");
