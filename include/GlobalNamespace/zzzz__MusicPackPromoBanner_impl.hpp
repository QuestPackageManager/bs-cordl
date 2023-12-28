#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_currentPromoBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (::GlobalNamespace::MusicPackPromoBanner::*)()>(
    &::GlobalNamespace::MusicPackPromoBanner::get_currentPromoBeatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e77a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                                                                               "get_currentPromoBeatmapLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_currentPromoMusicPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (::GlobalNamespace::MusicPackPromoBanner::*)()>(
    &::GlobalNamespace::MusicPackPromoBanner::get_currentPromoMusicPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e77b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                                                                               "get_currentPromoMusicPack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_promoButtonText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MusicPackPromoBanner::*)()>(
    &::GlobalNamespace::MusicPackPromoBanner::get_promoButtonText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e77b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                                                                               "get_promoButtonText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, bool)>(&::GlobalNamespace::MusicPackPromoBanner::Setup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22e77c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e78d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::MusicPackPromoBanner::__get__promoBannerGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerGo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::MusicPackPromoBanner::__get__promoBannerGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerGo;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__promoBannerGo(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBannerGo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MusicPackPromoBanner::__get__promoBannerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MusicPackPromoBanner::__get__promoBannerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerTransform;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__promoBannerTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBannerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::MusicPackPromoBanner::__get__promoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::MusicPackPromoBanner::__get__promoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoText;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__promoText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::MusicPackPromoBanner::__get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::MusicPackPromoBanner::__get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__backgroundImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack*& GlobalNamespace::MusicPackPromoBanner::__get__currentPromoMusicPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPromoMusicPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& GlobalNamespace::MusicPackPromoBanner::__get__currentPromoMusicPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPromoMusicPack;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__currentPromoMusicPack(::GlobalNamespace::IBeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPromoMusicPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::MusicPackPromoBanner::__get__currentPromoBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPromoBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::MusicPackPromoBanner::__get__currentPromoBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPromoBeatmapLevel;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__currentPromoBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPromoBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MusicPackPromoBanner::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& GlobalNamespace::MusicPackPromoBanner::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::MusicPackPromoBanner::get_currentPromoBeatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                                                                             "get_currentPromoBeatmapLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::MusicPackPromoBanner::get_currentPromoMusicPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                                                                             "get_currentPromoMusicPack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPack*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MusicPackPromoBanner::get_promoButtonText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                                                                             "get_promoButtonText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPackPromoBanner::Setup(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* musicPackPromoData, bool probablyOwned) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, musicPackPromoData, probablyOwned);
}
inline ::GlobalNamespace::MusicPackPromoBanner* GlobalNamespace::MusicPackPromoBanner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MusicPackPromoBanner*>());
}
inline void GlobalNamespace::MusicPackPromoBanner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicPackPromoBanner::MusicPackPromoBanner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
