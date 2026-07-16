#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/StandaloneInputModule.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__StandaloneInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__StandaloneInputModule_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::StandaloneInputModule_InputMode::StandaloneInputModule_InputMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::StandaloneInputModule_InputMode::StandaloneInputModule_InputMode() {}
constexpr ::UnityEngine::EventSystems::StandaloneInputModule_InputMode UnityEngine::EventSystems::StandaloneInputModule_InputMode::Mouse{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EventSystems::StandaloneInputModule_InputMode UnityEngine::EventSystems::StandaloneInputModule_InputMode::Buttons{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e1cb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_inputMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::StandaloneInputModule_InputMode (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_inputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_inputMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_allowActivationOnMobileDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_allowActivationOnMobileDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_allowActivationOnMobileDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_allowActivationOnMobileDevice", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_forceModuleActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_forceModuleActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_forceModuleActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_forceModuleActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_inputActionsPerSecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_inputActionsPerSecond", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_inputActionsPerSecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(float_t)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_inputActionsPerSecond", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_repeatDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_repeatDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_repeatDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(float_t)>(&::UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_repeatDelay", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_horizontalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_horizontalAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_horizontalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_horizontalAxis", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_verticalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_verticalAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_verticalAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_verticalAxis", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_submitButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_submitButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_submitButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_submitButton", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_cancelButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_cancelButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_cancelButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_cancelButton", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ShouldIgnoreEventsOnNoFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ShouldIgnoreEventsOnNoFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.UpdateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::UpdateModule)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e1ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ReleaseMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x6e1cd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(),
                                                { "ReleaseMouse", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ShouldActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6e1d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e1d370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.DeactivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::Process)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e1d478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessTouchEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e1d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ProcessTouchEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessTouchPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, bool, bool)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x6e1dcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(),
                                                { "ProcessTouchPress", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.SendSubmitEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6e1da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "SendSubmitEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.GetRawMoveVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e1e400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "GetRawMoveVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.SendMoveEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6e1d804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "SendMoveEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessMouseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1d7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ProcessMouseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ForceAutoSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1e7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessMouseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(int32_t)>(&::UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6e1e514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ProcessMouseEvent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.SendUpdateEventToSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e1d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "SendUpdateEventToSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessMousePress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6e1e7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(),
                                                             { "ProcessMousePress", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.GetCurrentFocusedGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1eba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "GetCurrentFocusedGameObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_PrevActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr float_t const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_PrevActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_PrevActionTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevActionTime = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_LastMoveVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMoveVector;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_LastMoveVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMoveVector;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMoveVector = value;
}
constexpr int32_t& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_ConsecutiveMoveCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_ConsecutiveMoveCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_ConsecutiveMoveCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConsecutiveMoveCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_LastMousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_LastMousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePosition;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMousePosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_MousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_MousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MousePosition = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_CurrentFocusedGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFocusedGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_CurrentFocusedGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFocusedGameObject;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_CurrentFocusedGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFocusedGameObject = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_InputPointerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputPointerEvent;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_InputPointerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputPointerEvent;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputPointerEvent = value;
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_HorizontalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_HorizontalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_HorizontalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalAxis = value;
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_VerticalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_VerticalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_VerticalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalAxis = value;
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_SubmitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_SubmitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_SubmitButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubmitButton = value;
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_CancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_CancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_CancelButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CancelButton = value;
}
constexpr float_t& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_InputActionsPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr float_t const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_InputActionsPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_InputActionsPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputActionsPerSecond = value;
}
constexpr float_t& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_RepeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatDelay;
}
constexpr float_t const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_RepeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatDelay;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_RepeatDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RepeatDelay = value;
}
constexpr bool& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_ForceModuleActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceModuleActive;
}
constexpr bool const& UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_get_m_ForceModuleActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceModuleActive;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__cordl_internal_set_m_ForceModuleActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceModuleActive = value;
}
inline void UnityEngine::EventSystems::StandaloneInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::StandaloneInputModule_InputMode UnityEngine::EventSystems::StandaloneInputModule::get_inputMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_inputMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::StandaloneInputModule_InputMode>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_allowActivationOnMobileDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_allowActivationOnMobileDevice", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_forceModuleActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_forceModuleActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_inputActionsPerSecond", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_inputActionsPerSecond", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_repeatDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_repeatDelay", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_horizontalAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_horizontalAxis", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_verticalAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_verticalAxis", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_submitButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_submitButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_submitButton(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_submitButton", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "get_cancelButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "set_cancelButton", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ShouldIgnoreEventsOnNoFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::UpdateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse(::UnityEngine::EventSystems::PointerEventData* pointerEvent, ::UnityEngine::GameObject* currentOverGo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(),
                                              { "ReleaseMouse", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent, currentOverGo);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ProcessTouchEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(),
                                              { "ProcessTouchPress", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent, pressed, released);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "SendSubmitEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "GetRawMoveVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "SendMoveEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ProcessMouseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "ProcessMouseEvent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "SendUpdateEventToSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(),
                                                           { "ProcessMousePress", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::StandaloneInputModule*>(), { "GetCurrentFocusedGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::StandaloneInputModule* UnityEngine::EventSystems::StandaloneInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::StandaloneInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::StandaloneInputModule::StandaloneInputModule() {}
