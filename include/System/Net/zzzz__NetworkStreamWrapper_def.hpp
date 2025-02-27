#pragma once
// IWYU pragma private; include "System/Net/NetworkStreamWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStreamWrapper)
namespace System::IO {
struct SeekOrigin;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class IPAddress;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
class Object;
}
// Forward declare root types
namespace System::Net {
class NetworkStreamWrapper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkStreamWrapper);
// Dependencies System.IO.Stream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetworkStreamWrapper
class CORDL_TYPE NetworkStreamWrapper : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_NetworkStream, put = set_NetworkStream)) ::System::Net::Sockets::NetworkStream* NetworkStream;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_ServerAddress)) ::System::Net::IPAddress* ServerAddress;

  __declspec(property(get = get_Socket)) ::System::Net::Sockets::Socket* Socket;

  __declspec(property(get = get_UsingSecureStream)) bool UsingSecureStream;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field _client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client)) ::System::Net::Sockets::TcpClient* _client;

  /// @brief Field _networkStream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__networkStream, put = __cordl_internal_set__networkStream)) ::System::Net::Sockets::NetworkStream* _networkStream;

  /// @brief Method BeginRead, addr 0x44abed8, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x44abf44, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method Close, addr 0x44abea8, size 0x30, virtual false, abstract: false, final false
  inline void Close(int32_t timeout);

  /// @brief Method CloseSocket, addr 0x44a9854, size 0x38, virtual false, abstract: false, final false
  inline void CloseSocket();

  /// @brief Method Dispose, addr 0x44abdfc, size 0xac, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x44abefc, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x44abf68, size 0x24, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Flush, addr 0x44abfb0, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x44abfd4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::NetworkStreamWrapper* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method Read, addr 0x44abdb4, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ReadAsync, addr 0x44abf20, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x44abd90, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x44abff8, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SetSocketTimeoutOption, addr 0x44a858c, size 0x50, virtual false, abstract: false, final false
  inline void SetSocketTimeoutOption(int32_t timeout);

  /// @brief Method Write, addr 0x44abdd8, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method WriteAsync, addr 0x44abf8c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Net::Sockets::TcpClient* const& __cordl_internal_get__client() const;

  constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get__client();

  constexpr ::System::Net::Sockets::NetworkStream* const& __cordl_internal_get__networkStream() const;

  constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get__networkStream();

  constexpr void __cordl_internal_set__client(::System::Net::Sockets::TcpClient* value);

  constexpr void __cordl_internal_set__networkStream(::System::Net::Sockets::NetworkStream* value);

  /// @brief Method .ctor, addr 0x44aba58, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method get_CanRead, addr 0x44abc18, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x44abc38, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x44abc78, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x44abc58, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x44abd28, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_NetworkStream, addr 0x44abc08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::NetworkStream* get_NetworkStream();

  /// @brief Method get_Position, addr 0x44abd48, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x44abc98, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_ServerAddress, addr 0x44abb58, size 0x94, virtual false, abstract: false, final false
  inline ::System::Net::IPAddress* get_ServerAddress();

  /// @brief Method get_Socket, addr 0x44abbec, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_Socket();

  /// @brief Method get_UsingSecureStream, addr 0x44abadc, size 0x7c, virtual false, abstract: false, final false
  inline bool get_UsingSecureStream();

  /// @brief Method get_WriteTimeout, addr 0x44abce0, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_NetworkStream, addr 0x44abc10, size 0x8, virtual false, abstract: false, final false
  inline void set_NetworkStream(::System::Net::Sockets::NetworkStream* value);

  /// @brief Method set_Position, addr 0x44abd6c, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x44abcbc, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x44abd04, size 0x24, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStreamWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkStreamWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkStreamWrapper(NetworkStreamWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStreamWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkStreamWrapper(NetworkStreamWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9575 };

  /// @brief Field _client, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Sockets::TcpClient* ____client;

  /// @brief Field _networkStream, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::NetworkStream* ____networkStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkStreamWrapper, ____client) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkStreamWrapper, ____networkStream) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkStreamWrapper, 0x38>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetworkStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkStreamWrapper*, "System.Net", "NetworkStreamWrapper");
