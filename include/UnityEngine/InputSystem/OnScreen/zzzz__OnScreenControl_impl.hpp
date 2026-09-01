#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\OnScreen\OnScreenControl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo.AddControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo (
    ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::AddControl)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x659d344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(),
                                                                                           { "AddControl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo.RemoveControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo (
    ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::RemoveControl)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x659d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(),
                                                                                           { "RemoveControl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::Destroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x659d290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo
UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(),
                                                                                         { "AddControl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(*this, ___internal_method, control);
}
inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo
UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(),
                                                                                         { "RemoveControl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(*this, ___internal_method, control);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "firstControl", ty: "::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::OnScreenControl_OnScreenDeviceInfo(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::Unity::Collections::NativeArray_1<uint8_t> buffer, ::UnityEngine::InputSystem::InputDevice* device,
    ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> firstControl) noexcept {
  this->eventPtr = eventPtr;
  this->buffer = buffer;
  this->device = device;
  this->firstControl = firstControl;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo::OnScreenControl_OnScreenDeviceInfo() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_controlPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x659cab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "get_controlPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.set_controlPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659cac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "set_controlPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659d288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_controlPathInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.set_controlPathInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.SetupInputControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x659cafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "SetupInputControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.SentDefaultValueToControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::SentDefaultValueToControl)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x659d36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "SentDefaultValueToControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.get_HasAnyActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenControl::get_HasAnyActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659d49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "get_HasAnyActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x659d4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x659d794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl.GetWarningMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenControl::GetWarningMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x659dab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "GetWarningMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x659cab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_get_m_Control() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Control;
}
constexpr ::UnityEngine::InputSystem::InputControl* const& UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_get_m_Control() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Control;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_set_m_Control(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Control = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>& UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_get_m_NextControlOnDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextControlOnDevice;
}
constexpr ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> const& UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_get_m_NextControlOnDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextControlOnDevice;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_set_m_NextControlOnDevice(::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextControlOnDevice = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_get_m_InputEventPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputEventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_get_m_InputEventPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputEventPtr;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenControl::__cordl_internal_set_m_InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputEventPtr = value;
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::setStaticF_s_nbActiveInstances(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_nbActiveInstances", ::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::OnScreen::OnScreenControl::getStaticF_s_nbActiveInstances() {
  return ::cordl_internals::getStaticField<int32_t, "s_nbActiveInstances", ::UnityEngine::InputSystem::OnScreen::OnScreenControl*>();
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::setStaticF_s_OnScreenDevices(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo> value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>, "s_OnScreenDevices",
                                    ::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(
      std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>
UnityEngine::InputSystem::OnScreen::OnScreenControl::getStaticF_s_OnScreenDevices() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>, "s_OnScreenDevices",
                                           ::UnityEngine::InputSystem::OnScreen::OnScreenControl*>();
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "get_controlPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "set_controlPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "SetupInputControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::SendValueToControl(TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(),
                                                                                              { "SendValueToControl", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::SentDefaultValueToControl() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "SentDefaultValueToControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::OnScreen::OnScreenControl::get_HasAnyActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "get_HasAnyActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenControl::GetWarningMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { "GetWarningMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl* UnityEngine::InputSystem::OnScreen::OnScreenControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenControl() {}
