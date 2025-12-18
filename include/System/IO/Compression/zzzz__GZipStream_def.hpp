#pragma once
// IWYU pragma private; include "System/IO/Compression/GZipStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipStream)
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System::IO::Compression {
class DeflateStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
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
class GZipStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::GZipStream);
// Dependencies System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.GZipStream
class CORDL_TYPE GZipStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field _deflateStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__deflateStream, put = __cordl_internal_set__deflateStream)) ::System::IO::Compression::DeflateStream* _deflateStream;

  /// @brief Method BeginRead, addr 0x623e8ac, size 0xb0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method BeginWrite, addr 0x623ebb8, size 0xb0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method CheckDeflateStream, addr 0x623e7e0, size 0x14, virtual false, abstract: false, final false
  inline void CheckDeflateStream();

  /// @brief Method CopyTo, addr 0x623edf8, size 0x20, virtual true, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync, addr 0x623f06c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x623ee18, size 0x64, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x623e95c, size 0x4c, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x623ec68, size 0xc, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Flush, addr 0x623e7c0, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x623f04c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen);

  /// @brief Method Read, addr 0x623e9a8, size 0x20, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Read, addr 0x623e9c8, size 0xc8, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadAsync, addr 0x623ee7c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x623ee9c, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte, addr 0x623e88c, size 0x20, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x623e7f4, size 0x4c, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x623e840, size 0x4c, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method ThrowStreamClosedException, addr 0x623f08c, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowStreamClosedException();

  /// @brief Method Write, addr 0x623ec74, size 0x20, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x623ec94, size 0xc8, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync, addr 0x623ef64, size 0x20, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x623ef84, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::IO::Compression::DeflateStream* const& __cordl_internal_get__deflateStream() const;

  constexpr ::System::IO::Compression::DeflateStream*& __cordl_internal_get__deflateStream();

  constexpr void __cordl_internal_set__deflateStream(::System::IO::Compression::DeflateStream* value);

  /// @brief Method .ctor, addr 0x623e5e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel);

  /// @brief Method .ctor, addr 0x623e5e8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen);

  /// @brief Method .ctor, addr 0x623e524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  /// @brief Method .ctor, addr 0x623e52c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen);

  /// @brief Method get_CanRead, addr 0x623e694, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x623e6c4, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x623e6ac, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x623e6dc, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x623e728, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x623e774, size 0x4c, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GZipStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GZipStream(GZipStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GZipStream(GZipStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11410 };

  /// @brief Field _deflateStream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Compression::DeflateStream* ____deflateStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::GZipStream, ____deflateStream) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::GZipStream, 0x30>, "Size mismatch!");

} // namespace System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::GZipStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::GZipStream*, "System.IO.Compression", "GZipStream");
