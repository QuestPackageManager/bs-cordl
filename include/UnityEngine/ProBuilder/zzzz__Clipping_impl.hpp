#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Clipping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode::Clipping_OutCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode::Clipping_OutCode() {}
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Inside{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Right{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Bottom{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Top{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.ComputeOutCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Clipping_OutCode (*)(::UnityEngine::Rect, float_t, float_t)>(&::UnityEngine::ProBuilder::Clipping::ComputeOutCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66b2d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Clipping*>(),
                                                             { "ComputeOutCode", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.RectContainsLineSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::Clipping::RectContainsLineSegment)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x66b2db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Clipping*>(),
            { "RectContainsLineSegment", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping::ComputeOutCode(::UnityEngine::Rect rect, float_t x, float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Clipping*>(),
                                                           { "ComputeOutCode", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Clipping_OutCode>(nullptr, ___internal_method, rect, x, y);
}
inline bool UnityEngine::ProBuilder::Clipping::RectContainsLineSegment(::UnityEngine::Rect rect, float_t x0, float_t y0, float_t x1, float_t y1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Clipping*>(),
          { "RectContainsLineSegment", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, x0, y0, x1, y1);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Clipping::Clipping() {}
