#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::System::Object*, void*)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2bce304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bce434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::UnityEngine::InputSystem::InputDevice*, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>,
                                                                         ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bce448;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bce470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>(object, method));
}
inline void UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Nullable_1<int64_t> UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                            ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(this, ___internal_method, device, command);
}
inline ::System::IAsyncResult* UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                           ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> command,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, device, command, callback, object);
}
inline ::System::Nullable_1<int64_t> UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::InputDeviceCommandDelegate() {}
