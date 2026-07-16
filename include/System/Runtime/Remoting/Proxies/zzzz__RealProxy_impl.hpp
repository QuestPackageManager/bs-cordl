#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/RealProxy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(&::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b2ffec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Type*)>(&::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2fff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Type*, ::System::Runtime::Remoting::ClientIdentity*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b300dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Remoting::ClientIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Type*, ::System::IntPtr, ::System::Object*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b30000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.InternalGetProxyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Object*)>(&::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b30104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "InternalGetProxyType", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetProxiedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(&::System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b286f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "GetProxiedType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Proxies::RealProxy::GetObjectData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b3010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.get_ObjectIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Identity* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b30174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "get_ObjectIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.set_ObjectIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                                                           { "set_ObjectIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Proxies::RealProxy::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.PrivateInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::Proxies::RealProxy*, ::System::Runtime::Remoting::Messaging::IMessage*,
                                                                             ::by_ref<::System::Exception*>, ::by_ref<::ArrayW<::System::Object*>>)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x5b2f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                { "PrivateInvoke",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(),
                                                    ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.InternalGetTransparentProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::RealProxy::*)(::StringW)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b30ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetTransparentProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b30ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.AttachServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::AttachServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b30c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "AttachServer", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.SetTargetDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(int32_t)>(&::System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b30c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "SetTargetDomain", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetAppDomainTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b30c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "GetAppDomainTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.ProcessResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(
    ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&::System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x5b303bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                            { "ProcessResponse",
                              {},
                              { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get_class_to_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___class_to_proxy;
}
constexpr ::System::Type* const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get_class_to_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___class_to_proxy;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set_class_to_proxy(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___class_to_proxy = value;
}
constexpr ::System::Runtime::Remoting::Contexts::Context*& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__targetContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetContext;
}
constexpr ::System::Runtime::Remoting::Contexts::Context* const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__targetContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetContext;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__targetContext(::System::Runtime::Remoting::Contexts::Context* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetContext = value;
}
constexpr ::System::MarshalByRefObject*& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____server;
}
constexpr ::System::MarshalByRefObject* const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____server;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__server(::System::MarshalByRefObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____server = value;
}
constexpr int32_t& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__targetDomainId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetDomainId;
}
constexpr int32_t const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__targetDomainId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetDomainId;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__targetDomainId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetDomainId = value;
}
constexpr ::StringW& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__targetUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetUri;
}
constexpr ::StringW const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__targetUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetUri;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__targetUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetUri = value;
}
constexpr ::System::Runtime::Remoting::Identity*& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__objectIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectIdentity;
}
constexpr ::System::Runtime::Remoting::Identity* const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__objectIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectIdentity;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__objectIdentity(::System::Runtime::Remoting::Identity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectIdentity = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__objTP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objTP;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__objTP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objTP;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__objTP(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objTP = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__stubData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stubData;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_get__stubData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stubData;
}
constexpr void System::Runtime::Remoting::Proxies::RealProxy::__cordl_internal_set__stubData(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stubData = value;
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor(::System::Type* classToProxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classToProxy);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Remoting::ClientIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classToProxy, identity);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classToProxy, stub, stubData);
}
inline ::System::Type* System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType(::System::Object* transparentProxy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "InternalGetProxyType", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, transparentProxy);
}
inline ::System::Type* System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "GetProxiedType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "get_ObjectIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity(::System::Runtime::Remoting::Identity* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                                                         { "set_ObjectIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RealProxy::Invoke(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* rp, ::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                      ::by_ref<::System::Exception*> exc, ::by_ref<::ArrayW<::System::Object*>> out_args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                                                           { "PrivateInvoke",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(),
                                                               ::i2c::type_of<::by_ref<::System::Exception*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, rp, msg, exc, out_args);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy(::StringW className) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, className);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::AttachServer(::System::MarshalByRefObject* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "AttachServer", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain(int32_t domainId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "SetTargetDomain", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, domainId);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(), { "GetAppDomainTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm,
                                                                                                  ::System::Runtime::Remoting::Messaging::MonoMethodMessage* call) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RealProxy*>(),
                          { "ProcessResponse",
                            {},
                            { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, mrm, call);
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::RealProxy*>());
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor(::System::Type* classToProxy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::RealProxy*>(classToProxy));
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::RealProxy*>(classToProxy, identity));
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::RealProxy*>(classToProxy, stub, stubData));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::RealProxy::RealProxy() {}
