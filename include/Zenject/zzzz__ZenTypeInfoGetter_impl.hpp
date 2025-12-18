#pragma once
// IWYU pragma private; include "Zenject/ZenTypeInfoGetter.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Zenject/zzzz__ZenTypeInfoGetter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenTypeInfoGetter::*)(::System::Object*, ::System::IntPtr)>(&::Zenject::ZenTypeInfoGetter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cd0568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (::Zenject::ZenTypeInfoGetter::*)()>(&::Zenject::ZenTypeInfoGetter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cd05d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Zenject::ZenTypeInfoGetter::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::Zenject::ZenTypeInfoGetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6cd05e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (::Zenject::ZenTypeInfoGetter::*)(::System::IAsyncResult*)>(
    &::Zenject::ZenTypeInfoGetter::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cd0600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 15));
    return ___internal_method;
  }
};
inline void Zenject::ZenTypeInfoGetter::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenTypeInfoGetter::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Zenject::ZenTypeInfoGetter::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenTypeInfoGetter::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(this, ___internal_method, result);
}
inline ::Zenject::ZenTypeInfoGetter* Zenject::ZenTypeInfoGetter::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ZenTypeInfoGetter*>(object, method));
}
// Ctor Parameters []
constexpr ::Zenject::ZenTypeInfoGetter::ZenTypeInfoGetter() {}
