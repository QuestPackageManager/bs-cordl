#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndPointListener)
namespace System::Net {
class HttpListenerContext;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class ListenerPrefix;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class Uri;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class EndPointListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::EndPointListener);
// Type: System.Net::EndPointListener
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9164))
// CS Name: ::System.Net::EndPointListener*
class CORDL_TYPE EndPointListener : public ::System::Object {
public:
  // Declarations
  /// @brief Field listener, offset 0x10, size 0x8
  __declspec(property(get = __get_listener, put = __set_listener))::System::Net::HttpListener* listener;

  /// @brief Field endpoint, offset 0x18, size 0x8
  __declspec(property(get = __get_endpoint, put = __set_endpoint))::System::Net::IPEndPoint* endpoint;

  /// @brief Field sock, offset 0x20, size 0x8
  __declspec(property(get = __get_sock, put = __set_sock))::System::Net::Sockets::Socket* sock;

  /// @brief Field prefixes, offset 0x28, size 0x8
  __declspec(property(get = __get_prefixes, put = __set_prefixes))::System::Collections::Hashtable* prefixes;

  /// @brief Field unhandled, offset 0x30, size 0x8
  __declspec(property(get = __get_unhandled, put = __set_unhandled))::System::Collections::ArrayList* unhandled;

  /// @brief Field all, offset 0x38, size 0x8
  __declspec(property(get = __get_all, put = __set_all))::System::Collections::ArrayList* all;

  /// @brief Field cert, offset 0x40, size 0x8
  __declspec(property(get = __get_cert, put = __set_cert))::System::Security::Cryptography::X509Certificates::X509Certificate* cert;

  /// @brief Field secure, offset 0x48, size 0x1
  __declspec(property(get = __get_secure, put = __set_secure)) bool secure;

  /// @brief Field unregistered, offset 0x50, size 0x8
  __declspec(property(get = __get_unregistered, put = __set_unregistered))::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* unregistered;

  __declspec(property(get = get_Listener))::System::Net::HttpListener* Listener;

  constexpr ::System::Net::HttpListener*& __get_listener();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> const& __get_listener() const;

  constexpr void __set_listener(::System::Net::HttpListener* value);

  constexpr ::System::Net::IPEndPoint*& __get_endpoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __get_endpoint() const;

  constexpr void __set_endpoint(::System::Net::IPEndPoint* value);

  constexpr ::System::Net::Sockets::Socket*& __get_sock();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get_sock() const;

  constexpr void __set_sock(::System::Net::Sockets::Socket* value);

  constexpr ::System::Collections::Hashtable*& __get_prefixes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_prefixes() const;

  constexpr void __set_prefixes(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::ArrayList*& __get_unhandled();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_unhandled() const;

  constexpr void __set_unhandled(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __get_all();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_all() const;

  constexpr void __set_all(::System::Collections::ArrayList* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __get_cert();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __get_cert() const;

  constexpr void __set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr bool& __get_secure();

  constexpr bool const& __get_secure() const;

  constexpr void __set_secure(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>*& __get_unregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>*> const& __get_unregistered() const;

  constexpr void __set_unregistered(::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* value);

  static inline ::System::Net::EndPointListener* New_ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure);

  /// @brief Method .ctor addr 0x29c07b4 size 0x244 virtual false final false
  inline void _ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure);

  /// @brief Method get_Listener addr 0x29c0f4c size 0x8 virtual false final false
  inline ::System::Net::HttpListener* get_Listener();

  /// @brief Method Accept addr 0x29c0e04 size 0x148 virtual false final false
  static inline void Accept(::System::Net::Sockets::Socket* socket, ::System::Net::Sockets::SocketAsyncEventArgs* e, ByRef<::System::Net::Sockets::Socket*> accepted);

  /// @brief Method ProcessAccept addr 0x29c0f54 size 0x24c virtual false final false
  static inline void ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs* args);

  /// @brief Method OnAccept addr 0x29c15a8 size 0x8 virtual false final false
  static inline void OnAccept(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method RemoveConnection addr 0x29c15b0 size 0x100 virtual false final false
  inline void RemoveConnection(::System::Net::HttpConnection* conn);

  /// @brief Method BindContext addr 0x29c16b0 size 0x54 virtual false final false
  inline bool BindContext(::System::Net::HttpListenerContext* context);

  /// @brief Method UnbindContext addr 0x29c1d54 size 0x2c virtual false final false
  inline void UnbindContext(::System::Net::HttpListenerContext* context);

  /// @brief Method SearchListener addr 0x29c1704 size 0x650 virtual false final false
  inline ::System::Net::HttpListener* SearchListener(::System::Uri* uri, ByRef<::System::Net::ListenerPrefix*> prefix);

  /// @brief Method MatchFromList addr 0x29c1f48 size 0x334 virtual false final false
  inline ::System::Net::HttpListener* MatchFromList(::StringW host, ::StringW path, ::System::Collections::ArrayList* list, ByRef<::System::Net::ListenerPrefix*> prefix);

  /// @brief Method AddSpecial addr 0x29c227c size 0x364 virtual false final false
  inline void AddSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix);

  /// @brief Method RemoveSpecial addr 0x29c25e0 size 0xf0 virtual false final false
  inline bool RemoveSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix);

  /// @brief Method CheckIfRemove addr 0x29c26d0 size 0xcc virtual false final false
  inline void CheckIfRemove();

  /// @brief Method Close addr 0x29c29fc size 0x2b8 virtual false final false
  inline void Close();

  /// @brief Method AddPrefix addr 0x29c2f1c size 0x380 virtual false final false
  inline void AddPrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener);

  /// @brief Method RemovePrefix addr 0x29c329c size 0x2a0 virtual false final false
  inline void RemovePrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener);

  // Ctor Parameters [CppParam { name: "", ty: "EndPointListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndPointListener(EndPointListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndPointListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndPointListener(EndPointListener const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndPointListener();

public:
  /// @brief Field listener, offset: 0x10, size: 0x8, def value: None
  ::System::Net::HttpListener* ___listener;

  /// @brief Field endpoint, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ___endpoint;

  /// @brief Field sock, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___sock;

  /// @brief Field prefixes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___prefixes;

  /// @brief Field unhandled, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___unhandled;

  /// @brief Field all, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___all;

  /// @brief Field cert, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ___cert;

  /// @brief Field secure, offset: 0x48, size: 0x1, def value: None
  bool ___secure;

  /// @brief Field unregistered, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* ___unregistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::EndPointListener, 0x58>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::EndPointListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPointListener*, "System.Net", "EndPointListener");
