#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TcpListener)
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
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
namespace System::Net::Sockets {
class TcpListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::TcpListener);
// Type: System.Net.Sockets::TcpListener
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9354))
// CS Name: ::System.Net.Sockets::TcpListener*
class CORDL_TYPE TcpListener : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ServerSocketEP, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ServerSocketEP, put = __cordl_internal_set_m_ServerSocketEP))::System::Net::IPEndPoint* m_ServerSocketEP;

  /// @brief Field m_ServerSocket, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ServerSocket, put = __cordl_internal_set_m_ServerSocket))::System::Net::Sockets::Socket* m_ServerSocket;

  /// @brief Field m_Active, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Field m_ExclusiveAddressUse, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExclusiveAddressUse, put = __cordl_internal_set_m_ExclusiveAddressUse)) bool m_ExclusiveAddressUse;

  __declspec(property(get = get_LocalEndpoint))::System::Net::EndPoint* LocalEndpoint;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_m_ServerSocketEP();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __cordl_internal_get_m_ServerSocketEP() const;

  constexpr void __cordl_internal_set_m_ServerSocketEP(::System::Net::IPEndPoint* value);

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_m_ServerSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_m_ServerSocket() const;

  constexpr void __cordl_internal_set_m_ServerSocket(::System::Net::Sockets::Socket* value);

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr void __cordl_internal_set_m_Active(bool value);

  constexpr bool& __cordl_internal_get_m_ExclusiveAddressUse();

  constexpr bool const& __cordl_internal_get_m_ExclusiveAddressUse() const;

  constexpr void __cordl_internal_set_m_ExclusiveAddressUse(bool value);

  static inline ::System::Net::Sockets::TcpListener* New_ctor(::System::Net::IPAddress* localaddr, int32_t port);

  /// @brief Method .ctor, addr 0x28fd6bc, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* localaddr, int32_t port);

  /// @brief Method get_LocalEndpoint, addr 0x28fd85c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Net::EndPoint* get_LocalEndpoint();

  /// @brief Method Start, addr 0x28fd88c, size 0x8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Start, addr 0x28fd894, size 0x18c, virtual false, abstract: false, final false
  inline void Start(int32_t backlog);

  /// @brief Method Stop, addr 0x28fda20, size 0xc4, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method BeginAcceptTcpClient, addr 0x28fdae4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginAcceptTcpClient(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndAcceptTcpClient, addr 0x28fdb98, size 0x164, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::TcpClient* EndAcceptTcpClient(::System::IAsyncResult* asyncResult);

  // Ctor Parameters [CppParam { name: "", ty: "TcpListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TcpListener(TcpListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TcpListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TcpListener(TcpListener const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TcpListener();

public:
  /// @brief Field m_ServerSocketEP, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___m_ServerSocketEP;

  /// @brief Field m_ServerSocket, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___m_ServerSocket;

  /// @brief Field m_Active, offset: 0x20, size: 0x1, def value: None
  bool ___m_Active;

  /// @brief Field m_ExclusiveAddressUse, offset: 0x21, size: 0x1, def value: None
  bool ___m_ExclusiveAddressUse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::TcpListener, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpListener, ___m_ServerSocketEP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpListener, ___m_ServerSocket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpListener, ___m_Active) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpListener, ___m_ExclusiveAddressUse) == 0x21, "Offset mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::TcpListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::TcpListener*, "System.Net.Sockets", "TcpListener");
