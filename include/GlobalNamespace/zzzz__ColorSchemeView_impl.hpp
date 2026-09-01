#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSchemeView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeView_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeView.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeView::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color,
                                                                                                    ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::ColorSchemeView::SetColors)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x592098c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeView*>(),
                            { "SetColors",
                              {},
                              { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeView::*)()>(&::GlobalNamespace::ColorSchemeView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5920bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__saberAColorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberAColorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__saberAColorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberAColorImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__saberAColorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberAColorImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__saberBColorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBColorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__saberBColorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBColorImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__saberBColorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBColorImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environment0ColorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment0ColorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environment0ColorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment0ColorImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__environment0ColorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environment0ColorImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environment1ColorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment1ColorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environment1ColorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment1ColorImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__environment1ColorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environment1ColorImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environmentColor0BoostImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor0BoostImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environmentColor0BoostImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor0BoostImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__environmentColor0BoostImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColor0BoostImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environmentColor1BoostImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor1BoostImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__environmentColor1BoostImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor1BoostImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__environmentColor1BoostImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColor1BoostImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorSchemeView::__cordl_internal_get__obstacleColorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleColorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorSchemeView::__cordl_internal_get__obstacleColorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleColorImage;
}
constexpr void GlobalNamespace::ColorSchemeView::__cordl_internal_set__obstacleColorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleColorImage = value;
}
inline void GlobalNamespace::ColorSchemeView::SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color,
                                                        ::UnityEngine::Color environment1Color, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost,
                                                        ::UnityEngine::Color obstacleColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeView*>(),
                          { "SetColors",
                            {},
                            { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                              ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberAColor, saberBColor, environment0Color, environment1Color, environmentColor0Boost, environmentColor1Boost,
                                                   obstacleColor);
}
inline void GlobalNamespace::ColorSchemeView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemeView* GlobalNamespace::ColorSchemeView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeView::ColorSchemeView() {}
