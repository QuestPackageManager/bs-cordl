#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Proxies\RemotingProxy.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::System::Runtime::Remoting::ClientIdentity*)>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b2ca68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Remoting::ClientIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b2bfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::Invoke)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5b33984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.AttachIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5b341fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                                                           { "AttachIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.ActivateRemoteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b32598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                             { "ActivateRemoteObject", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&::System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b34a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.CanCastTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::System::Object*)>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5b34b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                                                           { "CanCastTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&::System::Runtime::Remoting::Proxies::RemotingProxy::Finalize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b34d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__sink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__sink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sink;
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_set__sink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sink = value;
}
constexpr bool& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__hasEnvoySink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasEnvoySink;
}
constexpr bool const& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__hasEnvoySink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasEnvoySink;
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_set__hasEnvoySink(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasEnvoySink = value;
}
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall*& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__ctorCall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ctorCall;
}
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall* const& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__ctorCall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ctorCall;
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_set__ctorCall(::System::Runtime::Remoting::Messaging::ConstructionCall* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ctorCall = value;
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::setStaticF__cache_GetTypeMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_cache_GetTypeMethod", ::System::Runtime::Remoting::Proxies::RemotingProxy*>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Proxies::RemotingProxy::getStaticF__cache_GetTypeMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_cache_GetTypeMethod", ::System::Runtime::Remoting::Proxies::RemotingProxy*>();
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::setStaticF__cache_GetHashCodeMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_cache_GetHashCodeMethod", ::System::Runtime::Remoting::Proxies::RemotingProxy*>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Proxies::RemotingProxy::getStaticF__cache_GetHashCodeMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_cache_GetHashCodeMethod", ::System::Runtime::Remoting::Proxies::RemotingProxy*>();
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Remoting::ClientIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, identity);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(::System::Type* type, ::StringW activationUrl, ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, activationUrl, activationAttributes);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RemotingProxy::Invoke(::System::Runtime::Remoting::Messaging::IMessage* request) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, request);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity(::System::Runtime::Remoting::Identity* identity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                                                         { "AttachIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                           { "ActivateRemoteObject", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, request);
}
inline ::StringW System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo(::System::Type* fromType, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(),
                                                                                         { "CanCastTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromType, o);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::RemotingProxy*>(type, identity));
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(::System::Type* type, ::StringW activationUrl,
                                                                                                                        ::ArrayW<::System::Object*> activationAttributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::RemotingProxy*>(type, activationUrl, activationAttributes));
}
/// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr System::Runtime::Remoting::Proxies::RemotingProxy::operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept {
  return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr ::System::Runtime::Remoting::IRemotingTypeInfo* System::Runtime::Remoting::Proxies::RemotingProxy::i___System__Runtime__Remoting__IRemotingTypeInfo() noexcept {
  return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy::RemotingProxy() {}
