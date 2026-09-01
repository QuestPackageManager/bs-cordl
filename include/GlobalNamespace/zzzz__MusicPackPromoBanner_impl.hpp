#pragma once
// IWYU pragma private; include "GlobalNamespace\MusicPackPromoBanner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_promoInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DlcPromoPanelModel_PromoInfo* (::GlobalNamespace::MusicPackPromoBanner::*)()>(
    &::GlobalNamespace::MusicPackPromoBanner::get_promoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "get_promoInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.set_promoInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::MusicPackPromoBanner::set_promoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(),
                                                                                           { "set_promoInfo", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_promoButtonText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::get_promoButtonText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "get_promoButtonText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.StartLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::StartLoading)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a24f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "StartLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool)>(
    &::GlobalNamespace::MusicPackPromoBanner::Setup)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a24fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(),
                                                             { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a250f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__promoBannerGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerGo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__promoBannerGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerGo;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__promoBannerGo(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoBannerGo = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__loadingIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__loadingIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicator;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__loadingIndicator(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingIndicator = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__promoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__promoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoText;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__promoText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__goButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__goButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goButton;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__goButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goButton = value;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__promoInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfo_k__BackingField;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__promoInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfo_k__BackingField;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__promoInfo_k__BackingField(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoInfo_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& GlobalNamespace::MusicPackPromoBanner::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* GlobalNamespace::MusicPackPromoBanner::get_promoInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "get_promoInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPackPromoBanner::set_promoInfo(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "set_promoInfo", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MusicPackPromoBanner::get_promoButtonText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "get_promoButtonText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPackPromoBanner::StartLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { "StartLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPackPromoBanner::Setup(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* newPromoInfo, bool probablyOwned) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(),
                                                           { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPromoInfo, probablyOwned);
}
inline void GlobalNamespace::MusicPackPromoBanner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MusicPackPromoBanner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicPackPromoBanner* GlobalNamespace::MusicPackPromoBanner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicPackPromoBanner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicPackPromoBanner::MusicPackPromoBanner() {}
