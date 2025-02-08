#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/RemotingServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemotingServices)
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
namespace System::Runtime::Remoting {
class ClientActivatedIdentity;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System::Runtime::Remoting {
class RemotingServices_CACD;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
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
class MarshalByRefObject;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class RemotingServices;
}
namespace System::Runtime::Remoting {
class RemotingServices_CACD;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::RemotingServices);
MARK_REF_PTR_T(::System::Runtime::Remoting::RemotingServices_CACD);
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.RemotingServices/CACD
class CORDL_TYPE RemotingServices_CACD : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::System::Object* c;

  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::System::Object* d;

  static inline ::System::Runtime::Remoting::RemotingServices_CACD* New_ctor();

  constexpr ::System::Object* const& __cordl_internal_get_c() const;

  constexpr ::System::Object*& __cordl_internal_get_c();

  constexpr ::System::Object* const& __cordl_internal_get_d() const;

  constexpr ::System::Object*& __cordl_internal_get_d();

  constexpr void __cordl_internal_set_c(::System::Object* value);

  constexpr void __cordl_internal_set_d(::System::Object* value);

  /// @brief Method .ctor, addr 0x3cd86a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingServices_CACD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingServices_CACD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingServices_CACD(RemotingServices_CACD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingServices_CACD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingServices_CACD(RemotingServices_CACD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3069 };

  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___d;

  /// @brief Field c, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::RemotingServices_CACD, ___d) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::RemotingServices_CACD, ___c) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::RemotingServices_CACD, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.RemotingServices
class CORDL_TYPE RemotingServices : public ::System::Object {
public:
  // Declarations
  using CACD = ::System::Runtime::Remoting::RemotingServices_CACD;

  /// @brief Field FieldGetterMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FieldGetterMethod, put = setStaticF_FieldGetterMethod)) ::System::Reflection::MethodInfo* FieldGetterMethod;

  /// @brief Field FieldSetterMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FieldSetterMethod, put = setStaticF_FieldSetterMethod)) ::System::Reflection::MethodInfo* FieldSetterMethod;

