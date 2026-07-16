#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/DebugManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRSampledEventSender_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a60bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a60c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a60c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::*)(::System::IAsyncResult*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a60c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(),
                                                            { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*
Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate::DebugManager_ShouldRetrieveInstanceDelegate() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a60d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c.__ctor_b__43_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::*)(::GlobalNamespace::OVRTelemetryMarker)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::__ctor_b__43_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a60d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(),
                                                                                           { "<.ctor>b__43_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::setStaticF___9__43_0(::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*, "<>9__43_0",
                                    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::getStaticF___9__43_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*, "<>9__43_0",
                                           ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::__ctor_b__43_0(::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>(),
                                                                                         { "<.ctor>b__43_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(this, ___internal_method, marker);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c* Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager___c::DebugManager___c() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a5f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> (*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a5f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.set_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::Manager::DebugManager*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a5f8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                           { "set_Instance", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnReady)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a5f934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                             { "add_OnReady", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnReady)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a5fa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                             { "remove_OnReady", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnFocusLostAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnFocusLostAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5fafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "add_OnFocusLostAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnFocusLostAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnFocusLostAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5fba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "remove_OnFocusLostAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnDisableAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnDisableAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5fc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "add_OnDisableAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnDisableAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnDisableAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5fd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "remove_OnDisableAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_OnUpdateAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnUpdateAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5fdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "add_OnUpdateAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_OnUpdateAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnUpdateAction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5fe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "remove_OnUpdateAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.add_CustomShouldRetrieveInstanceCondition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_CustomShouldRetrieveInstanceCondition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5ff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                            { "add_CustomShouldRetrieveInstanceCondition", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.remove_CustomShouldRetrieveInstanceCondition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*)>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_CustomShouldRetrieveInstanceCondition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5ffb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                            { "remove_CustomShouldRetrieveInstanceCondition", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.get_UiPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_UiPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6005c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "get_UiPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.set_UiPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_UiPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a60064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                           { "set_UiPanel", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5a6006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a601d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a605b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a605d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a605f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a6069c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.RetrieveInstancesIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::RetrieveInstancesIfNeeded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a604e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "RetrieveInstancesIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.InitSubManagers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::InitSubManagers)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a606f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.ProcessLoadedTypeBySubManagers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::ProcessLoadedTypeBySubManagers)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a607ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "ProcessLoadedTypeBySubManagers", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.UnregisterInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::UnregisterInspector)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a60930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                           { "UnregisterInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager.RegisterTypesFromInspectedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::DebugManager::RegisterTypesFromInspectedData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5a60378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "RegisterTypesFromInspectedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::DebugManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::DebugManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::DebugManager::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a60a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnFocusLostAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnFocusLostAction;
}
constexpr ::System::Action* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnFocusLostAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnFocusLostAction;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_OnFocusLostAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnFocusLostAction = value;
}
constexpr ::System::Action*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnDisableAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnDisableAction;
}
constexpr ::System::Action* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnDisableAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnDisableAction;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_OnDisableAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnDisableAction = value;
}
constexpr ::System::Action*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnUpdateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnUpdateAction;
}
constexpr ::System::Action* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_OnUpdateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnUpdateAction;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_OnUpdateAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnUpdateAction = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*&
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_CustomShouldRetrieveInstanceCondition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomShouldRetrieveInstanceCondition;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* const&
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_CustomShouldRetrieveInstanceCondition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomShouldRetrieveInstanceCondition;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_CustomShouldRetrieveInstanceCondition(
    ::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomShouldRetrieveInstanceCondition = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_InstanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstanceCache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_InstanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstanceCache;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_InstanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InstanceCache = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_SubDebugManagers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubDebugManagers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const&
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_SubDebugManagers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubDebugManagers;
}
constexpr void
Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_SubDebugManagers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubDebugManagers = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_ShouldRetrieveInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShouldRetrieveInstances;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get_ShouldRetrieveInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShouldRetrieveInstances;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set_ShouldRetrieveInstances(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShouldRetrieveInstances = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__lastRetrievedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRetrievedTime;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__lastRetrievedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRetrievedTime;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set__lastRetrievedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastRetrievedTime = value;
}
constexpr ::GlobalNamespace::OVRSampledEventSender*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__frameUpdateRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameUpdateRecorder;
}
constexpr ::GlobalNamespace::OVRSampledEventSender* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__frameUpdateRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameUpdateRecorder;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set__frameUpdateRecorder(::GlobalNamespace::OVRSampledEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameUpdateRecorder = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__UiPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UiPanel_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_get__UiPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UiPanel_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManager::__cordl_internal_set__UiPanel_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UiPanel_k__BackingField = value;
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>, "<Instance>k__BackingField", ::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(
      std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> Meta::XR::ImmersiveDebugger::Manager::DebugManager::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>, "<Instance>k__BackingField", ::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::setStaticF_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*, "OnReady", ::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(
      std::forward<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>(value));
}
inline ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* Meta::XR::ImmersiveDebugger::Manager::DebugManager::getStaticF_OnReady() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*, "OnReady", ::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager> Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_Instance(::Meta::XR::ImmersiveDebugger::Manager::DebugManager* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                         { "set_Instance", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                           { "add_OnReady", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnReady(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                           { "remove_OnReady", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::Manager::DebugManager>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnFocusLostAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "add_OnFocusLostAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnFocusLostAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "remove_OnFocusLostAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnDisableAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "add_OnDisableAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnDisableAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "remove_OnDisableAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_OnUpdateAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "add_OnUpdateAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_OnUpdateAction(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "remove_OnUpdateAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::add_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                          { "add_CustomShouldRetrieveInstanceCondition", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
Meta::XR::ImmersiveDebugger::Manager::DebugManager::remove_CustomShouldRetrieveInstanceCondition(::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                          { "remove_CustomShouldRetrieveInstanceCondition", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager_ShouldRetrieveInstanceDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* Meta::XR::ImmersiveDebugger::Manager::DebugManager::get_UiPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "get_UiPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::set_UiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                         { "set_UiPanel", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::RetrieveInstancesIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "RetrieveInstancesIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::InitSubManagers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TManagerType> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::RegisterManager() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "RegisterManager", { ::i2c::class_of<TManagerType>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TManagerType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::ProcessLoadedTypeBySubManagers(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "ProcessLoadedTypeBySubManagers", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(),
                                                                                         { "UnregisterInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::RegisterTypesFromInspectedData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { "RegisterTypesFromInspectedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::DebugManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManager* Meta::XR::ImmersiveDebugger::Manager::DebugManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManager::DebugManager() {}
