#pragma once
// IWYU pragma private; include "VRUIControls/MouseButtonEventData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData.PressedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e3704c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseButtonEventData*>(), { "PressedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData.ReleasedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3705c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseButtonEventData*>(), { "ReleasedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e37070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseButtonEventData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr void VRUIControls::MouseButtonEventData::__cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonState = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr void VRUIControls::MouseButtonEventData::__cordl_internal_set_buttonData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonData = value;
}
inline bool VRUIControls::MouseButtonEventData::PressedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseButtonEventData*>(), { "PressedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool VRUIControls::MouseButtonEventData::ReleasedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseButtonEventData*>(), { "ReleasedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VRUIControls::MouseButtonEventData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseButtonEventData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::MouseButtonEventData* VRUIControls::MouseButtonEventData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::MouseButtonEventData*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::MouseButtonEventData::MouseButtonEventData() {}
