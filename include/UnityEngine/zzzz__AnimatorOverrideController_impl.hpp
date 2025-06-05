#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorOverrideController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_impl.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4853e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)()>(
    &::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4853eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::New_ctor(::System::Object* object,
                                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::AnimatorOverrideController_OnOverrideControllerDirtyCallback() {}
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)(::UnityEngine::RuntimeAnimatorController*)>(
    &::UnityEngine::AnimatorOverrideController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4853a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeAnimatorController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.Internal_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*)>(
    &::UnityEngine::AnimatorOverrideController::Internal_Create)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4853ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "Internal_Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeAnimatorController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.SetClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::AnimatorOverrideController::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, bool)>(&::UnityEngine::AnimatorOverrideController::SetClip)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4853b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "SetClip", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.SendNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)()>(
    &::UnityEngine::AnimatorOverrideController::SendNotification)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4853b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(),
                                                                               "SendNotification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.ApplyOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)(
    ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>*)>(
    &::UnityEngine::AnimatorOverrideController::ApplyOverrides)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x4853ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "ApplyOverrides", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.OnInvalidateOverrideController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(
    &::UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4853e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "OnInvalidateOverrideController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnOverrideControllerDirty;
}
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* const& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnOverrideControllerDirty;
}
constexpr void UnityEngine::AnimatorOverrideController::__cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnOverrideControllerDirty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AnimatorOverrideController::_ctor(::UnityEngine::RuntimeAnimatorController* controller) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeAnimatorController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline void UnityEngine::AnimatorOverrideController::Internal_Create(::UnityEngine::AnimatorOverrideController* self, ::UnityEngine::RuntimeAnimatorController* controller) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "Internal_Create", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimeAnimatorController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, controller);
}
inline void UnityEngine::AnimatorOverrideController::SetClip(::UnityEngine::AnimationClip* originalClip, ::UnityEngine::AnimationClip* overrideClip, bool notify) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "SetClip", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originalClip, overrideClip, notify);
}
inline void UnityEngine::AnimatorOverrideController::SendNotification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(),
                                                                             "SendNotification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::AnimatorOverrideController::ApplyOverrides(
    ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>* overrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "ApplyOverrides", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrides);
}
inline void UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "OnInvalidateOverrideController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, controller);
}
inline ::UnityEngine::AnimatorOverrideController* UnityEngine::AnimatorOverrideController::New_ctor(::UnityEngine::RuntimeAnimatorController* controller) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AnimatorOverrideController*>(controller));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController::AnimatorOverrideController() {}
