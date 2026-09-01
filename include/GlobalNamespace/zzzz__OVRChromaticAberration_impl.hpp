#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRChromaticAberration.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRChromaticAberration_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRChromaticAberration.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRChromaticAberration::*)()>(&::GlobalNamespace::OVRChromaticAberration::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ef1aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRChromaticAberration*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRChromaticAberration.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRChromaticAberration::*)()>(&::GlobalNamespace::OVRChromaticAberration::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ef1b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRChromaticAberration*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRChromaticAberration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRChromaticAberration::*)()>(&::GlobalNamespace::OVRChromaticAberration::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef1c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRChromaticAberration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRChromaticAberration::__cordl_internal_get_toggleButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleButton;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRChromaticAberration::__cordl_internal_get_toggleButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggleButton;
}
constexpr void GlobalNamespace::OVRChromaticAberration::__cordl_internal_set_toggleButton(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toggleButton = value;
}
constexpr bool& GlobalNamespace::OVRChromaticAberration::__cordl_internal_get_chromatic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromatic;
}
constexpr bool const& GlobalNamespace::OVRChromaticAberration::__cordl_internal_get_chromatic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromatic;
}
constexpr void GlobalNamespace::OVRChromaticAberration::__cordl_internal_set_chromatic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromatic = value;
}
inline void GlobalNamespace::OVRChromaticAberration::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRChromaticAberration*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRChromaticAberration::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRChromaticAberration*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRChromaticAberration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRChromaticAberration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRChromaticAberration* GlobalNamespace::OVRChromaticAberration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRChromaticAberration*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRChromaticAberration::OVRChromaticAberration() {}
