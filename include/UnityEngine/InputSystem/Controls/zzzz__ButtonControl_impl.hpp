#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Controls\ButtonControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_needsToCheckFramePress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_needsToCheckFramePress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64fa688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_needsToCheckFramePress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.set_needsToCheckFramePress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::ButtonControl::*)(bool)>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::set_needsToCheckFramePress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64fa690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "set_needsToCheckFramePress", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_pressPointOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64fa698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_pressPointOrDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::ButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f9d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.IsValueConsideredPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)(float_t)>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::IsValueConsideredPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64fa708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "IsValueConsideredPressed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_isPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::ButtonControl::get_isPressed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64fa778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_isPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.BeginTestingForFramePresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::ButtonControl::*)(bool, bool)>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::BeginTestingForFramePresses)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x64fa838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(),
                                                                                           { "BeginTestingForFramePresses", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_wasPressedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_wasPressedThisFrame)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x64fa934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_wasPressedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_wasReleasedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_wasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x64faaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_wasReleasedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.UpdateWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::ButtonControl::UpdateWasPressed)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64facbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "UpdateWasPressed", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_NeedsToCheckFramePress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsToCheckFramePress;
}
constexpr bool const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_NeedsToCheckFramePress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsToCheckFramePress;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set_m_NeedsToCheckFramePress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedsToCheckFramePress = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_UpdateCountLastPressed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateCountLastPressed;
}
constexpr uint32_t const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_UpdateCountLastPressed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateCountLastPressed;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set_m_UpdateCountLastPressed(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateCountLastPressed = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_UpdateCountLastReleased() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateCountLastReleased;
}
constexpr uint32_t const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_UpdateCountLastReleased() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateCountLastReleased;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set_m_UpdateCountLastReleased(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateCountLastReleased = value;
}
constexpr bool& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_LastUpdateWasPress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdateWasPress;
}
constexpr bool const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_m_LastUpdateWasPress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdateWasPress;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set_m_LastUpdateWasPress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastUpdateWasPress = value;
}
constexpr bool& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get__needsToCheckFramePress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsToCheckFramePress_k__BackingField;
}
constexpr bool const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get__needsToCheckFramePress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsToCheckFramePress_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set__needsToCheckFramePress_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____needsToCheckFramePress_k__BackingField = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_pressPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_pressPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set_pressPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pressPoint = value;
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::setStaticF_s_GlobalDefaultButtonPressPoint(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_GlobalDefaultButtonPressPoint", ::UnityEngine::InputSystem::Controls::ButtonControl*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Controls::ButtonControl::getStaticF_s_GlobalDefaultButtonPressPoint() {
  return ::cordl_internals::getStaticField<float_t, "s_GlobalDefaultButtonPressPoint", ::UnityEngine::InputSystem::Controls::ButtonControl*>();
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::setStaticF_s_GlobalDefaultButtonReleaseThreshold(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_GlobalDefaultButtonReleaseThreshold", ::UnityEngine::InputSystem::Controls::ButtonControl*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Controls::ButtonControl::getStaticF_s_GlobalDefaultButtonReleaseThreshold() {
  return ::cordl_internals::getStaticField<float_t, "s_GlobalDefaultButtonReleaseThreshold", ::UnityEngine::InputSystem::Controls::ButtonControl*>();
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_needsToCheckFramePress() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_needsToCheckFramePress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::set_needsToCheckFramePress(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "set_needsToCheckFramePress", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::Controls::ButtonControl::get_pressPointOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_pressPointOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::IsValueConsideredPressed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "IsValueConsideredPressed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_isPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_isPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::BeginTestingForFramePresses(bool currentlyPressed, bool pressedLastFrame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(),
                                                                                         { "BeginTestingForFramePresses", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentlyPressed, pressedLastFrame);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_wasPressedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_wasPressedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_wasReleasedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "get_wasReleasedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::UpdateWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::ButtonControl*>(), { "UpdateWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::ButtonControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::ButtonControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl::ButtonControl() {}
