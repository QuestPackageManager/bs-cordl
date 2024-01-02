#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
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
struct __StreamReader___ReadBufferAsync_d__69;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Text {
class Decoder;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
struct __StreamReader___ReadLineAsyncInternal_d__61;
}
namespace System::Text {
class Encoding;
}
namespace System::IO {
class __StreamReader__NullStreamReader;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
namespace System::IO {
struct __StreamReader___ReadBufferAsync_d__69;
}
namespace System::IO {
struct __StreamReader___ReadLineAsyncInternal_d__61;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamReader);
MARK_VAL_T(::System::IO::__StreamReader___ReadBufferAsync_d__69);
MARK_VAL_T(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61);
// Type: ::<ReadLineAsyncInternal>d__61
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3402), inst: 397 }), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3573)) CS Name:
// ::StreamReader::<ReadLineAsyncInternal>d__61
struct CORDL_TYPE __StreamReader___ReadLineAsyncInternal_d__61 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2502e74, size 0x548, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25033bc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_s_5__3", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr __StreamReader___ReadLineAsyncInternal_d__61(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                         ::System::IO::StreamReader* __4__this, ::System::Text::StringBuilder* _sb_5__2,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1, ::StringW _s_5__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamReader___ReadLineAsyncInternal_d__61();

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
// Type: ::<ReadBufferAsync>d__69
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(3363)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3363), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3574)) CS Name: ::StreamReader::<ReadBufferAsync>d__69
struct CORDL_TYPE __StreamReader___ReadBufferAsync_d__69 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2503414, size 0x5f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2503a0c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "",
  // def_value: None }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_tmpStream_5__3", ty:
  // "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __StreamReader___ReadBufferAsync_d__69(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::IO::StreamReader* __4__this,
                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpByteBuffer_5__2, ::System::IO::Stream* _tmpStream_5__3,
                                                   ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamReader___ReadBufferAsync_d__69();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3575))
// CS Name: ::System.IO::StreamReader*
class CORDL_TYPE StreamReader : public ::System::IO::TextReader {
public:
  // Declarations
  using _ReadBufferAsync_d__69 = ::System::IO::__StreamReader___ReadBufferAsync_d__69;

  using _ReadLineAsyncInternal_d__61 = ::System::IO::__StreamReader___ReadLineAsyncInternal_d__61;

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

  /// @brief Method CheckAsyncTaskInProgress, addr 0x2500bec, size 0x64, virtual false, abstract: false, final false
  inline void CheckAsyncTaskInProgress();

  /// @brief Method ThrowAsyncIOInProgress, addr 0x2500c50, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowAsyncIOInProgress();

  static inline ::System::IO::StreamReader* New_ctor();

  /// @brief Method .ctor, addr 0x2500ca0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x2500d64, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x2500da0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x2501008, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x2501018, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method .ctor, addr 0x2500de0, size 0x228, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path);

  /// @brief Method .ctor, addr 0x2501150, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x2501188, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x2501410, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  /// @brief Method .ctor, addr 0x250141c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks);

  static inline ::System::IO::StreamReader* New_ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x25011c4, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);

  /// @brief Method Init, addr 0x2501028, size 0x128, virtual false, abstract: false, final false
  inline void Init(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);

  /// @brief Method Init, addr 0x2501428, size 0x10, virtual false, abstract: false, final false
  inline void Init(::System::IO::Stream* stream);

  /// @brief Method Close, addr 0x2501438, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x2501448, size 0xd0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_CurrentEncoding, addr 0x2501528, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_CurrentEncoding();

  /// @brief Method get_BaseStream, addr 0x2501530, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_LeaveOpen, addr 0x2501518, size 0x10, virtual false, abstract: false, final false
  inline bool get_LeaveOpen();

  /// @brief Method get_EndOfStream, addr 0x2501538, size 0x9c, virtual false, abstract: false, final false
  inline bool get_EndOfStream();

  /// @brief Method Peek, addr 0x25015d4, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x250169c, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x2501764, size 0x1c0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadSpan, addr 0x2501924, size 0x268, virtual false, abstract: false, final false
  inline int32_t ReadSpan(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadToEnd, addr 0x2501e9c, size 0x11c, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method CompressBuffer, addr 0x2501fb8, size 0x44, virtual false, abstract: false, final false
  inline void CompressBuffer(int32_t n);

  /// @brief Method DetectEncoding, addr 0x2501ffc, size 0x2b8, virtual false, abstract: false, final false
  inline void DetectEncoding();

  /// @brief Method IsPreamble, addr 0x25022b4, size 0x130, virtual false, abstract: false, final false
  inline bool IsPreamble();

  /// @brief Method ReadBuffer, addr 0x25023e4, size 0x16c, virtual true, abstract: false, final false
  inline int32_t ReadBuffer();

  /// @brief Method ReadBuffer, addr 0x2501b8c, size 0x310, virtual false, abstract: false, final false
  inline int32_t ReadBuffer(::System::Span_1<char16_t> userBuffer, ByRef<bool> readToUserBuffer);

  /// @brief Method ReadLine, addr 0x2502550, size 0x260, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadLineAsync, addr 0x25027b0, size 0x124, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsync();

  /// @brief Method ReadLineAsyncInternal, addr 0x2502aa0, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsyncInternal();

  /// @brief Method ReadBufferAsync, addr 0x2502b90, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadBufferAsync();

  /// @brief Method DataAvailable, addr 0x2502c88, size 0x10, virtual false, abstract: false, final false
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
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadBufferAsync_d__69, "System.IO", "StreamReader/<ReadBufferAsync>d__69");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader___ReadLineAsyncInternal_d__61, "System.IO", "StreamReader/<ReadLineAsyncInternal>d__61");
