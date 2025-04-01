#pragma once
// IWYU pragma private; include "Zenject/ZenInjectMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Zenject/zzzz__ZenInjectMethod_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::ZenInjectMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenInjectMethod::*)(::System::Object*, ::System::IntPtr)>(&::Zenject::ZenInjectMethod::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4aecc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenInjectMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenInjectMethod::*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ZenInjectMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4aecd30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenInjectMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Zenject::ZenInjectMethod::*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::AsyncCallback*, ::System::Object*)>(
        &::Zenject::ZenInjectMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4aecd44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenInjectMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenInjectMethod::*)(::System::IAsyncResult*)>(&::Zenject::ZenInjectMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4aecd6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), 15));
    return ___internal_method;
  }
};
inline void Zenject::ZenInjectMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Zenject::ZenInjectMethod::Invoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, args);
}
inline ::System::IAsyncResult* Zenject::ZenInjectMethod::BeginInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::AsyncCallback* callback,
                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, obj, args, callback, object);
}
inline void Zenject::ZenInjectMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenInjectMethod*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Zenject::ZenInjectMethod* Zenject::ZenInjectMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ZenInjectMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::Zenject::ZenInjectMethod::ZenInjectMethod() {}
