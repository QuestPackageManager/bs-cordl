#pragma once
// IWYU pragma private; include "GlobalNamespace/EasedFloat.hpp"
#include "GlobalNamespace/zzzz__EasedFloat_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EasedFloat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EasedFloat::*)(float_t)>(&::GlobalNamespace::EasedFloat::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35acb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EasedFloat.get_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::EasedFloat::*)()>(&::GlobalNamespace::EasedFloat::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35acb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "get_target", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EasedFloat.set_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EasedFloat::*)(float_t)>(&::GlobalNamespace::EasedFloat::set_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35acb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "set_target", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EasedFloat.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::EasedFloat::*)()>(&::GlobalNamespace::EasedFloat::get_current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35acb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EasedFloat.SnapTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EasedFloat::*)(float_t)>(&::GlobalNamespace::EasedFloat::SnapTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35acb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "SnapTo", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EasedFloat.TryStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EasedFloat::*)(float_t)>(&::GlobalNamespace::EasedFloat::TryStep)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x35acb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "TryStep", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EasedFloat::_ctor(float_t durationSec) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, durationSec);
}
inline float_t GlobalNamespace::EasedFloat::get_target() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "get_target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::EasedFloat::set_target(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "set_target", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::EasedFloat::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::EasedFloat::SnapTo(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "SnapTo", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::EasedFloat::TryStep(float_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EasedFloat>(), { "TryStep", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime);
}
// Ctor Parameters [CppParam { name: "_decay", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_current", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "_target", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EasedFloat::EasedFloat(float_t _decay, float_t _current, float_t _target) noexcept {
  this->_decay = _decay;
  this->_current = _current;
  this->_target = _target;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EasedFloat::EasedFloat() {}
