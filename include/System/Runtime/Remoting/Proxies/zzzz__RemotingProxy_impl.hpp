#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/RemotingProxy.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(
    ::System::Type*, ::System::Runtime::Remoting::ClientIdentity*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x28131ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ClientIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(
    ::System::Type*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x281273c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::Invoke)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x281a86c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.AttachIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x281b104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), "AttachIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.ActivateRemoteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28193e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), "ActivateRemoteObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x281b8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                                                               "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.CanCastTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::System::Object*)>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x281ba00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                                                               "CanCastTo", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RemotingProxy::Finalize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x281bc1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr System::Runtime::Remoting::Proxies::RemotingProxy::operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept {
  return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr ::System::Runtime::Remoting::IRemotingTypeInfo* System::Runtime::Remoting::Proxies::RemotingProxy::i___System__Runtime__Remoting__IRemotingTypeInfo() noexcept {
  return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__sink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sink;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__sink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sink;
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_set__sink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::ConstructionCall*> const&
System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_get__ctorCall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ctorCall;
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__cordl_internal_set__ctorCall(::System::Runtime::Remoting::Messaging::ConstructionCall* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ctorCall)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::setStaticF__cache_GetTypeMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_cache_GetTypeMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Proxies::RemotingProxy::getStaticF__cache_GetTypeMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_cache_GetTypeMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>();
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::setStaticF__cache_GetHashCodeMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_cache_GetHashCodeMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Proxies::RemotingProxy::getStaticF__cache_GetHashCodeMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_cache_GetHashCodeMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>();
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::RemotingProxy*>(type, identity));
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ClientIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, identity);
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(::System::Type* type, ::StringW activationUrl,
                                                                                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::RemotingProxy*>(type, activationUrl, activationAttributes));
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(::System::Type* type, ::StringW activationUrl, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, activationUrl, activationAttributes);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RemotingProxy::Invoke(::System::Runtime::Remoting::Messaging::IMessage* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, request);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity(::System::Runtime::Remoting::Identity* identity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), "AttachIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), "ActivateRemoteObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, request);
}
inline ::StringW System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                                                             "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo(::System::Type* fromType, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                                                             "CanCastTo", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fromType, o);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy::RemotingProxy() {}
