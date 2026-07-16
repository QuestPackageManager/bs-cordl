#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/TouchSimulation.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchSimulation_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.get_simulatedTouchscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Touchscreen* (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::get_simulatedTouchscreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a4488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "get_simulatedTouchscreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.set_simulatedTouchscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(::UnityEngine::InputSystem::Touchscreen*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::set_simulatedTouchscreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a4490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                           { "set_simulatedTouchscreen", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation> (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::get_instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65a4498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::Enable)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x65a44e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::Disable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65a46a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::Destroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65a4788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.AddPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(::UnityEngine::InputSystem::Pointer*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::AddPointer)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x65a4860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                           { "AddPointer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Pointer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.RemovePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(::UnityEngine::InputSystem::Pointer*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::RemovePointer)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x65a49e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                           { "RemovePointer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Pointer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.OnEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnEvent)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x65a4e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                         { "OnEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.OnDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnDeviceChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x65a5408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                         { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnEnable)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x65a5558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnDisable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x65a5ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.UpdateTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(
    int32_t, int32_t, ::UnityEngine::InputSystem::TouchPhase, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UpdateTouch)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x65a4bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                             { "UpdateTouch",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(::UnityEngine::InputSystem::InputControl*, double_t,
                                                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                           { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                         { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.InstallStateChangeMonitors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(int32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::InstallStateChangeMonitors)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "InstallStateChangeMonitors", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.OnSourceControlChangedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(::UnityEngine::InputSystem::InputControl*, double_t,
                                                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnSourceControlChangedValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                           { "OnSourceControlChangedValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation.UninstallStateChangeMonitors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)(int32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UninstallStateChangeMonitors)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "UninstallStateChangeMonitors", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a5e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Touchscreen*& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get__simulatedTouchscreen_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simulatedTouchscreen_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Touchscreen* const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get__simulatedTouchscreen_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simulatedTouchscreen_k__BackingField;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set__simulatedTouchscreen_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simulatedTouchscreen_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_NumPointers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumPointers;
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_NumPointers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumPointers;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_NumPointers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumPointers = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Pointer*>& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_Pointers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pointers;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Pointer*> const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_Pointers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pointers;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_Pointers(::ArrayW<::UnityEngine::InputSystem::Pointer*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pointers = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_CurrentPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_CurrentPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPositions;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_CurrentPositions(::ArrayW<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPositions = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_CurrentDisplayIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentDisplayIndices;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_CurrentDisplayIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentDisplayIndices;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_CurrentDisplayIndices(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentDisplayIndices = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*>& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_Touches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Touches;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*> const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_Touches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Touches;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_Touches(::ArrayW<::UnityEngine::InputSystem::Controls::ButtonControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Touches = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_TouchIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchIds;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_TouchIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchIds;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_TouchIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchIds = value;
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_LastTouchId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTouchId;
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_LastTouchId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastTouchId;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_LastTouchId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastTouchId = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*&
UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_OnDeviceChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeviceChange;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* const&
UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_OnDeviceChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeviceChange;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_OnDeviceChange(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnDeviceChange = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*&
UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_OnEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnEvent;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* const&
UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_get_m_OnEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnEvent;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::__cordl_internal_set_m_OnEvent(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnEvent = value;
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::setStaticF_s_Instance(::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation>, "s_Instance", ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(
      std::forward<::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation>>(value));
}
inline ::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation> UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation>, "s_Instance", ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>();
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::get_simulatedTouchscreen() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "get_simulatedTouchscreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::set_simulatedTouchscreen(::UnityEngine::InputSystem::Touchscreen* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                         { "set_simulatedTouchscreen", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation> UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::AddPointer(::UnityEngine::InputSystem::Pointer* pointer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                         { "AddPointer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Pointer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::RemovePointer(::UnityEngine::InputSystem::Pointer* pointer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                         { "RemovePointer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Pointer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                       { "OnEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr, device);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                       { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UpdateTouch(int32_t touchIndex, int32_t pointerIndex, ::UnityEngine::InputSystem::TouchPhase phase,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                           { "UpdateTouch",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, touchIndex, pointerIndex, phase, eventPtr);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(
    ::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                         { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, monitorIndex);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                                   double_t time, int64_t monitorIndex,
                                                                                                                                                   int32_t timerIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                              { "UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, monitorIndex, timerIndex);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::InstallStateChangeMonitors(int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "InstallStateChangeMonitors", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startIndex);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::OnSourceControlChangedValue(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t sourceDeviceAndButtonIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(),
                                                                                         { "OnSourceControlChangedValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, sourceDeviceAndButtonIndex);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::UninstallStateChangeMonitors(int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { "UninstallStateChangeMonitors", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startIndex);
}
inline void UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*
UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation::TouchSimulation() {}
