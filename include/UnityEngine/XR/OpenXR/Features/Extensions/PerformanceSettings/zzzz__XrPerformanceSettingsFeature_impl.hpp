#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\Features\Extensions\PerformanceSettings\XrPerformanceSettingsFeature.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__XrPerformanceSettingsFeature_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceChangeNotification_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceDomain_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceLevelHint_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__XrPerformanceSettingsFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a1ed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::*)(
        ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification)>(
        &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a1ee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(),
                           { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::
        NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification,
                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a1ee7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(),
                           { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::*)(::System::IAsyncResult*)>(
        &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a1ef04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(),
                           { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::Invoke(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification notification) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notification);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::BeginInvoke(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification notification, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, notification, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*
UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::New_ctor(::System::Object* object,
                                                                                                                                                       ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate::
    NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi.xr_performance_settings_setEventCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*)>(
        &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi::xr_performance_settings_setEventCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a1edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi*>(),
                         { "xr_performance_settings_setEventCallback",
                           {},
                           { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi.xr_performance_settings_setPerformanceLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain,
                                                                ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint)>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi::xr_performance_settings_setPerformanceLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a1ec38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi*>(),
                                                             { "xr_performance_settings_setPerformanceLevel",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi::xr_performance_settings_setEventCallback(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi*>(),
                          { "xr_performance_settings_setEventCallback",
                            {},
                            { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi::xr_performance_settings_setPerformanceLevel(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain, ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi*>(),
                                                           { "xr_performance_settings_setPerformanceLevel",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, domain, level);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi::XrPerformanceSettingsFeature_NativeApi() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature.add_OnXrPerformanceChangeNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*)>(
        &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::add_OnXrPerformanceChangeNotification)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a1ea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                            { "add_OnXrPerformanceChangeNotification",
                              {},
                              { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature.remove_OnXrPerformanceChangeNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*)>(
        &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::remove_OnXrPerformanceChangeNotification)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6a1eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                            { "remove_OnXrPerformanceChangeNotification",
                              {},
                              { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature.SetPerformanceLevelHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain,
                                                                ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint)>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::SetPerformanceLevelHint)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a1ebc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                                                             { "SetPerformanceLevelHint",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a1ecc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature.OnXrPerformanceNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification)>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::OnXrPerformanceNotificationCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a1e97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                            { "OnXrPerformanceNotificationCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::setStaticF_OnXrPerformanceChangeNotification(
    ::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*,
                                    "OnXrPerformanceChangeNotification", ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*
UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::getStaticF_OnXrPerformanceChangeNotification() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*,
                                           "OnXrPerformanceChangeNotification", ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>();
}
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::add_OnXrPerformanceChangeNotification(
    ::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                          { "add_OnXrPerformanceChangeNotification",
                            {},
                            { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::remove_OnXrPerformanceChangeNotification(
    ::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                          { "remove_OnXrPerformanceChangeNotification",
                            {},
                            { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::SetPerformanceLevelHint(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain, ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                                                           { "SetPerformanceLevelHint",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, domain, level);
}
inline bool UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::OnXrPerformanceNotificationCallback(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification notification) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(),
                          { "OnXrPerformanceNotificationCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notification);
}
inline void UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*
UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature::XrPerformanceSettingsFeature() {}
