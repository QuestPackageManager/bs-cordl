#pragma once
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::__MultiplayerScoreDiffText__HorizontalPosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::__MultiplayerScoreDiffText__HorizontalPosition() {}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::Left{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::Right{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State::__MultiplayerScoreDiffText__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State::__MultiplayerScoreDiffText__State() {}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State GlobalNamespace::__MultiplayerScoreDiffText__State::Hidden{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State GlobalNamespace::__MultiplayerScoreDiffText__State::Displayed{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State GlobalNamespace::__MultiplayerScoreDiffText__State::AnimatingDisplay{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State GlobalNamespace::__MultiplayerScoreDiffText__State::AnimatingHide{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::Start)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x23d6fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23d7140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.SetHorizontalPositionRelativeToLocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(
    ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition)>(&::GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23d7250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "SetHorizontalPositionRelativeToLocalPlayer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateScoreDiff
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23d7328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateScoreDiff",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateHide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::AnimateHide)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23d74d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                               "AnimateHide", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateIsLeadPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(bool)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23d75c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateIsLeadPlayer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.HandleNewLeaderWasSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23d761c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "HandleNewLeaderWasSelected",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23d76dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._Start_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(float_t)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::_Start_b__14_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23d76fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "<Start>b__14_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._AnimateScoreDiff_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(
    &::GlobalNamespace::MultiplayerScoreDiffText::_AnimateScoreDiff_b__17_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d7758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                               "<AnimateScoreDiff>b__17_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._AnimateHide_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(
    &::GlobalNamespace::MultiplayerScoreDiffText::_AnimateHide_b__18_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23d7764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                               "<AnimateHide>b__18_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__activeTextColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__activeTextColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTextColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__activeTextColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__normalBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__normalBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__normalBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__leadingBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__leadingBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__leadingBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingBackgroundColor = value;
}
constexpr bool& GlobalNamespace::MultiplayerScoreDiffText::__get__useAutomaticLeadPlayerSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAutomaticLeadPlayerSelection;
}
constexpr bool const& GlobalNamespace::MultiplayerScoreDiffText::__get__useAutomaticLeadPlayerSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAutomaticLeadPlayerSelection;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__useAutomaticLeadPlayerSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAutomaticLeadPlayerSelection = value;
}
constexpr ::TMPro::TextMeshPro*& GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformText;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__onPlatformText(::TMPro::TextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPlatformText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SpriteRenderer*& GlobalNamespace::MultiplayerScoreDiffText::__get__backgroundSpriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSpriteRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& GlobalNamespace::MultiplayerScoreDiffText::__get__backgroundSpriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSpriteRenderer;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__backgroundSpriteRenderer(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundSpriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::MultiplayerScoreDiffText::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::MultiplayerScoreDiffText::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerScoreDiffText::__get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerScoreDiffText::__get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider*& GlobalNamespace::MultiplayerScoreDiffText::__get__leadPlayerProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLeadPlayerProvider*> const& GlobalNamespace::MultiplayerScoreDiffText::__get__leadPlayerProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leadPlayerProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__currentBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__currentBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__currentBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentBackgroundColor = value;
}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State& GlobalNamespace::MultiplayerScoreDiffText::__get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State const& GlobalNamespace::MultiplayerScoreDiffText::__get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__state(::GlobalNamespace::__MultiplayerScoreDiffText__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformTextAlphaTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformTextAlphaTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformTextAlphaTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformTextAlphaTween;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__onPlatformTextAlphaTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPlatformTextAlphaTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerScoreDiffText::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition relativePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "SetHorizontalPositionRelativeToLocalPlayer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relativePosition);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff(int32_t scoreDiff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateScoreDiff",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scoreDiff);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateHide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateHide",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer(bool isLeader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateIsLeadPlayer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLeader);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "HandleNewLeaderWasSelected",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::MultiplayerScoreDiffText* GlobalNamespace::MultiplayerScoreDiffText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerScoreDiffText*>());
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_Start_b__14_0(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "<Start>b__14_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_AnimateScoreDiff_b__17_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                             "<AnimateScoreDiff>b__17_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_AnimateHide_b__18_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                             "<AnimateHide>b__18_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreDiffText::MultiplayerScoreDiffText() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
