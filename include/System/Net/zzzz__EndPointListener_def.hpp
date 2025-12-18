#pragma once
// IWYU pragma private; include "System/Net/EndPointListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndPointListener)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ListenerPrefix;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class EndPointListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::EndPointListener);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.EndPointListener
class CORDL_TYPE EndPointListener : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Listener)) ::System::Net::HttpListener* Listener;

  /// @brief Field all, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_all, put = __cordl_internal_set_all)) ::System::Collections::ArrayList* all;

  /// @brief Field cert, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate* cert;

  /// @brief Field endpoint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_endpoint, put = __cordl_internal_set_endpoint)) ::System::Net::IPEndPoint* endpoint;

  /// @brief Field listener, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_listener, put = __cordl_internal_set_listener)) ::System::Net::HttpListener* listener;

  /// @brief Field prefixes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prefixes, put = __cordl_internal_set_prefixes)) ::System::Collections::Hashtable* prefixes;

  /// @brief Field secure, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_secure, put = __cordl_internal_set_secure)) bool secure;

  /// @brief Field sock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sock, put = __cordl_internal_set_sock)) ::System::Net::Sockets::Socket* sock;

  /// @brief Field unhandled, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_unhandled, put = __cordl_internal_set_unhandled)) ::System::Collections::ArrayList* unhandled;

  /// @brief Field unregistered, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_unregistered,
                      put = __cordl_internal_set_unregistered)) ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* unregistered;

  /// @brief Method Accept, addr 0x627799c, size 0x150, virtual false, abstract: false, final false
  static inline void Accept(::System::Net::Sockets::Socket* socket, ::System::Net::Sockets::SocketAsyncEventArgs* e, ::ByRef<::System::Net::Sockets::Socket*> accepted);

  /// @brief Method AddPrefix, addr 0x6279a10, size 0x380, virtual false, abstract: false, final false
  inline void AddPrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener);

  /// @brief Method AddSpecial, addr 0x6278dd0, size 0x33c, virtual false, abstract: false, final false
  inline void AddSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix);

  /// @brief Method BindContext, addr 0x6278278, size 0x58, virtual false, abstract: false, final false
  inline bool BindContext(::System::Net::HttpListenerContext* context);

  /// @brief Method CheckIfRemove, addr 0x62791fc, size 0xd0, virtual false, abstract: false, final false
  inline void CheckIfRemove();

  /// @brief Method Close, addr 0x6279520, size 0x260, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method MatchFromList, addr 0x6278ac0, size 0x310, virtual false, abstract: false, final false
  inline ::System::Net::HttpListener* MatchFromList(::StringW host, ::StringW path, ::System::Collections::ArrayList* list, ::ByRef<::System::Net::ListenerPrefix*> prefix);

  static inline ::System::Net::EndPointListener* New_ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure);

  /// @brief Method OnAccept, addr 0x6278168, size 0x8, virtual false, abstract: false, final false
  static inline void OnAccept(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method ProcessAccept, addr 0x6277af4, size 0x25c, virtual false, abstract: false, final false
  static inline void ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs* args);

  /// @brief Method RemoveConnection, addr 0x6278170, size 0x108, virtual false, abstract: false, final false
  inline void RemoveConnection(::System::Net::HttpConnection* conn);

  /// @brief Method RemovePrefix, addr 0x6279d90, size 0x2b4, virtual false, abstract: false, final false
  inline void RemovePrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener);

  /// @brief Method RemoveSpecial, addr 0x627910c, size 0xf0, virtual false, abstract: false, final false
  inline bool RemoveSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix);

  /// @brief Method SearchListener, addr 0x62782d0, size 0x620, virtual false, abstract: false, final false
  inline ::System::Net::HttpListener* SearchListener(::System::Uri* uri, ::ByRef<::System::Net::ListenerPrefix*> prefix);

  /// @brief Method UnbindContext, addr 0x62788f0, size 0x24, virtual false, abstract: false, final false
  inline void UnbindContext(::System::Net::HttpListenerContext* context);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_all() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_all();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_cert() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_cert();

  constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_endpoint() const;

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_endpoint();

  constexpr ::System::Net::HttpListener* const& __cordl_internal_get_listener() const;

  constexpr ::System::Net::HttpListener*& __cordl_internal_get_listener();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_prefixes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_prefixes();

  constexpr bool const& __cordl_internal_get_secure() const;

  constexpr bool& __cordl_internal_get_secure();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_unhandled() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_unhandled();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* const& __cordl_internal_get_unregistered() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>*& __cordl_internal_get_unregistered();

  constexpr void __cordl_internal_set_all(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set_endpoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set_listener(::System::Net::HttpListener* value);

  constexpr void __cordl_internal_set_prefixes(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_secure(bool value);

  constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_unhandled(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_unregistered(::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* value);

  /// @brief Method .ctor, addr 0x62772ec, size 0x274, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, int32_t port, bool secure);

  /// @brief Method get_Listener, addr 0x6277aec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpListener* get_Listener();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndPointListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndPointListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndPointListener(EndPointListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndPointListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndPointListener(EndPointListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11563 };

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
static_assert(offsetof(::System::Net::EndPointListener, ___listener) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___endpoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___sock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___prefixes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___unhandled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___all) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___cert) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___secure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndPointListener, ___unregistered) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::EndPointListener, 0x58>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::EndPointListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPointListener*, "System.Net", "EndPointListener");
