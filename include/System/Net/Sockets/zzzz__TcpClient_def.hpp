#pragma once
// IWYU pragma private; include "System/Net/Sockets/TcpClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TcpClient)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
// CS Name: ::System.Net.Sockets::TcpClient*
class CORDL_TYPE TcpClient : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Client, put = set_Client))::System::Net::Sockets::Socket* Client;

  __declspec(property(get = get_Connected)) bool Connected;

  /// @brief Field m_Active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Field m_CleanedUp, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CleanedUp, put = __cordl_internal_set_m_CleanedUp)) bool m_CleanedUp;

  /// @brief Field m_ClientSocket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClientSocket, put = __cordl_internal_set_m_ClientSocket))::System::Net::Sockets::Socket* m_ClientSocket;

  /// @brief Field m_DataStream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataStream, put = __cordl_internal_set_m_DataStream))::System::Net::Sockets::NetworkStream* m_DataStream;

  /// @brief Field m_Family, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Family, put = __cordl_internal_set_m_Family))::System::Net::Sockets::AddressFamily m_Family;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginConnect, addr 0x2f584cc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback* requestCallback, ::System::Object* state);

  /// @brief Method Close, addr 0x2f58838, size 0xa4, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Connect, addr 0x2f57cf0, size 0x6d0, virtual false, abstract: false, final false
  inline void Connect(::StringW hostname, int32_t port);

  /// @brief Method Connect, addr 0x2f583c0, size 0x10c, virtual false, abstract: false, final false
  inline void Connect(::System::Net::IPEndPoint* remoteEP);

  /// @brief Method ConnectAsync, addr 0x2f58580, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ConnectAsync(::StringW host, int32_t port);

  /// @brief Method Dispose, addr 0x2f58a70, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2f588dc, size 0x194, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndConnect, addr 0x2f58538, size 0x48, virtual false, abstract: false, final false
  inline void EndConnect(::System::IAsyncResult* asyncResult);

  /// @brief Method Finalize, addr 0x2f58a80, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetStream, addr 0x2f586ec, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::NetworkStream* GetStream();

  static inline ::System::Net::Sockets::TcpClient* New_ctor();

  static inline ::System::Net::Sockets::TcpClient* New_ctor(::System::Net::Sockets::Socket* acceptedSocket);

  static inline ::System::Net::Sockets::TcpClient* New_ctor(::System::Net::Sockets::AddressFamily family);

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr bool const& __cordl_internal_get_m_CleanedUp() const;

  constexpr bool& __cordl_internal_get_m_CleanedUp();

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_m_ClientSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_m_ClientSocket() const;

  constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get_m_DataStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& __cordl_internal_get_m_DataStream() const;

  constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get_m_Family() const;

  constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get_m_Family();

  constexpr void __cordl_internal_set_m_Active(bool value);

  constexpr void __cordl_internal_set_m_CleanedUp(bool value);

  constexpr void __cordl_internal_set_m_ClientSocket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_m_DataStream(::System::Net::Sockets::NetworkStream* value);

  constexpr void __cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily value);

  /// @brief Method .ctor, addr 0x2f57adc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f57c80, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* acceptedSocket);

  /// @brief Method .ctor, addr 0x2f57afc, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::AddressFamily family);

  /// @brief Method get_Client, addr 0x2f57cc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_Client();

  /// @brief Method get_Connected, addr 0x2f57cd4, size 0x1c, virtual false, abstract: false, final false
  inline bool get_Connected();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method initialize, addr 0x2f57c0c, size 0x74, virtual false, abstract: false, final false
  inline void initialize();

  /// @brief Method set_Client, addr 0x2f57ccc, size 0x8, virtual false, abstract: false, final false
  inline void set_Client(::System::Net::Sockets::Socket* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TcpClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TcpClient(TcpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TcpClient(TcpClient const&) = delete;

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
