#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceFindControlLayoutDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4619cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(
    ::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4619d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::System::AsyncCallback*,
                                                                                  ::System::Object*)>(&::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4619d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::*)(
    ::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::System::IAsyncResult*)>(&::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4619e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::Invoke(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description,
                                                                                                 ::StringW matchedLayout,
                                                                                                 ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, description, matchedLayout, executeDeviceCommand);
}
inline ::System::IAsyncResult*
UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::BeginInvoke(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                                                     ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand,
                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, description, matchedLayout, executeDeviceCommand, callback, object);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::EndInvoke(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description,
                                                                                                    ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, description, result);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate::InputDeviceFindControlLayoutDelegate() {}
