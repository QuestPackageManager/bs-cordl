#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRModeParms.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRModeParms_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRModeParms.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRModeParms::*)()>(&::GlobalNamespace::OVRModeParms::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f04b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRModeParms.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRModeParms::*)()>(&::GlobalNamespace::OVRModeParms::Update)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f04bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRModeParms.TestPowerStateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRModeParms::*)()>(&::GlobalNamespace::OVRModeParms::TestPowerStateMode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f04cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { "TestPowerStateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRModeParms._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRModeParms::*)()>(&::GlobalNamespace::OVRModeParms::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f04d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRModeParms::__cordl_internal_get_resetButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetButton;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRModeParms::__cordl_internal_get_resetButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetButton;
}
constexpr void GlobalNamespace::OVRModeParms::__cordl_internal_set_resetButton(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetButton = value;
}
inline void GlobalNamespace::OVRModeParms::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRModeParms::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRModeParms::TestPowerStateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { "TestPowerStateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRModeParms::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRModeParms*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRModeParms* GlobalNamespace::OVRModeParms::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRModeParms*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRModeParms::OVRModeParms() {}
