#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\LowLevel\GlyphAnchorPoint.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAnchorPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint.get_xCoordinate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)()>(&::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_xCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "get_xCoordinate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint.set_xCoordinate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)(float_t)>(&::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::set_xCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "set_xCoordinate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint.get_yCoordinate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)()>(&::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_yCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "get_yCoordinate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint.set_yCoordinate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)(float_t)>(&::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::set_yCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc0bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "set_yCoordinate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_xCoordinate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "get_xCoordinate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::set_xCoordinate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "set_xCoordinate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_yCoordinate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "get_yCoordinate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::set_yCoordinate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint>(), { "set_yCoordinate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_XCoordinate", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_YCoordinate", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::GlyphAnchorPoint(float_t m_XCoordinate, float_t m_YCoordinate) noexcept {
  this->m_XCoordinate = m_XCoordinate;
  this->m_YCoordinate = m_YCoordinate;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::GlyphAnchorPoint() {}
