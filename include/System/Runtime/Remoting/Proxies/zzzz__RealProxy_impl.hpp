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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x598232c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Type*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5982338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Type*, ::System::Runtime::Remoting::ClientIdentity*)>(&::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x598241c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ClientIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Type*, ::System::IntPtr, ::System::Object*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5982340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.InternalGetProxyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Object*)>(&::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5982444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "InternalGetProxyType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetProxiedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x597aa34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                                               "GetProxiedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Proxies::RealProxy::GetObjectData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x598244c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.get_ObjectIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59824b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                                               "get_ObjectIdentity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.set_ObjectIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59824bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "set_ObjectIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Proxies::RealProxy::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.PrivateInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Runtime::Remoting::Proxies::RealProxy*, ::System::Runtime::Remoting::Messaging::IMessage*, ::ByRef<::System::Exception*>,
                                      ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(&::System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x598178c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "PrivateInvoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Exception*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.InternalGetTransparentProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::RealProxy::*)(::StringW)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5982e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetTransparentProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5982e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.AttachServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::AttachServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5982f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "AttachServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.SetTargetDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RealProxy::*)(int32_t)>(
    &::System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5982f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "SetTargetDomain",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.GetAppDomainTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::RealProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5982f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                                               "GetAppDomainTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RealProxy.ProcessResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(
    ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&::System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x59826fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "ProcessResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___class_to_proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectIdentity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objTP)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stubData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor(::System::Type* classToProxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classToProxy);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ClientIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classToProxy, identity);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::_ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classToProxy, stub, stubData);
}
inline ::System::Type* System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType(::System::Object* transparentProxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "InternalGetProxyType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, transparentProxy);
}
inline ::System::Type* System::Runtime::Remoting::Proxies::RealProxy::GetProxiedType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                                             "GetProxiedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Proxies::RealProxy::get_ObjectIdentity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                                             "get_ObjectIdentity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::set_ObjectIdentity(::System::Runtime::Remoting::Identity* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "set_ObjectIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RealProxy::Invoke(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* rp, ::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                      ::ByRef<::System::Exception*> exc, ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> out_args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "PrivateInvoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Exception*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, rp, msg, exc, out_args);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy(::StringW className) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, className);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::GetTransparentProxy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::AttachServer(::System::MarshalByRefObject* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "AttachServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Runtime::Remoting::Proxies::RealProxy::SetTargetDomain(int32_t domainId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "SetTargetDomain",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, domainId);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::RealProxy::GetAppDomainTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(),
                                                                             "GetAppDomainTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Proxies::RealProxy::ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm,
                                                                                                                               ::System::Runtime::Remoting::Messaging::MonoMethodMessage* call) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RealProxy*>::get(), "ProcessResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, mrm, call);
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::RealProxy*>());
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor(::System::Type* classToProxy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::RealProxy*>(classToProxy));
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor(::System::Type* classToProxy, ::System::Runtime::Remoting::ClientIdentity* identity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::RealProxy*>(classToProxy, identity));
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::RealProxy::New_ctor(::System::Type* classToProxy, ::System::IntPtr stub, ::System::Object* stubData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::RealProxy*>(classToProxy, stub, stubData));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::RealProxy::RealProxy() {}
