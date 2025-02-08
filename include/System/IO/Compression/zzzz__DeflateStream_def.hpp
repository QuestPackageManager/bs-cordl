#pragma once
// IWYU pragma private; include "System/IO/Compression/DeflateStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
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
class DeflateStream_ReadMethod;
}
namespace System::IO::Compression {
class DeflateStream_WriteMethod;
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
struct IntPtr;
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
class DeflateStream_ReadMethod;
}
namespace System::IO::Compression {
class DeflateStream_WriteMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::DeflateStream);
MARK_REF_PTR_T(::System::IO::Compression::DeflateStream_ReadMethod);
MARK_REF_PTR_T(::System::IO::Compression::DeflateStream_WriteMethod);
// Dependencies System.MulticastDelegate
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.DeflateStream/ReadMethod
class CORDL_TYPE DeflateStream_ReadMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x448d454, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x448d9e4, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x448dcf4, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  static inline ::System::IO::Compression::DeflateStream_ReadMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x448d3b4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeflateStream_ReadMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream_ReadMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeflateStream_ReadMethod(DeflateStream_ReadMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream_ReadMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeflateStream_ReadMethod(DeflateStream_ReadMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateStream_ReadMethod, 0x80>, "Size mismatch!");

} // namespace System::IO::Compression
// Dependencies System.MulticastDelegate
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.DeflateStream/WriteMethod
class CORDL_TYPE DeflateStream_WriteMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x448d800, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x448db4c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x448dd08, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  static inline ::System::IO::Compression::DeflateStream_WriteMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x448d760, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeflateStream_WriteMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream_WriteMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeflateStream_WriteMethod(DeflateStream_WriteMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream_WriteMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeflateStream_WriteMethod(DeflateStream_WriteMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateStream_WriteMethod, 0x80>, "Size mismatch!");

} // namespace System::IO::Compression
// Dependencies System.IO.Compression.CompressionMode, System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.DeflateStream
class CORDL_TYPE DeflateStream : public ::System::IO::Stream {
public:
  // Declarations
  using ReadMethod = ::System::IO::Compression::DeflateStream_ReadMethod;

  using WriteMethod = ::System::IO::Compression::DeflateStream_WriteMethod;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field base_stream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_base_stream, put = __cordl_internal_set_base_stream)) ::System::IO::Stream* base_stream;

  /// @brief Field disposed, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field leaveOpen, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_leaveOpen, put = __cordl_internal_set_leaveOpen)) bool leaveOpen;

  /// @brief Field mode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::System::IO::Compression::CompressionMode mode;

  /// @brief Field native, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_native, put = __cordl_internal_set_native)) ::System::IO::Compression::DeflateStreamNative* native;

  /// @brief Method BeginRead, addr 0x448d150, size 0x264, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method BeginWrite, addr 0x448d4fc, size 0x264, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method Dispose, addr 0x448c974, size 0xb8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x448d8a8, size 0x13c, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x448da0c, size 0x140, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Finalize, addr 0x448c8d0, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Flush, addr 0x448d04c, size 0xb0, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, bool gzip);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, int32_t windowsBits);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  static inline ::System::IO::Compression::DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits);

  /// @brief Method Read, addr 0x448cbf0, size 0x1d0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method ReadAsyncMemory, addr 0x448c478, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncMemory(::System::Memory_1<uint8_t> destination, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadCore, addr 0x448bf34, size 0x118, virtual false, abstract: false, final false
  inline int32_t ReadCore(::System::Span_1<uint8_t> destination);

  /// @brief Method ReadInternal, addr 0x448cb30, size 0x48, virtual false, abstract: false, final false
  inline int32_t ReadInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x448db58, size 0x38, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x448db90, size 0x38, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x448ce70, size 0x1dc, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteAsyncMemory, addr 0x448c57c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsyncMemory(::System::ReadOnlyMemory_1<uint8_t> source, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteCore, addr 0x448c21c, size 0x84, virtual false, abstract: false, final false
  inline void WriteCore(::System::ReadOnlySpan_1<uint8_t> source);

  /// @brief Method WriteInternal, addr 0x448cdc0, size 0x44, virtual false, abstract: false, final false
  inline void WriteInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  constexpr ::System::IO::Stream* const& __cordl_internal_get_base_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_base_stream();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_leaveOpen() const;

  constexpr bool& __cordl_internal_get_leaveOpen();

  constexpr ::System::IO::Compression::CompressionMode const& __cordl_internal_get_mode() const;

  constexpr ::System::IO::Compression::CompressionMode& __cordl_internal_get_mode();

  constexpr ::System::IO::Compression::DeflateStreamNative* const& __cordl_internal_get_native() const;

  constexpr ::System::IO::Compression::DeflateStreamNative*& __cordl_internal_get_native();

  constexpr void __cordl_internal_set_base_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_leaveOpen(bool value);

  constexpr void __cordl_internal_set_mode(::System::IO::Compression::CompressionMode value);

  constexpr void __cordl_internal_set_native(::System::IO::Compression::DeflateStreamNative* value);

  /// @brief Method .ctor, addr 0x448c628, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip);

  /// @brief Method .ctor, addr 0x448c8c0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, bool gzip);

  /// @brief Method .ctor, addr 0x448baf4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen, int32_t windowsBits);

  /// @brief Method .ctor, addr 0x448c61c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  /// @brief Method .ctor, addr 0x448ba3c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int32_t windowsBits);

  /// @brief Method get_CanRead, addr 0x448dbc8, size 0x3c, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x448dc04, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x448dc0c, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x448dc4c, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x448dc84, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x448dcbc, size 0x38, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeflateStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeflateStream(DeflateStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeflateStream(DeflateStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9534 };

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
static_assert(offsetof(::System::IO::Compression::DeflateStream, ___base_stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___leaveOpen) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___disposed) == 0x35, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStream, ___native) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateStream, 0x40>, "Size mismatch!");

} // namespace System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::DeflateStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream*, "System.IO.Compression", "DeflateStream");
NEED_NO_BOX(::System::IO::Compression::DeflateStream_ReadMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream_ReadMethod*, "System.IO.Compression", "DeflateStream/ReadMethod");
NEED_NO_BOX(::System::IO::Compression::DeflateStream_WriteMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream_WriteMethod*, "System.IO.Compression", "DeflateStream/WriteMethod");
