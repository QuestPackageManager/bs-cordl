#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::MarshalByRefObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25f3d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.get_ObjectIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ServerIdentity* (::System::MarshalByRefObject::*)()>(
    &::System::MarshalByRefObject::get_ObjectIdentity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25fa454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), "get_ObjectIdentity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.set_ObjectIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MarshalByRefObject::*)(::System::Runtime::Remoting::ServerIdentity*)>(
    &::System::MarshalByRefObject::set_ObjectIdentity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25fa494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), "set_ObjectIdentity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.CreateObjRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::MarshalByRefObject::*)(::System::Type*)>(
    &::System::MarshalByRefObject::CreateObjRef)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25fa4d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.InitializeLifetimeService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::InitializeLifetimeService)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25fa514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::MarshalByRefObject::__cordl_internal_get__identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::MarshalByRefObject::__cordl_internal_get__identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identity;
}
constexpr void System::MarshalByRefObject::__cordl_internal_set__identity(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::MarshalByRefObject* System::MarshalByRefObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::MarshalByRefObject*>());
}
inline void System::MarshalByRefObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ServerIdentity* System::MarshalByRefObject::get_ObjectIdentity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), "get_ObjectIdentity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ServerIdentity*, false>(this, ___internal_method);
}
inline void System::MarshalByRefObject::set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), "set_ObjectIdentity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::ObjRef* System::MarshalByRefObject::CreateObjRef(::System::Type* requestedType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*, false>(this, ___internal_method, requestedType);
}
inline ::System::Object* System::MarshalByRefObject::InitializeLifetimeService() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::MarshalByRefObject::MarshalByRefObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
