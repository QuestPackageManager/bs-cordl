#pragma once
// IWYU pragma private; include "UnityEngine/Resolution.hpp"
#include "UnityEngine/zzzz__RefreshRate_impl.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
#include "UnityEngine/zzzz__RefreshRate_def.hpp"
//  Writing Method size for method: ::UnityEngine::Resolution.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Resolution::*)()>(&::UnityEngine::Resolution::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a869cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resolution.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Resolution::*)()>(&::UnityEngine::Resolution::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a869d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resolution.get_refreshRateRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RefreshRate (::UnityEngine::Resolution::*)()>(&::UnityEngine::Resolution::get_refreshRateRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a869dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { "get_refreshRateRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resolution.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Resolution::*)()>(&::UnityEngine::Resolution::ToString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a869e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { ::i2c::class_of<::UnityEngine::Resolution>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Resolution::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Resolution::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::RefreshRate UnityEngine::Resolution::get_refreshRateRatio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Resolution>(), { "get_refreshRateRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RefreshRate>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Resolution::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Resolution>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_RefreshRate", ty: "::UnityEngine::RefreshRate", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Resolution::Resolution(int32_t m_Width, int32_t m_Height, ::UnityEngine::RefreshRate m_RefreshRate) noexcept {
  this->m_Width = m_Width;
  this->m_Height = m_Height;
  this->m_RefreshRate = m_RefreshRate;
}
// Ctor Parameters []
constexpr ::UnityEngine::Resolution::Resolution() {}
