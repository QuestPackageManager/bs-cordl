#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/ProxyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__ProxyAttribute_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::MarshalByRefObject* (::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Type*)>(
    &::System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b2ef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.CreateProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Proxies::RealProxy* (
    ::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*, ::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b2f018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.GetPropertiesForNewContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2f078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(),
                                                             { "GetPropertiesForNewContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.IsContextOK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(
    ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2f07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(),
            { "IsContextOK", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>(), ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
inline ::System::MarshalByRefObject* System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance(::System::Type* serverType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::MarshalByRefObject*>(this, ___internal_method, serverType);
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType,
                                                                                                                        ::System::Object* serverObject,
                                                                                                                        ::System::Runtime::Remoting::Contexts::Context* serverContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RealProxy*>(this, ___internal_method, objRef, serverType, serverObject, serverContext);
}
inline void System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(),
                                                           { "GetPropertiesForNewContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline bool System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx,
                                                                            ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Proxies::ProxyAttribute*>(),
          { "IsContextOK", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>(), ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ctx, msg);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr System::Runtime::Remoting::Proxies::ProxyAttribute::operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr ::System::Runtime::Remoting::Contexts::IContextAttribute* System::Runtime::Remoting::Proxies::ProxyAttribute::i___System__Runtime__Remoting__Contexts__IContextAttribute() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::ProxyAttribute::ProxyAttribute() {}
