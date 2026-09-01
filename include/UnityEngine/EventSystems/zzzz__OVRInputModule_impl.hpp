#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\OVRInputModule.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include "GlobalNamespace/zzzz__OVRInputRayData_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputMode::OVRInputModule_InputMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputMode::OVRInputModule_InputMode() {}
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputMode UnityEngine::EventSystems::OVRInputModule_InputMode::Mouse{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputMode UnityEngine::EventSystems::OVRInputModule_InputMode::Buttons{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.IsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)()>(&::UnityEngine::EventSystems::OVRInputModule_InputSource::IsPressed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.IsReleased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)()>(&::UnityEngine::EventSystems::OVRInputModule_InputSource::IsReleased)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.GetPointerRayTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)()>(
    &::UnityEngine::EventSystems::OVRInputModule_InputSource::GetPointerRayTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)()>(&::UnityEngine::EventSystems::OVRInputModule_InputSource::IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)()>(&::UnityEngine::EventSystems::OVRInputModule_InputSource::IsActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.UpdatePointerRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)(::GlobalNamespace::OVRInputRayData)>(
    &::UnityEngine::EventSystems::OVRInputModule_InputSource::UpdatePointerRay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule_InputSource.GetHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Hand (::UnityEngine::EventSystems::OVRInputModule_InputSource::*)()>(
    &::UnityEngine::EventSystems::OVRInputModule_InputSource::GetHand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 6 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::EventSystems::OVRInputModule_InputSource::IsPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule_InputSource::IsReleased() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::EventSystems::OVRInputModule_InputSource::GetPointerRayTransform() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule_InputSource::IsValid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule_InputSource::IsActive() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule_InputSource::UpdatePointerRay(::GlobalNamespace::OVRInputRayData rayData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayData);
}
inline ::GlobalNamespace::OVRPlugin_Hand UnityEngine::EventSystems::OVRInputModule_InputSource::GetHand() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Hand>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5e49e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::Awake)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e4a074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_inputMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::OVRInputModule_InputMode (::UnityEngine::EventSystems::OVRInputModule::*)()>(
    &::UnityEngine::EventSystems::OVRInputModule::get_inputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_inputMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_allowActivationOnMobileDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_allowActivationOnMobileDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_allowActivationOnMobileDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(bool)>(&::UnityEngine::EventSystems::OVRInputModule::set_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_allowActivationOnMobileDevice", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_inputActionsPerSecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_inputActionsPerSecond", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_inputActionsPerSecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(float_t)>(&::UnityEngine::EventSystems::OVRInputModule::set_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_inputActionsPerSecond", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_horizontalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_horizontalAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_horizontalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_horizontalAxis", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_verticalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_verticalAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_verticalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_verticalAxis", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_submitButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_submitButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_submitButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_submitButton", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_cancelButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_cancelButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_cancelButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_cancelButton", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.UpdateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::UpdateModule)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4a560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.IsModuleSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::IsModuleSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e4a584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ShouldActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e4a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e4a748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.DeactivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::DeactivateModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4a80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SendSubmitEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::SendSubmitEventToSelectedObject)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5e4aa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "SendSubmitEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.AllowMoveEventProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)(float_t)>(&::UnityEngine::EventSystems::OVRInputModule::AllowMoveEventProcessing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e4ac8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "AllowMoveEventProcessing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetRawMoveVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetRawMoveVector)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e4ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetRawMoveVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SendMoveEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::SendMoveEventToSelectedObject)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e4ad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "SendMoveEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SendUpdateEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5e4afc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "SendUpdateEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ProcessMousePress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*)>(
    &::UnityEngine::EventSystems::OVRInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x5e4b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                             { "ProcessMousePress", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ProcessMouseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerInputModule_MouseState*)>(
    &::UnityEngine::EventSystems::OVRInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5e4b868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                             { "ProcessMouseEvent", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::Process)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e4bc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.UseMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, bool, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::UseMouse)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e4bb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                { "UseMouse", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.CopyFromTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(
    ::UnityEngine::EventSystems::OVRPointerEventData*, ::UnityEngine::EventSystems::OVRPointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e4beac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                            { "CopyFromTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRPointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::OVRPointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.CopyFromTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e4bf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                            { "CopyFromTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetPointerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)(int32_t, ::by_ref<::UnityEngine::EventSystems::OVRPointerEventData*>, bool)>(
    &::UnityEngine::EventSystems::OVRInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e4bf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                            { "GetPointerData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::OVRPointerEventData*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ClearSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5e4a810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "ClearSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetRectTransformNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::RectTransform*)>(&::UnityEngine::EventSystems::OVRInputModule::GetRectTransformNormal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e4c0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetRectTransformNormal", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetMouseStateFromInputSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (
    ::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::OVRInputModule_InputSource*, int32_t)>(&::UnityEngine::EventSystems::OVRInputModule::GetMouseStateFromInputSource)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x5e4c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetMouseStateFromRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::EventSystems::OVRInputModule::GetMouseStateFromRaycast)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x5e4d0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetCanvasPointerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (::UnityEngine::EventSystems::OVRInputModule::*)()>(
    &::UnityEngine::EventSystems::OVRInputModule::GetCanvasPointerData)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5e4d7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetCanvasPointerData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ShouldStartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::OVRInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5e4db78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                                                           { "ShouldStartDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.IsPointerMoving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::IsPointerMoving)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e4be64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                                                           { "IsPointerMoving", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SwipeAdjustedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::OVRInputModule::SwipeAdjustedPosition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e4de94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                { "SwipeAdjustedPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ProcessDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::OVRInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5e4df20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetGazeButtonState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_FramePressState (::UnityEngine::EventSystems::OVRInputModule::*)()>(
    &::UnityEngine::EventSystems::OVRInputModule::GetGazeButtonState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5e4e2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetExtraScrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetExtraScrollDelta)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e4cc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetExtraScrollDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.TrackInputSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::OVRInputModule_InputSource*)>(&::UnityEngine::EventSystems::OVRInputModule::TrackInputSource)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5e4a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                             { "TrackInputSource", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.UntrackInputSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::OVRInputModule_InputSource*)>(&::UnityEngine::EventSystems::OVRInputModule::UntrackInputSource)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e4e438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                             { "UntrackInputSource", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e4e60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::OVRInputModule> (*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e4e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::OVRInputModule*)>(&::UnityEngine::EventSystems::OVRInputModule::set_instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e4e73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_instance", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRInputModule*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_rayTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_rayTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayTransform;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_rayTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCursor>& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_Cursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cursor;
}
constexpr ::UnityW<::GlobalNamespace::OVRCursor> const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_Cursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cursor;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_Cursor(::UnityW<::GlobalNamespace::OVRCursor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cursor = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_joyPadClickButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joyPadClickButton;
}
constexpr ::GlobalNamespace::OVRInput_Button const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_joyPadClickButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joyPadClickButton;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_joyPadClickButton(::GlobalNamespace::OVRInput_Button value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___joyPadClickButton = value;
}
constexpr ::UnityEngine::KeyCode& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_gazeClickKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gazeClickKey;
}
constexpr ::UnityEngine::KeyCode const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_gazeClickKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gazeClickKey;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_gazeClickKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gazeClickKey = value;
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_performSphereCastForGazepointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performSphereCastForGazepointer;
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_performSphereCastForGazepointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performSphereCastForGazepointer;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_performSphereCastForGazepointer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___performSphereCastForGazepointer = value;
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_useRightStickScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRightStickScroll;
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_useRightStickScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRightStickScroll;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_useRightStickScroll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useRightStickScroll = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_rightStickDeadZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightStickDeadZone;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_rightStickDeadZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightStickDeadZone;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_rightStickDeadZone(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightStickDeadZone = value;
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_useSwipeScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useSwipeScroll;
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_useSwipeScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useSwipeScroll;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_useSwipeScroll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useSwipeScroll = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_swipeDragThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swipeDragThreshold;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_swipeDragThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swipeDragThreshold;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_swipeDragThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swipeDragThreshold = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_swipeDragScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swipeDragScale;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_swipeDragScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swipeDragScale;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_swipeDragScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swipeDragScale = value;
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_InvertSwipeXAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvertSwipeXAxis;
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_InvertSwipeXAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvertSwipeXAxis;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_InvertSwipeXAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvertSwipeXAxis = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRRaycaster>& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_activeGraphicRaycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeGraphicRaycaster;
}
constexpr ::UnityW<::GlobalNamespace::OVRRaycaster> const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_activeGraphicRaycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeGraphicRaycaster;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_activeGraphicRaycaster(::UnityW<::GlobalNamespace::OVRRaycaster> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeGraphicRaycaster = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_angleDragThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleDragThreshold;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_angleDragThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleDragThreshold;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_angleDragThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleDragThreshold = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_SpherecastRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpherecastRadius;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_SpherecastRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpherecastRadius;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_SpherecastRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpherecastRadius = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_NextAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextAction;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_NextAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextAction;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_NextAction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextAction = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_LastMousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_LastMousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePosition;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMousePosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_MousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_MousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MousePosition = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get__objectsHitThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectsHitThisFrame;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get__objectsHitThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectsHitThisFrame;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set__objectsHitThisFrame(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectsHitThisFrame = value;
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_HorizontalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_HorizontalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_HorizontalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalAxis = value;
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_VerticalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_VerticalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_VerticalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalAxis = value;
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_SubmitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_SubmitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_SubmitButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubmitButton = value;
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_CancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_CancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_CancelButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CancelButton = value;
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_InputActionsPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_InputActionsPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_InputActionsPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputActionsPerSecond = value;
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_AllowActivationOnMobileDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowActivationOnMobileDevice;
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_AllowActivationOnMobileDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowActivationOnMobileDevice;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_AllowActivationOnMobileDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowActivationOnMobileDevice = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>*&
UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_VRRayPointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VRRayPointerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>* const&
UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_VRRayPointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VRRayPointerData;
}
constexpr void
UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_VRRayPointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::OVRPointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VRRayPointerData = value;
}
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState*& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_MouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState* const& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get_m_MouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set_m_MouseState(::UnityEngine::EventSystems::PointerInputModule_MouseState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseState = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>*& UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get__trackedInputSources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedInputSources;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>* const&
UnityEngine::EventSystems::OVRInputModule::__cordl_internal_get__trackedInputSources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedInputSources;
}
constexpr void
UnityEngine::EventSystems::OVRInputModule::__cordl_internal_set__trackedInputSources(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackedInputSources = value;
}
inline void UnityEngine::EventSystems::OVRInputModule::setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::EventSystems::OVRInputModule> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::EventSystems::OVRInputModule>, "<instance>k__BackingField", ::UnityEngine::EventSystems::OVRInputModule*>(
      std::forward<::UnityW<::UnityEngine::EventSystems::OVRInputModule>>(value));
}
inline ::UnityW<::UnityEngine::EventSystems::OVRInputModule> UnityEngine::EventSystems::OVRInputModule::getStaticF__instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::EventSystems::OVRInputModule>, "<instance>k__BackingField", ::UnityEngine::EventSystems::OVRInputModule*>();
}
inline void UnityEngine::EventSystems::OVRInputModule::setStaticF__pendingInputSources(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>*, "_pendingInputSources",
                                    ::UnityEngine::EventSystems::OVRInputModule*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>* UnityEngine::EventSystems::OVRInputModule::getStaticF__pendingInputSources() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::OVRInputModule_InputSource*>*, "_pendingInputSources",
                                           ::UnityEngine::EventSystems::OVRInputModule*>();
}
inline void UnityEngine::EventSystems::OVRInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::OVRInputModule_InputMode UnityEngine::EventSystems::OVRInputModule::get_inputMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_inputMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::OVRInputModule_InputMode>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::get_allowActivationOnMobileDevice() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_allowActivationOnMobileDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_allowActivationOnMobileDevice(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_allowActivationOnMobileDevice", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::OVRInputModule::get_inputActionsPerSecond() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_inputActionsPerSecond", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_inputActionsPerSecond(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_inputActionsPerSecond", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_horizontalAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_horizontalAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_horizontalAxis(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_horizontalAxis", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_verticalAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_verticalAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_verticalAxis(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_verticalAxis", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_submitButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_submitButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_submitButton(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_submitButton", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_cancelButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_cancelButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_cancelButton(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_cancelButton", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::EventSystems::OVRInputModule::UpdateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::IsModuleSupported() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::ShouldActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::ActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::DeactivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::SendSubmitEventToSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "SendSubmitEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::AllowMoveEventProcessing(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "AllowMoveEventProcessing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRInputModule::GetRawMoveVector() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetRawMoveVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::SendMoveEventToSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "SendMoveEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::SendUpdateEventToSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "SendUpdateEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::ProcessMousePress(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                           { "ProcessMousePress", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::EventSystems::OVRInputModule::ProcessMouseEvent(::UnityEngine::EventSystems::PointerInputModule_MouseState* mouseData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                           { "ProcessMouseEvent", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mouseData);
}
inline void UnityEngine::EventSystems::OVRInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::UseMouse(bool pressed, bool released, ::UnityEngine::EventSystems::PointerEventData* pointerData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                           { "UseMouse", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pressed, released, pointerData);
}
inline void UnityEngine::EventSystems::OVRInputModule::CopyFromTo(::UnityEngine::EventSystems::OVRPointerEventData* from, ::UnityEngine::EventSystems::OVRPointerEventData* to) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                          { "CopyFromTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRPointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::OVRPointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline void UnityEngine::EventSystems::OVRInputModule::CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                       { "CopyFromTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline bool UnityEngine::EventSystems::OVRInputModule::GetPointerData(int32_t id, ::by_ref<::UnityEngine::EventSystems::OVRPointerEventData*> data, bool create) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                          { "GetPointerData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::OVRPointerEventData*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, data, create);
}
inline void UnityEngine::EventSystems::OVRInputModule::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "ClearSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::EventSystems::OVRInputModule::GetRectTransformNormal(::UnityEngine::RectTransform* rectTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetRectTransformNormal", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, rectTransform);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState*
UnityEngine::EventSystems::OVRInputModule::GetMouseStateFromInputSource(::UnityEngine::EventSystems::OVRInputModule_InputSource* inputSource, int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(this, ___internal_method, inputSource, id);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine::EventSystems::OVRInputModule::GetMouseStateFromRaycast(::UnityEngine::Transform* rayOrigin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(this, ___internal_method, rayOrigin);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine::EventSystems::OVRInputModule::GetCanvasPointerData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetCanvasPointerData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::ShouldStartDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                                                         { "ShouldStartDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerEvent);
}
inline bool UnityEngine::EventSystems::OVRInputModule::IsPointerMoving(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                                                         { "IsPointerMoving", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerEvent);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRInputModule::SwipeAdjustedPosition(::UnityEngine::Vector2 originalPosition, ::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                              { "SwipeAdjustedPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, originalPosition, pointerEvent);
}
inline void UnityEngine::EventSystems::OVRInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline ::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine::EventSystems::OVRInputModule::GetGazeButtonState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_FramePressState>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRInputModule::GetExtraScrollDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "GetExtraScrollDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::TrackInputSource(::UnityEngine::EventSystems::OVRInputModule_InputSource* hand) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                                                         { "TrackInputSource", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hand);
}
inline void UnityEngine::EventSystems::OVRInputModule::UntrackInputSource(::UnityEngine::EventSystems::OVRInputModule_InputSource* hand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(),
                                                           { "UntrackInputSource", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRInputModule_InputSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hand);
}
inline void UnityEngine::EventSystems::OVRInputModule::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::EventSystems::OVRInputModule> UnityEngine::EventSystems::OVRInputModule::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::OVRInputModule>>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_instance(::UnityEngine::EventSystems::OVRInputModule* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::OVRInputModule*>(), { "set_instance", {}, { ::i2c::type_of<::UnityEngine::EventSystems::OVRInputModule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::OVRInputModule* UnityEngine::EventSystems::OVRInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::OVRInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::OVRInputModule::OVRInputModule() {}
