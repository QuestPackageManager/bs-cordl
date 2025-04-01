#pragma once
// IWYU pragma private; include "GlobalNamespace/TextFadeTransitions.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextFadeTransitions_State::TextFadeTransitions_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextFadeTransitions_State::TextFadeTransitions_State() {}
constexpr ::GlobalNamespace::TextFadeTransitions_State GlobalNamespace::TextFadeTransitions_State::NotInTransition{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TextFadeTransitions_State GlobalNamespace::TextFadeTransitions_State::FadingOut{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::TextFadeTransitions_State GlobalNamespace::TextFadeTransitions_State::FadingIn{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::TextFadeTransitions.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextFadeTransitions::*)()>(&::GlobalNamespace::TextFadeTransitions::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3bebde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFadeTransitions.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextFadeTransitions::*)()>(&::GlobalNamespace::TextFadeTransitions::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bebf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFadeTransitions.RefreshState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextFadeTransitions::*)()>(&::GlobalNamespace::TextFadeTransitions::RefreshState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3bebf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "RefreshState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFadeTransitions.RefreshTextAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextFadeTransitions::*)()>(&::GlobalNamespace::TextFadeTransitions::RefreshTextAlpha)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3bebe5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(),
                                                                               "RefreshTextAlpha", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFadeTransitions.ShowText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextFadeTransitions::*)(::StringW, float_t)>(
    &::GlobalNamespace::TextFadeTransitions::ShowText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3be3558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "ShowText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFadeTransitions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextFadeTransitions::*)()>(&::GlobalNamespace::TextFadeTransitions::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3bec050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__textLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textLabel;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__textLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textLabel;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__textLabel(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__fadeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeDuration;
}
constexpr float_t const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__fadeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeDuration;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__fadeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeDuration = value;
}
constexpr ::GlobalNamespace::TextFadeTransitions_State& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::TextFadeTransitions_State const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__state(::GlobalNamespace::TextFadeTransitions_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::StringW& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__nextText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextText;
}
constexpr ::StringW const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__nextText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextText;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__nextText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__fade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fade;
}
constexpr float_t const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__fade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fade;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__fade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fade = value;
}
constexpr float_t& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr float_t const& GlobalNamespace::TextFadeTransitions::__cordl_internal_get__delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr void GlobalNamespace::TextFadeTransitions::__cordl_internal_set__delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delay = value;
}
inline void GlobalNamespace::TextFadeTransitions::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextFadeTransitions::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextFadeTransitions::RefreshState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "RefreshState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextFadeTransitions::RefreshTextAlpha() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "RefreshTextAlpha",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextFadeTransitions::ShowText(::StringW text, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), "ShowText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, delay);
}
inline void GlobalNamespace::TextFadeTransitions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextFadeTransitions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextFadeTransitions* GlobalNamespace::TextFadeTransitions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextFadeTransitions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextFadeTransitions::TextFadeTransitions() {}
