#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemotingServices)
namespace System {
class Object;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting {
class __RemotingServices__CACD;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting {
class ClientActivatedIdentity;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System {
class Exception;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class RemotingServices;
}
namespace System::Runtime::Remoting {
class __RemotingServices__CACD;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::RemotingServices);
MARK_REF_PTR_T(::System::Runtime::Remoting::__RemotingServices__CACD);
// Type: ::CACD
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3070))
// CS Name: ::RemotingServices::CACD*
class CORDL_TYPE __RemotingServices__CACD : public ::System::Object {
public:
  // Declarations
  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __get_d, put = __set_d))::System::Object* d;

  /// @brief Field c, offset 0x18, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::System::Object* c;

  constexpr ::System::Object*& __get_d();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_d() const;

  constexpr void __set_d(::System::Object* value);

  constexpr ::System::Object*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_c() const;

  constexpr void __set_c(::System::Object* value);

  static inline ::System::Runtime::Remoting::__RemotingServices__CACD* New_ctor();

  /// @brief Method .ctor, addr 0x2492780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RemotingServices__CACD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RemotingServices__CACD(__RemotingServices__CACD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RemotingServices__CACD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RemotingServices__CACD(__RemotingServices__CACD const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RemotingServices__CACD();

public:
  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___d;

  /// @brief Field c, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::__RemotingServices__CACD, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::__RemotingServices__CACD, ___d) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::__RemotingServices__CACD, ___c) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting
// Type: System.Runtime.Remoting::RemotingServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3071))
// CS Name: ::System.Runtime.Remoting::RemotingServices*
class CORDL_TYPE RemotingServices : public ::System::Object {
public:
  // Declarations
  using CACD = ::System::Runtime::Remoting::__RemotingServices__CACD;

  /// @brief Field uri_hash, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_uri_hash, put = setStaticF_uri_hash))::System::Collections::Hashtable* uri_hash;

