#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__FixMethodDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::FixMethodDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::FixMethodDelegate::*)(::System::Object*, void*)>(
    &::Assets::OVR::Scripts::FixMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27f8534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Assets::OVR::Scripts::FixMethodDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::FixMethodDelegate::*)(::UnityEngine::Object*, bool, int32_t)>(
    &::Assets::OVR::Scripts::FixMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f8664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Assets::OVR::Scripts::FixMethodDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Assets::OVR::Scripts::FixMethodDelegate::*)(::UnityEngine::Object*, bool, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Assets::OVR::Scripts::FixMethodDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27f867c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Assets::OVR::Scripts::FixMethodDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::FixMethodDelegate::*)(::System::IAsyncResult*)>(
    &::Assets::OVR::Scripts::FixMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27f8740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Assets::OVR::Scripts::FixMethodDelegate* Assets::OVR::Scripts::FixMethodDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Assets::OVR::Scripts::FixMethodDelegate*>(object, method));
}
inline void Assets::OVR::Scripts::FixMethodDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Assets::OVR::Scripts::FixMethodDelegate::Invoke(::UnityEngine::Object* obj, bool isLastInSet, int32_t selectedIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, isLastInSet, selectedIndex);
}
inline ::System::IAsyncResult* Assets::OVR::Scripts::FixMethodDelegate::BeginInvoke(::UnityEngine::Object* obj, bool isLastInSet, int32_t selectedIndex, ::System::AsyncCallback* callback,
                                                                                    ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, obj, isLastInSet, selectedIndex, callback, object);
}
inline void Assets::OVR::Scripts::FixMethodDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixMethodDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::FixMethodDelegate::FixMethodDelegate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
