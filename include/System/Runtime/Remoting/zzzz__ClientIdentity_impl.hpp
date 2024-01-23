#pragma once
#include "System/Runtime/Remoting/zzzz__Identity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ClientIdentity::*)(::StringW, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::ClientIdentity::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2485244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.get_ClientProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::MarshalByRefObject* (::System::Runtime::Remoting::ClientIdentity::*)()>(
    &::System::Runtime::Remoting::ClientIdentity::get_ClientProxy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x248534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(),
                                                                               "get_ClientProxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.set_ClientProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ClientIdentity::*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::ClientIdentity::set_ClientProxy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24853d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(), "set_ClientProxy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.CreateObjRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::Runtime::Remoting::ClientIdentity::*)(::System::Type*)>(
    &::System::Runtime::Remoting::ClientIdentity::CreateObjRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.get_TargetUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ClientIdentity::*)()>(
    &::System::Runtime::Remoting::ClientIdentity::get_TargetUri)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x248544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(),
                                                                               "get_TargetUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::WeakReference*& System::Runtime::Remoting::ClientIdentity::__cordl_internal_get__proxyReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyReference;
}
constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& System::Runtime::Remoting::ClientIdentity::__cordl_internal_get__proxyReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyReference;
}
constexpr void System::Runtime::Remoting::ClientIdentity::__cordl_internal_set__proxyReference(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxyReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::ClientIdentity* System::Runtime::Remoting::ClientIdentity::New_ctor(::StringW objectUri, ::System::Runtime::Remoting::ObjRef* objRef) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::ClientIdentity*>(objectUri, objRef));
}
inline void System::Runtime::Remoting::ClientIdentity::_ctor(::StringW objectUri, ::System::Runtime::Remoting::ObjRef* objRef) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectUri, objRef);
}
inline ::System::MarshalByRefObject* System::Runtime::Remoting::ClientIdentity::get_ClientProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(),
                                                                             "get_ClientProxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::MarshalByRefObject*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ClientIdentity::set_ClientProxy(::System::MarshalByRefObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(), "set_ClientProxy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ClientIdentity::CreateObjRef(::System::Type* requestedType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*, false>(this, ___internal_method, requestedType);
}
inline ::StringW System::Runtime::Remoting::ClientIdentity::get_TargetUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ClientIdentity*>::get(),
                                                                             "get_TargetUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ClientIdentity::ClientIdentity() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
