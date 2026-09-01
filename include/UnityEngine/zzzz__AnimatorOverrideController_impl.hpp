#pragma once
// IWYU pragma private; include "UnityEngine\AnimatorOverrideController.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a45ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)()>(
    &::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a45f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::New_ctor(::System::Object* object,
                                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::AnimatorOverrideController_OnOverrideControllerDirtyCallback() {}
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)(::UnityEngine::RuntimeAnimatorController*)>(
    &::UnityEngine::AnimatorOverrideController::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a45940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*)>(
    &::UnityEngine::AnimatorOverrideController::Internal_Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a459c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                         { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::AnimatorOverrideController*>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.SetClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, bool)>(
    &::UnityEngine::AnimatorOverrideController::SetClip)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a45a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                                { "SetClip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.SendNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)()>(&::UnityEngine::AnimatorOverrideController::SendNotification)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a45be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(), { "SendNotification", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.ApplyOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController::*)(
    ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>*)>(
    &::UnityEngine::AnimatorOverrideController::ApplyOverrides)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6a45ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
            { "ApplyOverrides",
              {},
              { ::i2c::type_of<
                  ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.OnInvalidateOverrideController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(&::UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a45ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                                             { "OnInvalidateOverrideController", {}, { ::i2c::type_of<::UnityEngine::AnimatorOverrideController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.Internal_Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*, ::System::IntPtr)>(&::UnityEngine::AnimatorOverrideController::Internal_Create_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a45a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                                { "Internal_Create_Injected", {}, { ::i2c::type_of<::UnityEngine::AnimatorOverrideController*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.SetClip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AnimatorOverrideController::SetClip_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a45b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                            { "SetClip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.SendNotification_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AnimatorOverrideController::SendNotification_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a45c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(), { "SendNotification_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
  this->___OnOverrideControllerDirty = value;
}
inline void UnityEngine::AnimatorOverrideController::_ctor(::UnityEngine::RuntimeAnimatorController* controller) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void UnityEngine::AnimatorOverrideController::Internal_Create(::UnityEngine::AnimatorOverrideController* self, ::UnityEngine::RuntimeAnimatorController* controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                       { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::AnimatorOverrideController*>(), ::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, controller);
}
inline void UnityEngine::AnimatorOverrideController::SetClip(::UnityEngine::AnimationClip* originalClip, ::UnityEngine::AnimationClip* overrideClip, bool notify) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                              { "SetClip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalClip, overrideClip, notify);
}
inline void UnityEngine::AnimatorOverrideController::SendNotification() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(), { "SendNotification", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AnimatorOverrideController::ApplyOverrides(
    ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>* overrides) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
          { "ApplyOverrides",
            {},
            { ::i2c::type_of<
                ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::AnimationClip>, ::UnityW<::UnityEngine::AnimationClip>>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrides);
}
inline void UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                                                                         { "OnInvalidateOverrideController", {}, { ::i2c::type_of<::UnityEngine::AnimatorOverrideController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller);
}
inline void UnityEngine::AnimatorOverrideController::Internal_Create_Injected(::UnityEngine::AnimatorOverrideController* self, ::System::IntPtr controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                                                           { "Internal_Create_Injected", {}, { ::i2c::type_of<::UnityEngine::AnimatorOverrideController*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, controller);
}
inline void UnityEngine::AnimatorOverrideController::SetClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr originalClip, ::System::IntPtr overrideClip, bool notify) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                          { "SetClip_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, originalClip, overrideClip, notify);
}
inline void UnityEngine::AnimatorOverrideController::SendNotification_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(), { "SendNotification_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AnimatorOverrideController* UnityEngine::AnimatorOverrideController::New_ctor(::UnityEngine::RuntimeAnimatorController* controller) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimatorOverrideController*>(controller));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController::AnimatorOverrideController() {}
