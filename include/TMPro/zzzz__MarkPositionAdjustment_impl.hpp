#pragma once
// IWYU pragma private; include "TMPro/MarkPositionAdjustment.hpp"
#include "TMPro/zzzz__MarkPositionAdjustment_def.hpp"
//  Writing Method size for method: ::TMPro::MarkPositionAdjustment.get_xPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::MarkPositionAdjustment::*)()>(&::TMPro::MarkPositionAdjustment::get_xPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6932090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "get_xPositionAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkPositionAdjustment.set_xPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkPositionAdjustment::*)(float_t)>(&::TMPro::MarkPositionAdjustment::set_xPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6932098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "set_xPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkPositionAdjustment.get_yPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::MarkPositionAdjustment::*)()>(&::TMPro::MarkPositionAdjustment::get_yPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69320a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "get_yPositionAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkPositionAdjustment.set_yPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkPositionAdjustment::*)(float_t)>(&::TMPro::MarkPositionAdjustment::set_yPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69320a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "set_yPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MarkPositionAdjustment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MarkPositionAdjustment::*)(float_t, float_t)>(&::TMPro::MarkPositionAdjustment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69320b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t TMPro::MarkPositionAdjustment::get_xPositionAdjustment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "get_xPositionAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void TMPro::MarkPositionAdjustment::set_xPositionAdjustment(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "set_xPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t TMPro::MarkPositionAdjustment::get_yPositionAdjustment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "get_yPositionAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void TMPro::MarkPositionAdjustment::set_yPositionAdjustment(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { "set_yPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void TMPro::MarkPositionAdjustment::_ctor(float_t x, float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MarkPositionAdjustment>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
// Ctor Parameters [CppParam { name: "m_XPositionAdjustment", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_YPositionAdjustment", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::MarkPositionAdjustment::MarkPositionAdjustment(float_t m_XPositionAdjustment, float_t m_YPositionAdjustment) noexcept {
  this->m_XPositionAdjustment = m_XPositionAdjustment;
  this->m_YPositionAdjustment = m_YPositionAdjustment;
}
// Ctor Parameters []
constexpr ::TMPro::MarkPositionAdjustment::MarkPositionAdjustment() {}
