#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::IO::Compression {
struct CompressionMode;
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
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
class DeflateStream;
}
// Forward declare root types
namespace System::IO::Compression {
class GZipStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::GZipStream);
// Type: System.IO.Compression::GZipStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9547))
// CS Name: ::System.IO.Compression::GZipStream*
class CORDL_TYPE GZipStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field _deflateStream, offset 0x28, size 0x8
  __declspec(property(get = __get__deflateStream, put = __set__deflateStream))::System::IO::Compression::DeflateStream* _deflateStream;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Compression::DeflateStream*& __get__deflateStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::DeflateStream*> const& __get__deflateStream() const;

  constexpr void __set__deflateStream(::System::IO::Compression::DeflateStream* value);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  /// @brief Method .ctor, addr 0x2941cb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen);

  /// @brief Method .ctor, addr 0x2941cc0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel);

  /// @brief Method .ctor, addr 0x2941d84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel);

  static inline ::System::IO::Compression::GZipStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen);

  /// @brief Method .ctor, addr 0x2941d8c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen);

  /// @brief Method get_CanRead, addr 0x2941e48, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x2941e60, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek, addr 0x2941e78, size 0x18, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_Length, addr 0x2941e90, size 0x50, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2941ee0, size 0x50, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x2941f30, size 0x50, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method Flush, addr 0x2941f80, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method Seek, addr 0x2941fbc, size 0x50, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x294200c, size 0x50, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method ReadByte, addr 0x294205c, size 0x24, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method BeginRead, addr 0x2942080, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method EndRead, addr 0x2942134, size 0x48, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method Read, addr 0x294217c, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Read, addr 0x29421a0, size 0xec, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method BeginWrite, addr 0x29423a8, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState);

  /// @brief Method EndWrite, addr 0x294245c, size 0xc, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Write, addr 0x2942468, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x294248c, size 0xec, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method CopyTo, addr 0x29425fc, size 0x24, virtual true, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method Dispose, addr 0x2942620, size 0xb8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ReadAsync, addr 0x29426d8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x29426fc, size 0xdc, virtual true, abstract: false, final false
  /// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken = {});

  /// @brief Method WriteAsync, addr 0x29427e0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x2942804, size 0xdc, virtual true, abstract: false, final false
  /// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken = {});

  /// @brief Method FlushAsync, addr 0x29428e8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CopyToAsync, addr 0x294290c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckDeflateStream, addr 0x2941fa4, size 0x18, virtual false, abstract: false, final false
  inline void CheckDeflateStream();

  /// @brief Method ThrowStreamClosedException, addr 0x2942930, size 0x54, virtual false, abstract: false, final false
  static inline void ThrowStreamClosedException();

  // Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GZipStream(GZipStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GZipStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GZipStream(GZipStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GZipStream();

public:
  /// @brief Field _deflateStream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Compression::DeflateStream* ____deflateStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::GZipStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::IO::Compression::GZipStream, ____deflateStream) == 0x28, "Offset mismatch!");

} // namespace System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::GZipStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::GZipStream*, "System.IO.Compression", "GZipStream");
