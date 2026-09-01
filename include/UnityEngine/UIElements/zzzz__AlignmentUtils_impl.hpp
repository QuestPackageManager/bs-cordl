#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\AlignmentUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AlignmentUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::AlignmentUtils.RoundToPixelGrid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::AlignmentUtils::RoundToPixelGrid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c2e180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AlignmentUtils*>(),
                                                             { "RoundToPixelGrid", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AlignmentUtils.CeilToPixelGrid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::AlignmentUtils::CeilToPixelGrid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c2e19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AlignmentUtils*>(),
                                                             { "CeilToPixelGrid", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AlignmentUtils.RoundToPanelPixelSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::VisualElement*, float_t)>(&::UnityEngine::UIElements::AlignmentUtils::RoundToPanelPixelSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6c2e1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AlignmentUtils*>(),
                                                             { "RoundToPanelPixelSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::UIElements::AlignmentUtils::RoundToPixelGrid(float_t v, float_t pixelsPerPoint, float_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AlignmentUtils*>(),
                                                           { "RoundToPixelGrid", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v, pixelsPerPoint, offset);
}
inline float_t UnityEngine::UIElements::AlignmentUtils::CeilToPixelGrid(float_t v, float_t pixelsPerPoint, float_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AlignmentUtils*>(),
                                                           { "CeilToPixelGrid", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v, pixelsPerPoint, offset);
}
inline float_t UnityEngine::UIElements::AlignmentUtils::RoundToPanelPixelSize(::UnityEngine::UIElements::VisualElement* ve, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AlignmentUtils*>(),
                                                           { "RoundToPanelPixelSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ve, v);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AlignmentUtils::AlignmentUtils() {}
