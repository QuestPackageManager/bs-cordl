#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\RemotingServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__RemotingServices_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientActivatedIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__RemotingServices_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices_CACD._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::RemotingServices_CACD::*)()>(&::System::Runtime::Remoting::RemotingServices_CACD::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2d5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices_CACD*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::RemotingServices_CACD::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::System::Object* const& System::Runtime::Remoting::RemotingServices_CACD::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void System::Runtime::Remoting::RemotingServices_CACD::__cordl_internal_set_d(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::RemotingServices_CACD::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::System::Object* const& System::Runtime::Remoting::RemotingServices_CACD::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void System::Runtime::Remoting::RemotingServices_CACD::__cordl_internal_set_c(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
inline void System::Runtime::Remoting::RemotingServices_CACD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices_CACD*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::RemotingServices_CACD* System::Runtime::Remoting::RemotingServices_CACD::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::RemotingServices_CACD*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::RemotingServices_CACD::RemotingServices_CACD() {}
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.InternalExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Reflection::MethodBase*, ::System::Object*, ::ArrayW<::System::Object*>, ::by_ref<::ArrayW<::System::Object*>>)>(
    &::System::Runtime::Remoting::RemotingServices::InternalExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b29658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "InternalExecute",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetVirtualMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::Type*, ::System::Reflection::MethodBase*)>(
    &::System::Runtime::Remoting::RemotingServices::GetVirtualMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b29660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "GetVirtualMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.IsTransparentProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Runtime::Remoting::RemotingServices::IsTransparentProxy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b29668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "IsTransparentProxy", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.InternalExecuteMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage* (*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(
        &::System::Runtime::Remoting::RemotingServices::InternalExecuteMessage)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x5b296a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                            { "InternalExecuteMessage", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::StringW)>(&::System::Runtime::Remoting::RemotingServices::Connect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b29d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "Connect", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::StringW, ::System::Object*)>(&::System::Runtime::Remoting::RemotingServices::Connect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b29e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "Connect", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetServerTypeForUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::GetServerTypeForUri)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b29ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetServerTypeForUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Unmarshal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*)>(&::System::Runtime::Remoting::RemotingServices::Unmarshal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b2a1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "Unmarshal", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Unmarshal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*, bool)>(&::System::Runtime::Remoting::RemotingServices::Unmarshal)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5b2a248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                           { "Unmarshal", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Marshal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (*)(::System::MarshalByRefObject*)>(&::System::Runtime::Remoting::RemotingServices::Marshal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b2a8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "Marshal", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Marshal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (*)(::System::MarshalByRefObject*, ::StringW, ::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::Marshal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b2a910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "Marshal", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.NewUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::RemotingServices::NewUri)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5b2aa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "NewUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetRealProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Proxies::RealProxy* (*)(::System::Object*)>(&::System::Runtime::Remoting::RemotingServices::GetRealProxy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b2a9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetRealProxy", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetMethodBaseFromMethodMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(
    &::System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5b2b52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "GetMethodBaseFromMethodMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetMethodBaseFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>)>(
    &::System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b2b804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                { "GetMethodBaseFromName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.FindInterfaceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>)>(
    &::System::Runtime::Remoting::RemotingServices::FindInterfaceMethod)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b2b9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                { "FindInterfaceMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Remoting::RemotingServices::GetObjectData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b2bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "GetObjectData",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.IsOneWay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*)>(&::System::Runtime::Remoting::RemotingServices::IsOneWay)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b2bbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "IsOneWay", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b2bc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                         { "CreateClientProxy", {}, { ::i2c::type_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b2bd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                { "CreateClientProxy", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b2bffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                           { "CreateClientProxy", {}, { ::i2c::type_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxyForContextBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b2c068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "CreateClientProxyForContextBound", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetIdentityForUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Identity* (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::GetIdentityForUri)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5b29f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetIdentityForUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.RemoveAppNameFromUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b2c280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "RemoveAppNameFromUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetOrCreateClientIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ClientIdentity* (*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::by_ref<::System::Object*>)>(
    &::System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x5b2c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
            { "GetOrCreateClientIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetClientChannelSinkChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::StringW, ::System::Object*, ::by_ref<::StringW>)>(
    &::System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b2bed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                { "GetClientChannelSinkChain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateContextBoundObjectIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ClientActivatedIdentity* (*)(::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b2d270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "CreateContextBoundObjectIdentity", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientActivatedServerIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ClientActivatedIdentity* (*)(::System::MarshalByRefObject*, ::System::Type*, ::StringW)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b2b468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                            { "CreateClientActivatedServerIdentity", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateWellKnownServerIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ServerIdentity* (*)(::System::Type*, ::StringW, ::System::Runtime::Remoting::WellKnownObjectMode)>(
    &::System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b29550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
            { "CreateWellKnownServerIdentity", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::WellKnownObjectMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.RegisterServerIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ServerIdentity*)>(&::System::Runtime::Remoting::RemotingServices::RegisterServerIdentity)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5b2ad8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                           { "RegisterServerIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetProxyForRemoteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b2a7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "GetProxyForRemoteObject", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetRemoteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*)>(&::System::Runtime::Remoting::RemotingServices::GetRemoteObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b29dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "GetRemoteObject", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.SerializeCallData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::System::Runtime::Remoting::RemotingServices::SerializeCallData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b2d3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "SerializeCallData", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.DeserializeCallData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::System::Runtime::Remoting::RemotingServices::DeserializeCallData)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5b2d664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "DeserializeCallData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.SerializeExceptionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Exception*)>(&::System::Runtime::Remoting::RemotingServices::SerializeExceptionData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b2db38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "SerializeExceptionData", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.RegisterInternalChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::Remoting::RemotingServices::RegisterInternalChannels)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b29500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "RegisterInternalChannels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.DisposeIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::Identity*)>(&::System::Runtime::Remoting::RemotingServices::DisposeIdentity)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5b2c860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "DisposeIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetMessageTargetIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Identity* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5b2ddd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                             { "GetMessageTargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.SetMessageTargetIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b2e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                            { "SetMessageTargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.UpdateOutArgObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::ParameterInfo*, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Remoting::RemotingServices::UpdateOutArgObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b2e240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                            { "UpdateOutArgObject", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetNormalizedUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::GetNormalizedUri)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b2c200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetNormalizedUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::RemotingServices::setStaticF_uri_hash(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "uri_hash", ::System::Runtime::Remoting::RemotingServices*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingServices::getStaticF_uri_hash() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "uri_hash", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF__serializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_serializationFormatter", ::System::Runtime::Remoting::RemotingServices*>(
      std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(value));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Remoting::RemotingServices::getStaticF__serializationFormatter() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_serializationFormatter", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF__deserializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_deserializationFormatter", ::System::Runtime::Remoting::RemotingServices*>(
      std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(value));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Remoting::RemotingServices::getStaticF__deserializationFormatter() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_deserializationFormatter", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_app_id(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "app_id", ::System::Runtime::Remoting::RemotingServices*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingServices::getStaticF_app_id() {
  return ::cordl_internals::getStaticField<::StringW, "app_id", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_app_id_lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "app_id_lock", ::System::Runtime::Remoting::RemotingServices*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::getStaticF_app_id_lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "app_id_lock", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_next_id(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "next_id", ::System::Runtime::Remoting::RemotingServices*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Remoting::RemotingServices::getStaticF_next_id() {
  return ::cordl_internals::getStaticField<int32_t, "next_id", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_FieldSetterMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "FieldSetterMethod", ::System::Runtime::Remoting::RemotingServices*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::RemotingServices::getStaticF_FieldSetterMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "FieldSetterMethod", ::System::Runtime::Remoting::RemotingServices*>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_FieldGetterMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "FieldGetterMethod", ::System::Runtime::Remoting::RemotingServices*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::RemotingServices::getStaticF_FieldGetterMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "FieldGetterMethod", ::System::Runtime::Remoting::RemotingServices*>();
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::InternalExecute(::System::Reflection::MethodBase* method, ::System::Object* obj, ::ArrayW<::System::Object*> parameters,
                                                                                      ::by_ref<::ArrayW<::System::Object*>> out_args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "InternalExecute",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, method, obj, parameters, out_args);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetVirtualMethod(::System::Type* type, ::System::Reflection::MethodBase* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "GetVirtualMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, type, method);
}
inline bool System::Runtime::Remoting::RemotingServices::IsTransparentProxy(::System::Object* proxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "IsTransparentProxy", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, proxy);
}
inline ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*
System::Runtime::Remoting::RemotingServices::InternalExecuteMessage(::System::MarshalByRefObject* target, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                          { "InternalExecuteMessage", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(nullptr, ___internal_method, target, reqMsg);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Connect(::System::Type* classToProxy, ::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "Connect", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, classToProxy, url);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Connect(::System::Type* classToProxy, ::StringW url, ::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "Connect", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, classToProxy, url, data);
}
inline ::System::Type* System::Runtime::Remoting::RemotingServices::GetServerTypeForUri(::StringW URI) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetServerTypeForUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, URI);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "Unmarshal", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objectRef);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                         { "Unmarshal", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objectRef, fRefine);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::RemotingServices::Marshal(::System::MarshalByRefObject* Obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "Marshal", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(nullptr, ___internal_method, Obj);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::RemotingServices::Marshal(::System::MarshalByRefObject* Obj, ::StringW ObjURI, ::System::Type* RequestedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "Marshal", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(nullptr, ___internal_method, Obj, ObjURI, RequestedType);
}
inline ::StringW System::Runtime::Remoting::RemotingServices::NewUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "NewUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::RemotingServices::GetRealProxy(::System::Object* proxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetRealProxy", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RealProxy*>(nullptr, ___internal_method, proxy);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "GetMethodBaseFromMethodMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, msg);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                              { "GetMethodBaseFromName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, type, methodName, signature);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::FindInterfaceMethod(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                              { "FindInterfaceMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, type, methodName, signature);
}
inline void System::Runtime::Remoting::RemotingServices::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "GetObjectData",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, info, context);
}
inline bool System::Runtime::Remoting::RemotingServices::IsOneWay(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "IsOneWay", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry,
                                                                                        ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                       { "CreateClientProxy", {}, { ::i2c::type_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, entry, activationAttributes);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxy(::System::Type* objectType, ::StringW url, ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                              { "CreateClientProxy", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objectType, url, activationAttributes);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxy(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                         { "CreateClientProxy", {}, { ::i2c::type_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, entry);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound(::System::Type* type, ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "CreateClientProxyForContextBound", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, activationAttributes);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::RemotingServices::GetIdentityForUri(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetIdentityForUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*>(nullptr, ___internal_method, uri);
}
inline ::StringW System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "RemoveAppNameFromUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, uri);
}
inline ::System::Runtime::Remoting::ClientIdentity* System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType,
                                                                                                                           ::by_ref<::System::Object*> clientProxy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
          { "GetOrCreateClientIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ClientIdentity*>(nullptr, ___internal_method, objRef, proxyType, clientProxy);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain(::StringW url, ::System::Object* channelData,
                                                                                                                                    ::by_ref<::StringW> objectUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                              { "GetClientChannelSinkChain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(nullptr, ___internal_method, url, channelData, objectUri);
}
inline ::System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "CreateContextBoundObjectIdentity", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ClientActivatedIdentity*>(nullptr, ___internal_method, objectType);
}
inline ::System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity(::System::MarshalByRefObject* realObject,
                                                                                                                                              ::System::Type* objectType, ::StringW objectUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                          { "CreateClientActivatedServerIdentity", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ClientActivatedIdentity*>(nullptr, ___internal_method, realObject, objectType, objectUri);
}
inline ::System::Runtime::Remoting::ServerIdentity* System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity(::System::Type* objectType, ::StringW objectUri,
                                                                                                                               ::System::Runtime::Remoting::WellKnownObjectMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
          { "CreateWellKnownServerIdentity", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::WellKnownObjectMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ServerIdentity*>(nullptr, ___internal_method, objectType, objectUri, mode);
}
inline void System::Runtime::Remoting::RemotingServices::RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                         { "RegisterServerIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* objref, ::System::Type* classToProxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "GetProxyForRemoteObject", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objref, classToProxy);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::GetRemoteObject(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                           { "GetRemoteObject", {}, { ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objRef, proxyType);
}
inline ::ArrayW<uint8_t> System::Runtime::Remoting::RemotingServices::SerializeCallData(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "SerializeCallData", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::DeserializeCallData(::ArrayW<uint8_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "DeserializeCallData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, array);
}
inline ::ArrayW<uint8_t> System::Runtime::Remoting::RemotingServices::SerializeExceptionData(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "SerializeExceptionData", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ex);
}
inline void System::Runtime::Remoting::RemotingServices::RegisterInternalChannels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "RegisterInternalChannels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::RemotingServices::DisposeIdentity(::System::Runtime::Remoting::Identity* ident) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "DisposeIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ident);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                                                                                         { "GetMessageTargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*>(nullptr, ___internal_method, msg);
}
inline void System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Identity* ident) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                          { "SetMessageTargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, ident);
}
inline bool System::Runtime::Remoting::RemotingServices::UpdateOutArgObject(::System::Reflection::ParameterInfo* pi, ::System::Object* local, ::System::Object* remote) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(),
                          { "UpdateOutArgObject", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pi, local, remote);
}
inline ::StringW System::Runtime::Remoting::RemotingServices::GetNormalizedUri(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingServices*>(), { "GetNormalizedUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, uri);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::RemotingServices::RemotingServices() {}
