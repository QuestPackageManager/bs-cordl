#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyInfoView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.get_buyLevelButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(
    &::GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a4814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(),
                                                                               "get_buyLevelButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.get_openPackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(
    &::GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a481c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(),
                                                                               "get_openPackButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.get_buyPackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(
    &::GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a4824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(),
                                                                               "get_buyPackButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.RefreshView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelBuyInfoView::*)(::StringW, bool)>(
    &::GlobalNamespace::StandardLevelBuyInfoView::RefreshView)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21a482c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(), "RefreshView", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(&::GlobalNamespace::StandardLevelBuyInfoView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a48a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::StandardLevelBuyInfoView::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::StandardLevelBuyInfoView::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::StandardLevelBuyInfoView::__get__buyLevelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyLevelButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::StandardLevelBuyInfoView::__get__buyLevelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyLevelButton;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__set__buyLevelButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buyLevelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::StandardLevelBuyInfoView::__get__openPackButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openPackButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::StandardLevelBuyInfoView::__get__openPackButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openPackButton;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__set__openPackButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____openPackButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::StandardLevelBuyInfoView::__get__buyPackButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyPackButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::StandardLevelBuyInfoView::__get__buyPackButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyPackButton;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__set__buyPackButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buyPackButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(),
                                                                             "get_buyLevelButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(),
                                                                             "get_openPackButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(),
                                                                             "get_buyPackButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyInfoView::RefreshView(::StringW infoText, bool canBuyPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(), "RefreshView", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, infoText, canBuyPack);
}
inline ::GlobalNamespace::StandardLevelBuyInfoView* GlobalNamespace::StandardLevelBuyInfoView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelBuyInfoView*>());
}
inline void GlobalNamespace::StandardLevelBuyInfoView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyInfoView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelBuyInfoView::StandardLevelBuyInfoView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
