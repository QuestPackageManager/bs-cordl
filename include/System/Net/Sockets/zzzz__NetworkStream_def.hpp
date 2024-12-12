#pragma once
// IWYU pragma private; include "System/Net/Sockets/NetworkStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStream)
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Net::Sockets {
struct SocketShutdown;
}
namespace System::Net::Sockets {
class Socket;
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
namespace System::Net::Sockets {
class NetworkStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::NetworkStream);
// Dependencies System.IO.Stream
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.NetworkStream
class CORDL_TYPE NetworkStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_DataAvailable)) bool DataAvailable;

  __declspec(property(get = get_InternalSocket)) ::System::Net::Sockets::Socket* InternalSocket;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field _cleanedUp, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__cleanedUp, put = __cordl_internal_set__cleanedUp)) bool _cleanedUp;

  /// @brief Field _closeTimeout, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__closeTimeout, put = __cordl_internal_set__closeTimeout)) int32_t _closeTimeout;

  /// @brief Field _currentReadTimeout, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__currentReadTimeout, put = __cordl_internal_set__currentReadTimeout)) int32_t _currentReadTimeout;

  /// @brief Field _currentWriteTimeout, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__currentWriteTimeout, put = __cordl_internal_set__currentWriteTimeout)) int32_t _currentWriteTimeout;

  /// @brief Field _ownsSocket, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__ownsSocket, put = __cordl_internal_set__ownsSocket)) bool _ownsSocket;

  /// @brief Field _readable, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__readable, put = __cordl_internal_set__readable)) bool _readable;

  /// @brief Field _streamSocket, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__streamSocket, put = __cordl_internal_set__streamSocket)) ::System::Net::Sockets::Socket* _streamSocket;

  /// @brief Field _writeable, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__writeable, put = __cordl_internal_set__writeable)) bool _writeable;

  /// @brief Method BeginRead, addr 0x43ef780, size 0x304, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x43efd64, size 0x304, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method Close, addr 0x43ef570, size 0x64, virtual false, abstract: false, final false
  inline void Close(int32_t timeout);

  /// @brief Method Dispose, addr 0x43ef5d4, size 0x78, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x43efafc, size 0x208, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x43f00e0, size 0x208, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Finalize, addr 0x43ef6dc, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Flush, addr 0x43f1494, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x43f1498, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::Sockets::NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket);

  static inline ::System::Net::Sockets::NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket);

  static inline ::System::Net::Sockets::NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket);

  /// @brief Method Read, addr 0x43ee7e0, size 0x2ec, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Read, addr 0x43eeb2c, size 0x258, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> destination);

  /// @brief Method ReadAsync, addr 0x43f0348, size 0x370, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x43f09a0, size 0x244, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte, addr 0x43eee84, size 0x64, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x43ee794, size 0x4c, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x43f1520, size 0x4c, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SetSocketTimeoutOption, addr 0x43ee28c, size 0x1c4, virtual false, abstract: false, final false
  inline void SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, int32_t timeout, bool silent);

  /// @brief Method Write, addr 0x43eeee8, size 0x2ec, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Write, addr 0x43ef234, size 0x258, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> source);

  /// @brief Method WriteAsync, addr 0x43f0be4, size 0x380, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x43f1254, size 0x240, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte, addr 0x43ef518, size 0x58, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  constexpr bool const& __cordl_internal_get__cleanedUp() const;

  constexpr bool& __cordl_internal_get__cleanedUp();

  constexpr int32_t const& __cordl_internal_get__closeTimeout() const;

  constexpr int32_t& __cordl_internal_get__closeTimeout();

  constexpr int32_t const& __cordl_internal_get__currentReadTimeout() const;

  constexpr int32_t& __cordl_internal_get__currentReadTimeout();

  constexpr int32_t const& __cordl_internal_get__currentWriteTimeout() const;

  constexpr int32_t& __cordl_internal_get__currentWriteTimeout();

  constexpr bool const& __cordl_internal_get__ownsSocket() const;

  constexpr bool& __cordl_internal_get__ownsSocket();

  constexpr bool const& __cordl_internal_get__readable() const;

  constexpr bool& __cordl_internal_get__readable();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get__streamSocket() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get__streamSocket();

  constexpr bool const& __cordl_internal_get__writeable() const;

  constexpr bool& __cordl_internal_get__writeable();

  constexpr void __cordl_internal_set__cleanedUp(bool value);

  constexpr void __cordl_internal_set__closeTimeout(int32_t value);

  constexpr void __cordl_internal_set__currentReadTimeout(int32_t value);

  constexpr void __cordl_internal_set__currentWriteTimeout(int32_t value);

  constexpr void __cordl_internal_set__ownsSocket(bool value);

  constexpr void __cordl_internal_set__readable(bool value);

  constexpr void __cordl_internal_set__streamSocket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set__writeable(bool value);

  /// @brief Method .ctor, addr 0x43ede0c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* socket);

  /// @brief Method .ctor, addr 0x43ede18, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket);

  /// @brief Method .ctor, addr 0x43edfb8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket);

  /// @brief Method get_CanRead, addr 0x43edfc4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x43edfcc, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x43edfdc, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x43edfd4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_DataAvailable, addr 0x43ee55c, size 0xa0, virtual true, abstract: false, final false
  inline bool get_DataAvailable();

  /// @brief Method get_InternalSocket, addr 0x43f16ac, size 0x94, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_InternalSocket();

  /// @brief Method get_Length, addr 0x43ee6b0, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x43ee6fc, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x43edfe4, size 0x88, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_WriteTimeout, addr 0x43ee450, size 0x88, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_Position, addr 0x43ee748, size 0x4c, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x43ee208, size 0x84, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x43ee4d8, size 0x84, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkStream(NetworkStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkStream(NetworkStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9840 };

  /// @brief Field _streamSocket, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ____streamSocket;

  /// @brief Field _ownsSocket, offset: 0x30, size: 0x1, def value: None
  bool ____ownsSocket;

  /// @brief Field _readable, offset: 0x31, size: 0x1, def value: None
  bool ____readable;

  /// @brief Field _writeable, offset: 0x32, size: 0x1, def value: None
  bool ____writeable;

  /// @brief Field _closeTimeout, offset: 0x34, size: 0x4, def value: None
  int32_t ____closeTimeout;

  /// @brief Field _cleanedUp, offset: 0x38, size: 0x1, def value: None
  bool ____cleanedUp;

  /// @brief Field _currentReadTimeout, offset: 0x3c, size: 0x4, def value: None
  int32_t ____currentReadTimeout;

  /// @brief Field _currentWriteTimeout, offset: 0x40, size: 0x4, def value: None
  int32_t ____currentWriteTimeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____streamSocket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____ownsSocket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____readable) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____writeable) == 0x32, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____closeTimeout) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____cleanedUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____currentReadTimeout) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::NetworkStream, ____currentWriteTimeout) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::NetworkStream, 0x48>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::NetworkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::NetworkStream*, "System.Net.Sockets", "NetworkStream");
