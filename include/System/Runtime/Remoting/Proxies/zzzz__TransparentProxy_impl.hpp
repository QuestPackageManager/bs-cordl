#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/TransparentProxy.hpp"
#include "Mono/zzzz__RuntimeRemoteClassHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__TransparentProxy_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.GetProxyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::GetProxyType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3cd7c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               "GetProxyType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.get_IsContextBoundObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::get_IsContextBoundObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3cd7d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               "get_IsContextBoundObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.get_TargetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::get_TargetContext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3cd7d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               "get_TargetContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.InCurrentContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::InCurrentContext)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3cd7da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               "InCurrentContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.LoadRemoteFieldNew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::TransparentProxy::*)(::System::IntPtr, ::System::IntPtr)>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::LoadRemoteFieldNew)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3cd7de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               "LoadRemoteFieldNew", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.StoreRemoteField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::TransparentProxy::*)(
    ::System::IntPtr, ::System::IntPtr, ::System::Object*)>(&::System::Runtime::Remoting::Proxies::TransparentProxy::StoreRemoteField)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3cd8968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               "StoreRemoteField", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd8c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Proxies::RealProxy*& System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_get__rp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rp;
}
constexpr ::System::Runtime::Remoting::Proxies::RealProxy* const& System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_get__rp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rp;
}
constexpr void System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_set__rp(::System::Runtime::Remoting::Proxies::RealProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::RuntimeRemoteClassHandle& System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_get__class() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____class;
}
constexpr ::Mono::RuntimeRemoteClassHandle const& System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_get__class() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____class;
}
constexpr void System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_set__class(::Mono::RuntimeRemoteClassHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____class = value;
}
constexpr bool& System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_get__custom_type_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____custom_type_info;
}
constexpr bool const& System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_get__custom_type_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____custom_type_info;
}
constexpr void System::Runtime::Remoting::Proxies::TransparentProxy::__cordl_internal_set__custom_type_info(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____custom_type_info = value;
}
inline ::System::RuntimeType* System::Runtime::Remoting::Proxies::TransparentProxy::GetProxyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             "GetProxyType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::TransparentProxy::get_IsContextBoundObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             "get_IsContextBoundObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Proxies::TransparentProxy::get_TargetContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             "get_TargetContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::TransparentProxy::InCurrentContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             "InCurrentContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::TransparentProxy::LoadRemoteFieldNew(::System::IntPtr classPtr, ::System::IntPtr fieldPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             "LoadRemoteFieldNew", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, classPtr, fieldPtr);
}
inline void System::Runtime::Remoting::Proxies::TransparentProxy::StoreRemoteField(::System::IntPtr classPtr, ::System::IntPtr fieldPtr, ::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             "StoreRemoteField", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classPtr, fieldPtr, arg);
}
inline void System::Runtime::Remoting::Proxies::TransparentProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::TransparentProxy*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::TransparentProxy* System::Runtime::Remoting::Proxies::TransparentProxy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Proxies::TransparentProxy*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::TransparentProxy::TransparentProxy() {}