  /// @brief Field _deserializationFormatter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__deserializationFormatter,
                      put = setStaticF__deserializationFormatter)) ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _deserializationFormatter;

  /// @brief Field _serializationFormatter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__serializationFormatter,
                      put = setStaticF__serializationFormatter)) ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _serializationFormatter;

  /// @brief Field app_id, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_app_id, put = setStaticF_app_id)) ::StringW app_id;

  /// @brief Field app_id_lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_app_id_lock, put = setStaticF_app_id_lock)) ::System::Object* app_id_lock;

  /// @brief Field next_id, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_next_id, put = setStaticF_next_id)) int32_t next_id;

  /// @brief Field uri_hash, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_uri_hash, put = setStaticF_uri_hash)) ::System::Collections::Hashtable* uri_hash;

  /// @brief Method Connect, addr 0x3cd4cf8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Object* Connect(::System::Type* classToProxy, ::StringW url);

  /// @brief Method Connect, addr 0x3cd4e04, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Object* Connect(::System::Type* classToProxy, ::StringW url, ::System::Object* data);

  /// @brief Method CreateClientActivatedServerIdentity, addr 0x3cd639c, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(::System::MarshalByRefObject* realObject, ::System::Type* objectType, ::StringW objectUri);

  /// @brief Method CreateClientProxy, addr 0x3cd6c14, size 0x150, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method CreateClientProxy, addr 0x3cd6fcc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxy(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry);

  /// @brief Method CreateClientProxy, addr 0x3cd6d64, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxy(::System::Type* objectType, ::StringW url, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method CreateClientProxyForContextBound, addr 0x3cd7034, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxyForContextBound(::System::Type* type, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method CreateContextBoundObjectIdentity, addr 0x3cd82d8, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(::System::Type* objectType);

  /// @brief Method CreateWellKnownServerIdentity, addr 0x3cd41b8, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(::System::Type* objectType, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode);

  /// @brief Method DeserializeCallData, addr 0x3cd8710, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeCallData(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method DisposeIdentity, addr 0x3cd7808, size 0x1f0, virtual false, abstract: false, final false
  static inline void DisposeIdentity(::System::Runtime::Remoting::Identity* ident);

  /// @brief Method FindInterfaceMethod, addr 0x3cd69a0, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* FindInterfaceMethod(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> signature);

  /// @brief Method GetClientChannelSinkChain, addr 0x3cd6ea4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(::StringW url, ::System::Object* channelData, ::ByRef<::StringW> objectUri);

  /// @brief Method GetIdentityForUri, addr 0x3cd4f50, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Identity* GetIdentityForUri(::StringW uri);

  /// @brief Method GetMessageTargetIdentity, addr 0x3cd8e80, size 0x334, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method GetMethodBaseFromMethodMessage, addr 0x3cd64e0, size 0x2e0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

  /// @brief Method GetMethodBaseFromName, addr 0x3cd67c0, size 0x1e0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodBaseFromName(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> signature);

  /// @brief Method GetNormalizedUri, addr 0x3cd71c0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetNormalizedUri(::StringW uri);

  /// @brief Method GetObjectData, addr 0x3cd6ad0, size 0xac, virtual false, abstract: false, final false
  static inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetOrCreateClientIdentity, addr 0x3cd732c, size 0x4dc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType, ::ByRef<::System::Object*> clientProxy);

  /// @brief Method GetProxyForRemoteObject, addr 0x3cd5764, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* objref, ::System::Type* classToProxy);

  /// @brief Method GetRealProxy, addr 0x3cd591c, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(::System::Object* proxy);

  /// @brief Method GetRemoteObject, addr 0x3cd4d90, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* GetRemoteObject(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType);

  /// @brief Method GetServerTypeForUri, addr 0x3cd4ea8, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Type* GetServerTypeForUri(::StringW URI);

  /// @brief Method GetVirtualMethod, addr 0x3cd42b4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetVirtualMethod(::System::Type* type, ::System::Reflection::MethodBase* method);

  /// @brief Method InternalExecute, addr 0x3cd42b0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* InternalExecute(::System::Reflection::MethodBase* method, ::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                                  ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> out_args);

  /// @brief Method InternalExecuteMessage, addr 0x3cd42f0, size 0x9c4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(::System::MarshalByRefObject* target,
                                                                                                     ::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg);

  /// @brief Method IsOneWay, addr 0x3cd6b7c, size 0x98, virtual false, abstract: false, final false
  static inline bool IsOneWay(::System::Reflection::MethodBase* method);

  /// @brief Method IsTransparentProxy, addr 0x3cd42b8, size 0x38, virtual false, abstract: false, final false
  static inline bool IsTransparentProxy(::System::Object* proxy);

  /// @brief Method Marshal, addr 0x3cd5858, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* Obj);

  /// @brief Method Marshal, addr 0x3cd58a4, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* Obj, ::StringW ObjURI, ::System::Type* RequestedType);

  /// @brief Method NewUri, addr 0x3cd5a10, size 0x2f0, virtual false, abstract: false, final false
  static inline ::StringW NewUri();

  /// @brief Method RegisterInternalChannels, addr 0x3cd416c, size 0x4c, virtual false, abstract: false, final false
  static inline void RegisterInternalChannels();

  /// @brief Method RegisterServerIdentity, addr 0x3cd5d00, size 0x200, virtual false, abstract: false, final false
  static inline void RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* identity);

  /// @brief Method RemoveAppNameFromUri, addr 0x3cd7238, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW RemoveAppNameFromUri(::StringW uri);

  /// @brief Method SerializeCallData, addr 0x3cd8498, size 0x1f8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeCallData(::System::Object* obj);

  /// @brief Method SerializeExceptionData, addr 0x3cd8bdc, size 0x170, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeExceptionData(::System::Exception* ex);

  /// @brief Method SetMessageTargetIdentity, addr 0x3cd91b4, size 0x114, virtual false, abstract: false, final false
  static inline void SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Identity* ident);

  /// @brief Method Unmarshal, addr 0x3cd51a0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef);

  /// @brief Method Unmarshal, addr 0x3cd51f8, size 0x260, virtual false, abstract: false, final false
  static inline ::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine);

  /// @brief Method UpdateOutArgObject, addr 0x3cd92c8, size 0x168, virtual false, abstract: false, final false
  static inline bool UpdateOutArgObject(::System::Reflection::ParameterInfo* pi, ::System::Object* local, ::System::Object* remote);

  static inline ::System::Reflection::MethodInfo* getStaticF_FieldGetterMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_FieldSetterMethod();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* getStaticF__deserializationFormatter();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* getStaticF__serializationFormatter();

  static inline ::StringW getStaticF_app_id();

  static inline ::System::Object* getStaticF_app_id_lock();

  static inline int32_t getStaticF_next_id();

  static inline ::System::Collections::Hashtable* getStaticF_uri_hash();

  static inline void setStaticF_FieldGetterMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_FieldSetterMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF__deserializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);

  static inline void setStaticF__serializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);

  static inline void setStaticF_app_id(::StringW value);

  static inline void setStaticF_app_id_lock(::System::Object* value);

  static inline void setStaticF_next_id(int32_t value);

  static inline void setStaticF_uri_hash(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingServices(RemotingServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingServices(RemotingServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3070 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::RemotingServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::RemotingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingServices*, "System.Runtime.Remoting", "RemotingServices");
NEED_NO_BOX(::System::Runtime::Remoting::RemotingServices_CACD);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingServices_CACD*, "System.Runtime.Remoting", "RemotingServices/CACD");
