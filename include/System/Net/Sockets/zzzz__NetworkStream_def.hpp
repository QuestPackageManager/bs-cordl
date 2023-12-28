#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStream)
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Net::Sockets {
struct SocketShutdown;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
// Forward declare root types
namespace System::Net::Sockets {
class NetworkStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::NetworkStream);
// Type: System.Net.Sockets::NetworkStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9324))
// CS Name: ::System.Net.Sockets::NetworkStream*
class CORDL_TYPE NetworkStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field _streamSocket, offset 0x28, size 0x8
  __declspec(property(get = __get__streamSocket, put = __set__streamSocket))::System::Net::Sockets::Socket* _streamSocket;

  /// @brief Field _ownsSocket, offset 0x30, size 0x1
  __declspec(property(get = __get__ownsSocket, put = __set__ownsSocket)) bool _ownsSocket;

  /// @brief Field _readable, offset 0x31, size 0x1
  __declspec(property(get = __get__readable, put = __set__readable)) bool _readable;

  /// @brief Field _writeable, offset 0x32, size 0x1
  __declspec(property(get = __get__writeable, put = __set__writeable)) bool _writeable;

  /// @brief Field _closeTimeout, offset 0x34, size 0x4
  __declspec(property(get = __get__closeTimeout, put = __set__closeTimeout)) int32_t _closeTimeout;

  /// @brief Field _cleanedUp, offset 0x38, size 0x1
  __declspec(property(get = __get__cleanedUp, put = __set__cleanedUp)) bool _cleanedUp;

  /// @brief Field _currentReadTimeout, offset 0x3c, size 0x4
  __declspec(property(get = __get__currentReadTimeout, put = __set__currentReadTimeout)) int32_t _currentReadTimeout;

  /// @brief Field _currentWriteTimeout, offset 0x40, size 0x4
  __declspec(property(get = __get__currentWriteTimeout, put = __set__currentWriteTimeout)) int32_t _currentWriteTimeout;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  __declspec(property(get = get_DataAvailable)) bool DataAvailable;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_InternalSocket))::System::Net::Sockets::Socket* InternalSocket;

  constexpr ::System::Net::Sockets::Socket*& __get__streamSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get__streamSocket() const;

  constexpr void __set__streamSocket(::System::Net::Sockets::Socket* value);

  constexpr bool& __get__ownsSocket();

  constexpr bool const& __get__ownsSocket() const;

  constexpr void __set__ownsSocket(bool value);

  constexpr bool& __get__readable();

  constexpr bool const& __get__readable() const;

  constexpr void __set__readable(bool value);

  constexpr bool& __get__writeable();

  constexpr bool const& __get__writeable() const;

  constexpr void __set__writeable(bool value);

  constexpr int32_t& __get__closeTimeout();

  constexpr int32_t const& __get__closeTimeout() const;

  constexpr void __set__closeTimeout(int32_t value);

  constexpr bool& __get__cleanedUp();

  constexpr bool const& __get__cleanedUp() const;

  constexpr void __set__cleanedUp(bool value);

  constexpr int32_t& __get__currentReadTimeout();

  constexpr int32_t const& __get__currentReadTimeout() const;

  constexpr void __set__currentReadTimeout(int32_t value);

  constexpr int32_t& __get__currentWriteTimeout();

  constexpr int32_t const& __get__currentWriteTimeout() const;

  constexpr void __set__currentWriteTimeout(int32_t value);

  static inline ::System::Net::Sockets::NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket);

  /// @brief Method .ctor addr 0x29f156c size 0xc virtual false final false
  inline void _ctor(::System::Net::Sockets::Socket* socket);

  static inline ::System::Net::Sockets::NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket);

  /// @brief Method .ctor addr 0x29f1728 size 0xc virtual false final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket);

  static inline ::System::Net::Sockets::NetworkStream* New_ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket);

  /// @brief Method .ctor addr 0x29f1578 size 0x1b0 virtual false final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket);

  /// @brief Method get_CanRead addr 0x29f1734 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x29f173c size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x29f1744 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_CanTimeout addr 0x29f174c size 0x8 virtual true final false
  inline bool get_CanTimeout();

  /// @brief Method get_ReadTimeout addr 0x29f1754 size 0x88 virtual true final false
  inline int32_t get_ReadTimeout();

  /// @brief Method set_ReadTimeout addr 0x29f1980 size 0x88 virtual true final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method get_WriteTimeout addr 0x29f1bd4 size 0x88 virtual true final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_WriteTimeout addr 0x29f1c5c size 0x88 virtual true final false
  inline void set_WriteTimeout(int32_t value);

  /// @brief Method get_DataAvailable addr 0x29f1ce4 size 0xa8 virtual true final false
  inline bool get_DataAvailable();

  /// @brief Method get_Length addr 0x29f1e48 size 0x50 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x29f1e98 size 0x50 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x29f1ee8 size 0x50 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Seek addr 0x29f1f38 size 0x50 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method Read addr 0x29f1f88 size 0x30c virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Read addr 0x29f22fc size 0x274 virtual true final false
  inline int32_t Read(::System::Span_1<uint8_t> destination);

  /// @brief Method ReadByte addr 0x29f2660 size 0x84 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Write addr 0x29f26e4 size 0x30c virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Write addr 0x29f2a58 size 0x274 virtual true final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> source);

  /// @brief Method WriteByte addr 0x29f2d58 size 0x78 virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Close addr 0x29f2dd0 size 0x68 virtual false final false
  inline void Close(int32_t timeout);

  /// @brief Method Dispose addr 0x29f2e38 size 0x78 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize addr 0x29f2f40 size 0xa4 virtual true final false
  inline void Finalize();

  /// @brief Method BeginRead addr 0x29f2fe4 size 0x324 virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead addr 0x29f3388 size 0x21c virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method BeginWrite addr 0x29f360c size 0x324 virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x29f39b0 size 0x21c virtual true final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method ReadAsync addr 0x29f3c34 size 0x3c0 virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync addr 0x29f42b0 size 0x258 virtual true final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x29f4508 size 0x374 virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x29f4b38 size 0x254 virtual true final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Flush addr 0x29f4d8c size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x29f4d90 size 0x88 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetLength addr 0x29f4e18 size 0x50 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method SetSocketTimeoutOption addr 0x29f1a08 size 0x1cc virtual false final false
  inline void SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, int32_t timeout, bool silent);

  /// @brief Method get_InternalSocket addr 0x29f4fb8 size 0x9c virtual false final false
  inline ::System::Net::Sockets::Socket* get_InternalSocket();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkStream(NetworkStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkStream(NetworkStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStream();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::NetworkStream, 0x48>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::NetworkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::NetworkStream*, "System.Net.Sockets", "NetworkStream");
