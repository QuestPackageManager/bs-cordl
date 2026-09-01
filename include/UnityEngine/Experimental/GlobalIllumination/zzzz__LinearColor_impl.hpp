#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\GlobalIllumination\LinearColor.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.get_red
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Experimental::GlobalIllumination::LinearColor::*)()>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::get_red)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2ec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "get_red", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.set_red
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::LinearColor::*)(float_t)>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::set_red)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b2ec2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "set_red", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.get_green
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Experimental::GlobalIllumination::LinearColor::*)()>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::get_green)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2ecd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "get_green", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.set_green
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::LinearColor::*)(float_t)>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::set_green)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b2ece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "set_green", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.get_blue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Experimental::GlobalIllumination::LinearColor::*)()>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::get_blue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2ed8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "get_blue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.set_blue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::GlobalIllumination::LinearColor::*)(float_t)>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::set_blue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b2ed94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "set_blue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LinearColor (*)(::UnityEngine::Color, float_t)>(
    &::UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x6b2ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(),
                                                                                           { "Convert", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::LinearColor.Black
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LinearColor (*)()>(&::UnityEngine::Experimental::GlobalIllumination::LinearColor::Black)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b2f178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "Black", {}, {} })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Experimental::GlobalIllumination::LinearColor::get_red() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "get_red", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Experimental::GlobalIllumination::LinearColor::set_red(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "set_red", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::GlobalIllumination::LinearColor::get_green() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "get_green", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Experimental::GlobalIllumination::LinearColor::set_green(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "set_green", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Experimental::GlobalIllumination::LinearColor::get_blue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "get_blue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Experimental::GlobalIllumination::LinearColor::set_blue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "set_blue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert(::UnityEngine::Color color, float_t intensity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(),
                                                                                         { "Convert", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(nullptr, ___internal_method, color, intensity);
}
inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor UnityEngine::Experimental::GlobalIllumination::LinearColor::Black() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(), { "Black", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::LinearColor>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_red", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_green", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_blue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_intensity", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor::LinearColor(float_t m_red, float_t m_green, float_t m_blue, float_t m_intensity) noexcept {
  this->m_red = m_red;
  this->m_green = m_green;
  this->m_blue = m_blue;
  this->m_intensity = m_intensity;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor::LinearColor() {}
