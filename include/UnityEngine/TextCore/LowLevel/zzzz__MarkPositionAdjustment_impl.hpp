#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\LowLevel\MarkPositionAdjustment.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkPositionAdjustment_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment.get_xPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::*)()>(
    &::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_xPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "get_xPositionAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment.set_xPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::*)(float_t)>(
    &::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::set_xPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "set_xPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment.get_yPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::*)()>(
    &::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_yPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "get_yPositionAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment.set_yPositionAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::*)(float_t)>(
    &::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::set_yPositionAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "set_yPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_xPositionAdjustment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "get_xPositionAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::set_xPositionAdjustment(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "set_xPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::get_yPositionAdjustment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "get_yPositionAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::set_yPositionAdjustment(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment>(), { "set_yPositionAdjustment", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_XPositionAdjustment", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_YPositionAdjustment", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::MarkPositionAdjustment(float_t m_XPositionAdjustment, float_t m_YPositionAdjustment) noexcept {
  this->m_XPositionAdjustment = m_XPositionAdjustment;
  this->m_YPositionAdjustment = m_YPositionAdjustment;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment::MarkPositionAdjustment() {}
