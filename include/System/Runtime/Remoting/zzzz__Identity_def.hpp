#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Identity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Identity)
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class Identity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Identity);
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.Identity
class CORDL_TYPE Identity : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChannelSink, put = set_ChannelSink)) ::System::Runtime::Remoting::Messaging::IMessageSink* ChannelSink;

  __declspec(property(get = get_ClientDynamicProperties)) ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* ClientDynamicProperties;

  __declspec(property(get = get_Disposed, put = set_Disposed)) bool Disposed;

  __declspec(property(get = get_EnvoySink)) ::System::Runtime::Remoting::Messaging::IMessageSink* EnvoySink;

  __declspec(property(get = get_HasServerDynamicSinks)) bool HasServerDynamicSinks;

  __declspec(property(get = get_IsConnected)) bool IsConnected;

  __declspec(property(get = get_ObjectUri, put = set_ObjectUri)) ::StringW ObjectUri;

  /// @brief Field _channelSink, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__channelSink, put = __cordl_internal_set__channelSink)) ::System::Runtime::Remoting::Messaging::IMessageSink* _channelSink;

  /// @brief Field _clientDynamicProperties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__clientDynamicProperties,
                      put = __cordl_internal_set__clientDynamicProperties)) ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _clientDynamicProperties;

  /// @brief Field _disposed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _envoySink, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__envoySink, put = __cordl_internal_set__envoySink)) ::System::Runtime::Remoting::Messaging::IMessageSink* _envoySink;

  /// @brief Field _objRef, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__objRef, put = __cordl_internal_set__objRef)) ::System::Runtime::Remoting::ObjRef* _objRef;

  /// @brief Field _objectUri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objectUri, put = __cordl_internal_set__objectUri)) ::StringW _objectUri;

  /// @brief Field _serverDynamicProperties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serverDynamicProperties,
                      put = __cordl_internal_set__serverDynamicProperties)) ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _serverDynamicProperties;

  /// @brief Method CreateObjRef, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);

  static inline ::System::Runtime::Remoting::Identity* New_ctor(::StringW objectUri);

  /// @brief Method NotifyClientDynamicSinks, addr 0x3cc70dc, size 0x74, virtual false, abstract: false, final false
  inline void NotifyClientDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);

  /// @brief Method NotifyServerDynamicSinks, addr 0x3cc7150, size 0x74, virtual false, abstract: false, final false
  inline void NotifyServerDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__channelSink() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__channelSink();

  constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* const& __cordl_internal_get__clientDynamicProperties() const;

  constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& __cordl_internal_get__clientDynamicProperties();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__envoySink() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__envoySink();

  constexpr ::System::Runtime::Remoting::ObjRef* const& __cordl_internal_get__objRef() const;

  constexpr ::System::Runtime::Remoting::ObjRef*& __cordl_internal_get__objRef();

  constexpr ::StringW const& __cordl_internal_get__objectUri() const;

  constexpr ::StringW& __cordl_internal_get__objectUri();

  constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* const& __cordl_internal_get__serverDynamicProperties() const;

  constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& __cordl_internal_get__serverDynamicProperties();

  constexpr void __cordl_internal_set__channelSink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  constexpr void __cordl_internal_set__clientDynamicProperties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__envoySink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  constexpr void __cordl_internal_set__objRef(::System::Runtime::Remoting::ObjRef* value);

  constexpr void __cordl_internal_set__objectUri(::StringW value);

  constexpr void __cordl_internal_set__serverDynamicProperties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);

  /// @brief Method .ctor, addr 0x3cc6ff0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectUri);

  /// @brief Method get_ChannelSink, addr 0x3cc7018, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* get_ChannelSink();

  /// @brief Method get_ClientDynamicProperties, addr 0x3cc7064, size 0x64, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* get_ClientDynamicProperties();

  /// @brief Method get_Disposed, addr 0x3cc7050, size 0x8, virtual false, abstract: false, final false
  inline bool get_Disposed();

  /// @brief Method get_EnvoySink, addr 0x3cc7028, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySink();

  /// @brief Method get_HasServerDynamicSinks, addr 0x3cc70c8, size 0x14, virtual false, abstract: false, final false
  inline bool get_HasServerDynamicSinks();

  /// @brief Method get_IsConnected, addr 0x3cc7040, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsConnected();

  /// @brief Method get_ObjectUri, addr 0x3cc7030, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectUri();

  /// @brief Method set_ChannelSink, addr 0x3cc7020, size 0x8, virtual false, abstract: false, final false
  inline void set_ChannelSink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method set_Disposed, addr 0x3cc7058, size 0xc, virtual false, abstract: false, final false
  inline void set_Disposed(bool value);

  /// @brief Method set_ObjectUri, addr 0x3cc7038, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectUri(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Identity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Identity(Identity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Identity(Identity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3059 };

  /// @brief Field _objectUri, offset: 0x10, size: 0x8, def value: None
  ::StringW ____objectUri;

  /// @brief Field _channelSink, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____channelSink;

  /// @brief Field _envoySink, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____envoySink;

  /// @brief Field _clientDynamicProperties, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* ____clientDynamicProperties;

  /// @brief Field _serverDynamicProperties, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* ____serverDynamicProperties;

  /// @brief Field _objRef, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Remoting::ObjRef* ____objRef;

  /// @brief Field _disposed, offset: 0x40, size: 0x1, def value: None
  bool ____disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Identity, ____objectUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Identity, ____channelSink) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Identity, ____envoySink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Identity, ____clientDynamicProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Identity, ____serverDynamicProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Identity, ____objRef) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Identity, ____disposed) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Identity, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::Identity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Identity*, "System.Runtime.Remoting", "Identity");
