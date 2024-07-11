#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/RealProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RealProxy)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class MonoMethodMessage;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::RealProxy);
// Type: System.Runtime.Remoting.Proxies::RealProxy
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Proxies::RealProxy*
class CORDL_TYPE RealProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ObjectIdentity, put = set_ObjectIdentity))::System::Runtime::Remoting::Identity* ObjectIdentity;

  /// @brief Field _objTP, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__objTP, put = __cordl_internal_set__objTP))::System::Object* _objTP;

  /// @brief Field _objectIdentity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__objectIdentity, put = __cordl_internal_set__objectIdentity))::System::Runtime::Remoting::Identity* _objectIdentity;

  /// @brief Field _server, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__server, put = __cordl_internal_set__server))::System::MarshalByRefObject* _server;

  /// @brief Field _stubData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__stubData, put = __cordl_internal_set__stubData))::System::Object* _stubData;

  /// @brief Field _targetContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__targetContext, put = __cordl_internal_set__targetContext))::System::Runtime::Remoting::Contexts::Context* _targetContext;

  /// @brief Field _targetDomainId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__targetDomainId, put = __cordl_internal_set__targetDomainId)) int32_t _targetDomainId;

  /// @brief Field _targetUri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__targetUri, put = __cordl_internal_set__targetUri))::StringW _targetUri;

  /// @brief Field class_to_proxy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_class_to_proxy, put = __cordl_internal_set_class_to_proxy))::System::Type* class_to_proxy;

  /// @brief Method AttachServer, addr 0x2846e1c, size 0x8, virtual false, abstract: false, final false
  inline void AttachServer(::System::MarshalByRefObject* s);

  /// @brief Method GetAppDomainTarget, addr 0x2846e2c, size 0x124, virtual false, abstract: false, final false
  inline ::System::Object* GetAppDomainTarget();

  /// @brief Method GetObjectData, addr 0x28462ec, size 0x7c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetProxiedType, addr 0x283e118, size 0xac, virtual false, abstract: false, final false
  inline ::System::Type* GetProxiedType();

  /// @brief Method GetTransparentProxy, addr 0x2846cb8, size 0x164, virtual true, abstract: false, final false
  inline ::System::Object* GetTransparentProxy();

  /// @brief Method InternalGetProxyType, addr 0x28462e8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* InternalGetProxyType(::System::Object* transparentProxy);

  /// @brief Method InternalGetTransparentProxy, addr 0x2846cb4, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* InternalGetTransparentProxy(::StringW className);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* msg);

  static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor();

  static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor(::System::Type* classToProxy);

  static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity);

  static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData);

  /// @brief Method PrivateInvoke, addr 0x2845508, size 0x8f0, virtual false, abstract: false, final false
  static inline ::System::Object* PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* rp, ::System::Runtime::Remoting::Messaging::IMessage* msg, ByRef<::System::Exception*> exc,
                                                ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> out_args);

  /// @brief Method ProcessResponse, addr 0x28465bc, size 0x6f8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm,
                                                                                         ::System::Runtime::Remoting::Messaging::MonoMethodMessage* call);

  /// @brief Method SetTargetDomain, addr 0x2846e24, size 0x8, virtual false, abstract: false, final false
  inline void SetTargetDomain(int32_t domainId);

  constexpr ::System::Object*& __cordl_internal_get__objTP();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__objTP() const;

  constexpr ::System::Runtime::Remoting::Identity*& __cordl_internal_get__objectIdentity();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> const& __cordl_internal_get__objectIdentity() const;

  constexpr ::System::MarshalByRefObject*& __cordl_internal_get__server();

  constexpr ::cordl_internals::to_const_pointer<::System::MarshalByRefObject*> const& __cordl_internal_get__server() const;

  constexpr ::System::Object*& __cordl_internal_get__stubData();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__stubData() const;

  constexpr ::System::Runtime::Remoting::Contexts::Context*& __cordl_internal_get__targetContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::Context*> const& __cordl_internal_get__targetContext() const;

  constexpr int32_t const& __cordl_internal_get__targetDomainId() const;

  constexpr int32_t& __cordl_internal_get__targetDomainId();

  constexpr ::StringW const& __cordl_internal_get__targetUri() const;

  constexpr ::StringW& __cordl_internal_get__targetUri();

  constexpr ::System::Type*& __cordl_internal_get_class_to_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_class_to_proxy() const;

  constexpr void __cordl_internal_set__objTP(::System::Object* value);

  constexpr void __cordl_internal_set__objectIdentity(::System::Runtime::Remoting::Identity* value);

  constexpr void __cordl_internal_set__server(::System::MarshalByRefObject* value);

  constexpr void __cordl_internal_set__stubData(::System::Object* value);

  constexpr void __cordl_internal_set__targetContext(::System::Runtime::Remoting::Contexts::Context* value);

  constexpr void __cordl_internal_set__targetDomainId(int32_t value);

  constexpr void __cordl_internal_set__targetUri(::StringW value);

  constexpr void __cordl_internal_set_class_to_proxy(::System::Type* value);

  /// @brief Method .ctor, addr 0x28460dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x28460ec, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* classToProxy);

  /// @brief Method .ctor, addr 0x284627c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity);

  /// @brief Method .ctor, addr 0x284614c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData);

  /// @brief Method get_ObjectIdentity, addr 0x2846368, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Identity* get_ObjectIdentity();

  /// @brief Method set_ObjectIdentity, addr 0x2846370, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectIdentity(::System::Runtime::Remoting::Identity* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RealProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RealProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RealProxy(RealProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RealProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RealProxy(RealProxy const&) = delete;

  /// @brief Field class_to_proxy, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___class_to_proxy;

  /// @brief Field _targetContext, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::Context* ____targetContext;

  /// @brief Field _server, offset: 0x20, size: 0x8, def value: None
  ::System::MarshalByRefObject* ____server;

  /// @brief Field _targetDomainId, offset: 0x28, size: 0x4, def value: None
  int32_t ____targetDomainId;

  /// @brief Field _targetUri, offset: 0x30, size: 0x8, def value: None
  ::StringW ____targetUri;

  /// @brief Field _objectIdentity, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Remoting::Identity* ____objectIdentity;

  /// @brief Field _objTP, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____objTP;

  /// @brief Field _stubData, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____stubData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::RealProxy, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ___class_to_proxy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____targetContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____server) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____targetDomainId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____targetUri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____objectIdentity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____objTP) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RealProxy, ____stubData) == 0x48, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::RealProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::RealProxy*, "System.Runtime.Remoting.Proxies", "RealProxy");
