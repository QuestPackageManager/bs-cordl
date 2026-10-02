#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCachedMeasurement.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureMode_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCachedMeasurement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement.get_NextMeasurementCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement* (::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::get_NextMeasurementCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71987b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(), { "get_NextMeasurementCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::ToString)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x71987c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutCachedMeasurement::setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, "Default", ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement UnityEngine::UIElements::Layout::LayoutCachedMeasurement::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, "Default", ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>();
}
inline ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement* UnityEngine::UIElements::Layout::LayoutCachedMeasurement::get_NextMeasurementCache() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(), { "get_NextMeasurementCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement*>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::Layout::LayoutCachedMeasurement::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AvailableWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AvailableHeight", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "ParentWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParentHeight", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WidthMeasureMode", ty: "::UnityEngine::UIElements::Layout::LayoutMeasureMode", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "HeightMeasureMode", ty: "::UnityEngine::UIElements::Layout::LayoutMeasureMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "ComputedWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComputedHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_NextMeasurementCachePtr", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::LayoutCachedMeasurement(float_t AvailableWidth, float_t AvailableHeight, float_t ParentWidth, float_t ParentHeight,
                                                                                              ::UnityEngine::UIElements::Layout::LayoutMeasureMode WidthMeasureMode,
                                                                                              ::UnityEngine::UIElements::Layout::LayoutMeasureMode HeightMeasureMode, float_t ComputedWidth,
                                                                                              float_t ComputedHeight, void* m_NextMeasurementCachePtr) noexcept {
  this->AvailableWidth = AvailableWidth;
  this->AvailableHeight = AvailableHeight;
  this->ParentWidth = ParentWidth;
  this->ParentHeight = ParentHeight;
  this->WidthMeasureMode = WidthMeasureMode;
  this->HeightMeasureMode = HeightMeasureMode;
  this->ComputedWidth = ComputedWidth;
  this->ComputedHeight = ComputedHeight;
  this->m_NextMeasurementCachePtr = m_NextMeasurementCachePtr;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::LayoutCachedMeasurement() {}
