#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TcpClient)
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System {
class IDisposable;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Net::Sockets {
class TcpClient;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::TcpClient);
// Type: System.Net.Sockets::TcpClient
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8174)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8190))
// CS Name: ::System.Net.Sockets::TcpClient*
class CORDL_TYPE TcpClient : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ClientSocket, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ClientSocket, put = __set_m_ClientSocket))::System::Net::Sockets::Socket* m_ClientSocket;

  /// @brief Field m_Active, offset 0x18, size 0x1
  __declspec(property(get = __get_m_Active, put = __set_m_Active)) bool m_Active;

  /// @brief Field m_DataStream, offset 0x20, size 0x8
  __declspec(property(get = __get_m_DataStream, put = __set_m_DataStream))::System::Net::Sockets::NetworkStream* m_DataStream;

  /// @brief Field m_Family, offset 0x28, size 0x4
  __declspec(property(get = __get_m_Family, put = __set_m_Family))::System::Net::Sockets::AddressFamily m_Family;

  /// @brief Field m_CleanedUp, offset 0x2c, size 0x1
  __declspec(property(get = __get_m_CleanedUp, put = __set_m_CleanedUp)) bool m_CleanedUp;

  __declspec(property(get = get_Client, put = set_Client))::System::Net::Sockets::Socket* Client;

  __declspec(property(get = get_Connected)) bool Connected;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Net::Sockets::Socket*& __get_m_ClientSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get_m_ClientSocket() const;

  constexpr void __set_m_ClientSocket(::System::Net::Sockets::Socket* value);

  constexpr bool& __get_m_Active();

  constexpr bool const& __get_m_Active() const;

  constexpr void __set_m_Active(bool value);

  constexpr ::System::Net::Sockets::NetworkStream*& __get_m_DataStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& __get_m_DataStream() const;

  constexpr void __set_m_DataStream(::System::Net::Sockets::NetworkStream* value);

  constexpr ::System::Net::Sockets::AddressFamily& __get_m_Family();

  constexpr ::System::Net::Sockets::AddressFamily const& __get_m_Family() const;

  constexpr void __set_m_Family(::System::Net::Sockets::AddressFamily value);

  constexpr bool& __get_m_CleanedUp();

  constexpr bool const& __get_m_CleanedUp() const;

  constexpr void __set_m_CleanedUp(bool value);

  static inline ::System::Net::Sockets::TcpClient* New_ctor();

  /// @brief Method .ctor addr 0x277e654 size 0x20 virtual false final false
  inline void _ctor();

  static inline ::System::Net::Sockets::TcpClient* New_ctor(::System::Net::Sockets::AddressFamily family);

  /// @brief Method .ctor addr 0x277e674 size 0x110 virtual false final false
  inline void _ctor(::System::Net::Sockets::AddressFamily family);

  static inline ::System::Net::Sockets::TcpClient* New_ctor(::System::Net::Sockets::Socket* acceptedSocket);

  /// @brief Method .ctor addr 0x277e7f8 size 0x44 virtual false final false
  inline void _ctor(::System::Net::Sockets::Socket* acceptedSocket);

  /// @brief Method get_Client addr 0x277e83c size 0x8 virtual false final false
  inline ::System::Net::Sockets::Socket* get_Client();

  /// @brief Method set_Client addr 0x277e844 size 0x8 virtual false final false
  inline void set_Client(::System::Net::Sockets::Socket* value);

  /// @brief Method get_Connected addr 0x277e84c size 0x1c virtual false final false
  inline bool get_Connected();

  /// @brief Method Connect addr 0x277e868 size 0x6d0 virtual false final false
  inline void Connect(::StringW hostname, int32_t port);

  /// @brief Method Connect addr 0x277ef38 size 0x10c virtual false final false
  inline void Connect(::System::Net::IPEndPoint* remoteEP);

  /// @brief Method BeginConnect addr 0x277f044 size 0x6c virtual false final false
  inline ::System::IAsyncResult* BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback* requestCallback, ::System::Object* state);

  /// @brief Method EndConnect addr 0x277f0b0 size 0x48 virtual false final false
  inline void EndConnect(::System::IAsyncResult* asyncResult);

  /// @brief Method ConnectAsync addr 0x277f0f8 size 0x16c virtual false final false
  inline ::System::Threading::Tasks::Task* ConnectAsync(::StringW host, int32_t port);

  /// @brief Method GetStream addr 0x277f264 size 0x14c virtual false final false
  inline ::System::Net::Sockets::NetworkStream* GetStream();

  /// @brief Method Close addr 0x277f3b0 size 0xa4 virtual false final false
  inline void Close();

  /// @brief Method Dispose addr 0x277f454 size 0x194 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Dispose addr 0x277f5e8 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method Finalize addr 0x277f5f8 size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method initialize addr 0x277e784 size 0x74 virtual false final false
  inline void initialize();

  // Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TcpClient(TcpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TcpClient(TcpClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TcpClient();

public:
  /// @brief Field m_ClientSocket, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___m_ClientSocket;

  /// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
  bool ___m_Active;

  /// @brief Field m_DataStream, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Sockets::NetworkStream* ___m_DataStream;

  /// @brief Field m_Family, offset: 0x28, size: 0x4, def value: None
  ::System::Net::Sockets::AddressFamily ___m_Family;

  /// @brief Field m_CleanedUp, offset: 0x2c, size: 0x1, def value: None
  bool ___m_CleanedUp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::TcpClient, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_ClientSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_DataStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_Family) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_CleanedUp) == 0x2c, "Offset mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::TcpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::TcpClient*, "System.Net.Sockets", "TcpClient");