  /// @brief Field _serializationFormatter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__serializationFormatter,
                             put = setStaticF__serializationFormatter))::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _serializationFormatter;

  /// @brief Field _deserializationFormatter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__deserializationFormatter,
                             put = setStaticF__deserializationFormatter))::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _deserializationFormatter;

  /// @brief Field app_id, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_app_id, put = setStaticF_app_id))::StringW app_id;

  /// @brief Field app_id_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_app_id_lock, put = setStaticF_app_id_lock))::System::Object* app_id_lock;

  /// @brief Field next_id, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_next_id, put = setStaticF_next_id)) int32_t next_id;

  /// @brief Field FieldSetterMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FieldSetterMethod, put = setStaticF_FieldSetterMethod))::System::Reflection::MethodInfo* FieldSetterMethod;

  /// @brief Field FieldGetterMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FieldGetterMethod, put = setStaticF_FieldGetterMethod))::System::Reflection::MethodInfo* FieldGetterMethod;

  static inline void setStaticF_uri_hash(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_uri_hash();

  static inline void setStaticF__serializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* getStaticF__serializationFormatter();

  static inline void setStaticF__deserializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* getStaticF__deserializationFormatter();

  static inline void setStaticF_app_id(::StringW value);

  static inline ::StringW getStaticF_app_id();

  static inline void setStaticF_app_id_lock(::System::Object* value);

  static inline ::System::Object* getStaticF_app_id_lock();

  static inline void setStaticF_next_id(int32_t value);

  static inline int32_t getStaticF_next_id();

  static inline void setStaticF_FieldSetterMethod(::System::Reflection::MethodInfo* value);

  static inline ::System::Reflection::MethodInfo* getStaticF_FieldSetterMethod();

  static inline void setStaticF_FieldGetterMethod(::System::Reflection::MethodInfo* value);

  static inline ::System::Reflection::MethodInfo* getStaticF_FieldGetterMethod();

  /// @brief Method InternalExecute, addr 0x248dc44, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* InternalExecute(::System::Reflection::MethodBase* method, ::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                                  ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> out_args);

  /// @brief Method GetVirtualMethod, addr 0x248dc48, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetVirtualMethod(::System::Type* type, ::System::Reflection::MethodBase* method);

  /// @brief Method IsTransparentProxy, addr 0x248dc4c, size 0x40, virtual false, abstract: false, final false
  static inline bool IsTransparentProxy(::System::Object* proxy);

  /// @brief Method InternalExecuteMessage, addr 0x248dc8c, size 0xa20, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(::System::MarshalByRefObject* target,
                                                                                                     ::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg);

  /// @brief Method Connect, addr 0x248e6ac, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* Connect(::System::Type* classToProxy, ::StringW url);

  /// @brief Method Connect, addr 0x248e7bc, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Object* Connect(::System::Type* classToProxy, ::StringW url, ::System::Object* data);

  /// @brief Method GetServerTypeForUri, addr 0x248e85c, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Type* GetServerTypeForUri(::StringW URI);

  /// @brief Method Unmarshal, addr 0x24865d0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef);

  /// @brief Method Unmarshal, addr 0x248eb64, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine);

  /// @brief Method Marshal, addr 0x248eeac, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* Obj);

  /// @brief Method Marshal, addr 0x248eef8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* Obj, ::StringW ObjURI, ::System::Type* RequestedType);

  /// @brief Method NewUri, addr 0x248efb8, size 0x384, virtual false, abstract: false, final false
  static inline ::StringW NewUri();

  /// @brief Method GetRealProxy, addr 0x248ef70, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(::System::Object* proxy);

  /// @brief Method GetMethodBaseFromMethodMessage, addr 0x248f698, size 0x2f0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

  /// @brief Method GetMethodBaseFromName, addr 0x248f988, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodBaseFromName(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> signature);

  /// @brief Method FindInterfaceMethod, addr 0x248fb58, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* FindInterfaceMethod(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> signature);

  /// @brief Method GetObjectData, addr 0x248fc88, size 0xb0, virtual false, abstract: false, final false
  static inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsOneWay, addr 0x248fd38, size 0x98, virtual false, abstract: false, final false
  static inline bool IsOneWay(::System::Reflection::MethodBase* method);

  /// @brief Method CreateClientProxy, addr 0x248fdd0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method CreateClientProxy, addr 0x248fecc, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxy(::System::Type* objectType, ::StringW url, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method CreateClientProxy, addr 0x24900e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxy(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry);

  /// @brief Method CreateClientProxyForContextBound, addr 0x2490154, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Object* CreateClientProxyForContextBound(::System::Type* type, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method GetIdentityForUri, addr 0x248e918, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Identity* GetIdentityForUri(::StringW uri);

  /// @brief Method RemoveAppNameFromUri, addr 0x249034c, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW RemoveAppNameFromUri(::StringW uri);

  /// @brief Method GetOrCreateClientIdentity, addr 0x2490440, size 0x4c8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType, ByRef<::System::Object*> clientProxy);

  /// @brief Method GetClientChannelSinkChain, addr 0x2490000, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(::StringW url, ::System::Object* channelData, ByRef<::StringW> objectUri);

  /// @brief Method CreateContextBoundObjectIdentity, addr 0x2490b0c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(::System::Type* objectType);

  /// @brief Method CreateClientActivatedServerIdentity, addr 0x248f54c, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(::System::MarshalByRefObject* realObject, ::System::Type* objectType, ::StringW objectUri);

  /// @brief Method CreateWellKnownServerIdentity, addr 0x248797c, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(::System::Type* objectType, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode);

  /// @brief Method RegisterServerIdentity, addr 0x248f33c, size 0x210, virtual false, abstract: false, final false
  static inline void RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* identity);

  /// @brief Method GetProxyForRemoteObject, addr 0x248edb8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* objref, ::System::Type* classToProxy);

  /// @brief Method GetRemoteObject, addr 0x248e748, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* GetRemoteObject(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType);

  /// @brief Method SerializeCallData, addr 0x2490bd8, size 0x20c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeCallData(::System::Object* obj);

  /// @brief Method DeserializeCallData, addr 0x2490de4, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeCallData(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method SerializeExceptionData, addr 0x2491030, size 0x174, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeExceptionData(::System::Exception* ex);

  /// @brief Method RegisterInternalChannels, addr 0x248dbf4, size 0x50, virtual false, abstract: false, final false
  static inline void RegisterInternalChannels();

  /// @brief Method DisposeIdentity, addr 0x2490908, size 0x204, virtual false, abstract: false, final false
  static inline void DisposeIdentity(::System::Runtime::Remoting::Identity* ident);

  /// @brief Method GetMessageTargetIdentity, addr 0x24911a4, size 0x338, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method SetMessageTargetIdentity, addr 0x24914dc, size 0x114, virtual false, abstract: false, final false
  static inline void SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Identity* ident);

  /// @brief Method UpdateOutArgObject, addr 0x24915f0, size 0x1190, virtual false, abstract: false, final false
  static inline bool UpdateOutArgObject(::System::Reflection::ParameterInfo* pi, ::System::Object* local, ::System::Object* remote);

  /// @brief Method GetNormalizedUri, addr 0x24902d4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetNormalizedUri(::StringW uri);

  // Ctor Parameters [CppParam { name: "", ty: "RemotingServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingServices(RemotingServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingServices(RemotingServices const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingServices();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::RemotingServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::RemotingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingServices*, "System.Runtime.Remoting", "RemotingServices");
NEED_NO_BOX(::System::Runtime::Remoting::__RemotingServices__CACD);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::__RemotingServices__CACD*, "System.Runtime.Remoting", "RemotingServices/CACD");
