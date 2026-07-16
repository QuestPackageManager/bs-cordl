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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::GetProxyType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b2f084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "GetProxyType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.get_IsContextBoundObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::get_IsContextBoundObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b2f12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "get_IsContextBoundObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.get_TargetContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::get_TargetContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b2f150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "get_TargetContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.InCurrentContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(&::System::Runtime::Remoting::Proxies::TransparentProxy::InCurrentContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b2f168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "InCurrentContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.LoadRemoteFieldNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Proxies::TransparentProxy::*)(::System::IntPtr, ::System::IntPtr)>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::LoadRemoteFieldNew)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5b2f1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(),
                                                                                           { "LoadRemoteFieldNew", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy.StoreRemoteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::TransparentProxy::*)(::System::IntPtr, ::System::IntPtr, ::System::Object*)>(
    &::System::Runtime::Remoting::Proxies::TransparentProxy::StoreRemoteField)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5b2fd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(),
                                                { "StoreRemoteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::TransparentProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(&::System::Runtime::Remoting::Proxies::TransparentProxy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2ffe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { ".ctor", {}, {} })));
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
  this->____rp = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "GetProxyType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::TransparentProxy::get_IsContextBoundObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "get_IsContextBoundObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Proxies::TransparentProxy::get_TargetContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "get_TargetContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::TransparentProxy::InCurrentContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { "InCurrentContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Proxies::TransparentProxy::LoadRemoteFieldNew(::System::IntPtr classPtr, ::System::IntPtr fieldPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(),
                                                                                         { "LoadRemoteFieldNew", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, classPtr, fieldPtr);
}
inline void System::Runtime::Remoting::Proxies::TransparentProxy::StoreRemoteField(::System::IntPtr classPtr, ::System::IntPtr fieldPtr, ::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(),
                                              { "StoreRemoteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classPtr, fieldPtr, arg);
}
inline void System::Runtime::Remoting::Proxies::TransparentProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::TransparentProxy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::TransparentProxy* System::Runtime::Remoting::Proxies::TransparentProxy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Proxies::TransparentProxy*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::TransparentProxy::TransparentProxy() {}
