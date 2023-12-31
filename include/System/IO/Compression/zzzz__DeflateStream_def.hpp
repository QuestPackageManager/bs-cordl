#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateStream)
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System::IO::Compression {
class DeflateStreamNative;
}
namespace System::IO::Compression {
class __DeflateStream__ReadMethod;
}
namespace System::IO::Compression {
class __DeflateStream__WriteMethod;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO::Compression {
class DeflateStream;
}
namespace System::IO::Compression {
class __DeflateStream__ReadMethod;
}
namespace System::IO::Compression {
class __DeflateStream__WriteMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::DeflateStream);
MARK_REF_PTR_T(::System::IO::Compression::__DeflateStream__ReadMethod);
MARK_REF_PTR_T(::System::IO::Compression::__DeflateStream__WriteMethod);
// Type: ::ReadMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9548))
// CS Name: ::DeflateStream::ReadMethod*
class CORDL_TYPE __DeflateStream__ReadMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::IO::Compression::__DeflateStream__ReadMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2943780, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2944184, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method BeginInvoke, addr 0x2943858, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2943e44, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStream__ReadMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeflateStream__ReadMethod(__DeflateStream__ReadMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStream__ReadMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeflateStream__ReadMethod(__DeflateStream__ReadMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeflateStream__ReadMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::__DeflateStream__ReadMethod, 0x80>, "Size mismatch!");

} // namespace System::IO::Compression
// Type: ::WriteMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9549))
// CS Name: ::DeflateStream::WriteMethod*
class CORDL_TYPE __DeflateStream__WriteMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::IO::Compression::__DeflateStream__WriteMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2943b80, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2944198, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method BeginInvoke, addr 0x2943c58, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2943fb4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStream__WriteMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeflateStream__WriteMethod(__DeflateStream__WriteMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStream__WriteMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeflateStream__WriteMethod(__DeflateStream__WriteMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeflateStream__WriteMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::__DeflateStream__WriteMethod, 0x80>, "Size mismatch!");

} // namespace System::IO::Compression
// Type: System.IO.Compression::DeflateStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9546)), TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9550))
// CS Name: ::System.IO.Compression::DeflateStream*
class CORDL_TYPE DeflateStream : public ::System::IO::Stream {
public:
  // Declarations
  using WriteMethod = ::System::IO::Compression::__DeflateStream__WriteMethod;

  using ReadMethod = ::System::IO::Compression::__DeflateStream__ReadMethod;

  /// @brief Field base_stream, offset 0x28, size 0x8
  __declspec(property(get = __get_base_stream, put = __set_base_stream))::System::IO::Stream* base_stream;

  /// @brief Field mode, offset 0x30, size 0x4
  __declspec(property(get = __get_mode, put = __set_mode))::System::IO::Compression::CompressionMode mode;

  /// @brief Field leaveOpen, offset 0x34, size 0x1
  __declspec(property(get = __get_leaveOpen, put = __set_leaveOpen)) bool leaveOpen;

  /// @brief Field disposed, offset 0x35, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field native, offset 0x38, size 0x8
  __declspec(property(get = __get_native, put = __set_native))::System::IO::Compression::DeflateStreamNative* native;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __get_base_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_base_stream() const;

  constexpr void __set_base_stream(::System::IO::Stream* value);

  constexpr ::System::IO::Compression::CompressionMode& __get_mode();

  constexpr ::System::IO::Compression::CompressionMode const& __get_mode() const;

  constexpr void __set_mode(::System::IO::Compression::CompressionMode value);

  constexpr bool& __get_leaveOpen();

  constexpr bool const& __get_leaveOpen() const;

  constexpr void __set_leaveOpen(bool value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::IO::Compression::DeflateStreamNative*& __get_native();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::DeflateStreamNative*> const& __get_native() const;

  constexpr void __set_native(::System::IO::Compression::DeflateStreamNative* value);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  /// @brief Method .ctor, addr 0x2942984, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits);

  /// @brief Method .ctor, addr 0x2941d78, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip);

  /// @brief Method .ctor, addr 0x2942990, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, int32_t windowsBits);

  /// @brief Method .ctor, addr 0x2941e38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, int32_t windowsBits);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, bool gzip);

  /// @brief Method .ctor, addr 0x2942c30, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, bool gzip);

  /// @brief Method Finalize, addr 0x2942c40, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Dispose, addr 0x2942ce4, size 0xb8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ReadInternal, addr 0x2942ea0, size 0x48, virtual false, abstract: false, final false
  inline int32_t ReadInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method ReadAsyncMemory, addr 0x29427d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncMemory(::System::Memory_1<uint8_t> destination, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadCore, addr 0x294228c, size 0x11c, virtual false, abstract: false, final false
  inline int32_t ReadCore(::System::Span_1<uint8_t> destination);

  /// @brief Method Read, addr 0x2942f60, size 0x1ec, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteInternal, addr 0x294314c, size 0x44, virtual false, abstract: false, final false
  inline void WriteInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteAsyncMemory, addr 0x29428e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsyncMemory(::System::ReadOnlyMemory_1<uint8_t> source, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteCore, addr 0x2942578, size 0x84, virtual false, abstract: false, final false
  inline void WriteCore(::System::ReadOnlySpan_1<uint8_t> source);

  /// @brief Method Write, addr 0x29431fc, size 0x1f8, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Flush, addr 0x29433f4, size 0xb8, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method BeginRead, addr 0x2943500, size 0x280, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method BeginWrite, addr 0x2943900, size 0x280, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method EndRead, addr 0x2943d00, size 0x144, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x2943e6c, size 0x148, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Seek, addr 0x2943fc0, size 0x40, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x2944000, size 0x40, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method get_CanRead, addr 0x2944040, size 0x3c, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x294407c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x2944084, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x29440c4, size 0x40, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2944104, size 0x40, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x2944144, size 0x40, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeflateStream(DeflateStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeflateStream(DeflateStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeflateStream();

public:
  /// @brief Field base_stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___base_stream;

  /// @brief Field mode, offset: 0x30, size: 0x4, def value: None
  ::System::IO::Compression::CompressionMode ___mode;

  /// @brief Field leaveOpen, offset: 0x34, size: 0x1, def value: None
  bool ___leaveOpen;

  /// @brief Field disposed, offset: 0x35, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field native, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Compression::DeflateStreamNative* ___native;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___base_stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___leaveOpen) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___disposed) == 0x35, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___native) == 0x38, "Offset mismatch!");

} // namespace System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::DeflateStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream*, "System.IO.Compression", "DeflateStream");
NEED_NO_BOX(::System::IO::Compression::__DeflateStream__ReadMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::__DeflateStream__ReadMethod*, "System.IO.Compression", "DeflateStream/ReadMethod");
NEED_NO_BOX(::System::IO::Compression::__DeflateStream__WriteMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::__DeflateStream__WriteMethod*, "System.IO.Compression", "DeflateStream/WriteMethod");
