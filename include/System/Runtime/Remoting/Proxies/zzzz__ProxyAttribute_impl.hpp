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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::MarshalByRefObject* (::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Type*)>(
    &::System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2817ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.CreateProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RealProxy* (
    ::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*, ::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2817fe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.GetPropertiesForNewContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(
    ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2818038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), "GetPropertiesForNewContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::ProxyAttribute.IsContextOK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Proxies::ProxyAttribute::*)(
    ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281803c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), "IsContextOK", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr System::Runtime::Remoting::Proxies::ProxyAttribute::operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr ::System::Runtime::Remoting::Contexts::IContextAttribute* System::Runtime::Remoting::Proxies::ProxyAttribute::i___System__Runtime__Remoting__Contexts__IContextAttribute() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
inline ::System::MarshalByRefObject* System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance(::System::Type* serverType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::MarshalByRefObject*, false>(this, ___internal_method, serverType);
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType,
                                                                                                                        ::System::Object* serverObject,
                                                                                                                        ::System::Runtime::Remoting::Contexts::Context* serverContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RealProxy*, false>(this, ___internal_method, objRef, serverType, serverObject, serverContext);
}
inline void System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), "GetPropertiesForNewContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline bool System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx,
                                                                            ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::ProxyAttribute*>::get(), "IsContextOK", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ctx, msg);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Proxies::ProxyAttribute::ProxyAttribute() {}
