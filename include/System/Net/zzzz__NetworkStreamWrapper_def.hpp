#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Net::NetworkStreamWrapper
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9054))
// CS Name: ::System.Net::NetworkStreamWrapper*
class CORDL_TYPE NetworkStreamWrapper : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field _client, offset 0x28, size 0x8
  __declspec(property(get = __get__client, put = __set__client))::System::Net::Sockets::TcpClient* _client;

  /// @brief Field _networkStream, offset 0x30, size 0x8
  __declspec(property(get = __get__networkStream, put = __set__networkStream))::System::Net::Sockets::NetworkStream* _networkStream;

  __declspec(property(get = get_UsingSecureStream)) bool UsingSecureStream;

  __declspec(property(get = get_ServerAddress))::System::Net::IPAddress* ServerAddress;

  __declspec(property(get = get_Socket))::System::Net::Sockets::Socket* Socket;

  __declspec(property(get = get_NetworkStream, put = set_NetworkStream))::System::Net::Sockets::NetworkStream* NetworkStream;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::Net::Sockets::TcpClient*& __get__client();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpClient*> const& __get__client() const;

  constexpr void __set__client(::System::Net::Sockets::TcpClient* value);

  constexpr ::System::Net::Sockets::NetworkStream*& __get__networkStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& __get__networkStream() const;

  constexpr void __set__networkStream(::System::Net::Sockets::NetworkStream* value);

  static inline ::System::Net::NetworkStreamWrapper* New_ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method .ctor, addr 0x298cc98, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::TcpClient* client);

  /// @brief Method get_UsingSecureStream, addr 0x298faa8, size 0x7c, virtual false, abstract: false, final false
  inline bool get_UsingSecureStream();

  /// @brief Method get_ServerAddress, addr 0x298f284, size 0x94, virtual false, abstract: false, final false
  inline ::System::Net::IPAddress* get_ServerAddress();

  /// @brief Method get_Socket, addr 0x2990f98, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_Socket();

  /// @brief Method get_NetworkStream, addr 0x299af8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::NetworkStream* get_NetworkStream();

  /// @brief Method set_NetworkStream, addr 0x299af94, size 0x8, virtual false, abstract: false, final false
  inline void set_NetworkStream(::System::Net::Sockets::NetworkStream* value);

  /// @brief Method get_CanRead, addr 0x299af9c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x299afbc, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x299afdc, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_CanTimeout, addr 0x299affc, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_ReadTimeout, addr 0x299b01c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method set_ReadTimeout, addr 0x299b040, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method get_WriteTimeout, addr 0x299b064, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_WriteTimeout, addr 0x299b088, size 0x24, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

  /// @brief Method get_Length, addr 0x299b0ac, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x299b0cc, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x299b0f0, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method Seek, addr 0x299b114, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method Read, addr 0x299b138, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Write, addr 0x299b15c, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Dispose, addr 0x299b180, size 0xac, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method CloseSocket, addr 0x298e1b4, size 0x38, virtual false, abstract: false, final false
  inline void CloseSocket();

  /// @brief Method Close, addr 0x298cf14, size 0x30, virtual false, abstract: false, final false
  inline void Close(int32_t timeout);

  /// @brief Method BeginRead, addr 0x299b22c, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead, addr 0x299b250, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method ReadAsync, addr 0x299b274, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BeginWrite, addr 0x299b298, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite, addr 0x299b2bc, size 0x24, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method WriteAsync, addr 0x299b2e0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Flush, addr 0x299b304, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x299b328, size 0x24, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetLength, addr 0x299b34c, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SetSocketTimeoutOption, addr 0x299878c, size 0x50, virtual false, abstract: false, final false
  inline void SetSocketTimeoutOption(int32_t timeout);

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStreamWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkStreamWrapper(NetworkStreamWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStreamWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkStreamWrapper(NetworkStreamWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStreamWrapper();

public:
  /// @brief Field _client, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Sockets::TcpClient* ____client;

  /// @brief Field _networkStream, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::NetworkStream* ____networkStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkStreamWrapper, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkStreamWrapper, ____client) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkStreamWrapper, ____networkStream) == 0x30, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetworkStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkStreamWrapper*, "System.Net", "NetworkStreamWrapper");
