#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierToggle_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "HMUI/zzzz__HoverTextSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle.get_toggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Toggle* (::GlobalNamespace::GameplayModifierToggle::*)()>(
    &::GlobalNamespace::GameplayModifierToggle::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(), "get_toggle",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle.get_gameplayModifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifierParamsSO* (::GlobalNamespace::GameplayModifierToggle::*)()>(
    &::GlobalNamespace::GameplayModifierToggle::get_gameplayModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(),
                                                                               "get_gameplayModifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifierToggle::*)()>(&::GlobalNamespace::GameplayModifierToggle::Start)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x229e1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifierToggle::*)()>(&::GlobalNamespace::GameplayModifierToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifierParamsSO*& GlobalNamespace::GameplayModifierToggle::__get__gameplayModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifier;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& GlobalNamespace::GameplayModifierToggle::__get__gameplayModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifier;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__gameplayModifier(::GlobalNamespace::GameplayModifierParamsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::GameplayModifierToggle::__get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::GameplayModifierToggle::__get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__nameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::GameplayModifierToggle::__get__multiplierText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::GameplayModifierToggle::__get__multiplierText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierText;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__multiplierText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplierText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::HoverTextSetter*& GlobalNamespace::GameplayModifierToggle::__get__hoverTextSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverTextSetter;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverTextSetter*> const& GlobalNamespace::GameplayModifierToggle::__get__hoverTextSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverTextSetter;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__hoverTextSetter(::HMUI::HoverTextSetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverTextSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::GameplayModifierToggle::__get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::GameplayModifierToggle::__get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__icon(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____icon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::GameplayModifierToggle::__get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::GameplayModifierToggle::__get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__toggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::GameplayModifierToggle::__get__positiveColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GameplayModifierToggle::__get__positiveColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveColor;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__positiveColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positiveColor = value;
}
inline ::UnityEngine::UI::Toggle* GlobalNamespace::GameplayModifierToggle::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(), "get_toggle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Toggle*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifierParamsSO* GlobalNamespace::GameplayModifierToggle::get_gameplayModifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(),
                                                                             "get_gameplayModifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifierParamsSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifierToggle::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifierToggle* GlobalNamespace::GameplayModifierToggle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayModifierToggle*>());
}
inline void GlobalNamespace::GameplayModifierToggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifierToggle*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierToggle::GameplayModifierToggle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
