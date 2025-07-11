#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreDiffText.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition::MultiplayerScoreDiffText_HorizontalPosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition::MultiplayerScoreDiffText_HorizontalPosition() {}
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition::Left{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition::Right{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State::MultiplayerScoreDiffText_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State::MultiplayerScoreDiffText_State() {}
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State GlobalNamespace::MultiplayerScoreDiffText_State::Hidden{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State GlobalNamespace::MultiplayerScoreDiffText_State::Displayed{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State GlobalNamespace::MultiplayerScoreDiffText_State::AnimatingDisplay{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State GlobalNamespace::MultiplayerScoreDiffText_State::AnimatingHide{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::Start)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3bba9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3bbab3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.SetHorizontalPositionRelativeToLocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(
    ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition)>(&::GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3bbac48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "SetHorizontalPositionRelativeToLocalPlayer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateScoreDiff
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3bbad20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateScoreDiff",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateHide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::AnimateHide)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3bbaed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                               "AnimateHide", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateIsLeadPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(bool)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3bbafc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateIsLeadPlayer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.HandleNewLeaderWasSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3bbb010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "HandleNewLeaderWasSelected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bbb0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._Start_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(float_t)>(
    &::GlobalNamespace::MultiplayerScoreDiffText::_Start_b__14_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3bbb0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "<Start>b__14_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._AnimateScoreDiff_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(
    &::GlobalNamespace::MultiplayerScoreDiffText::_AnimateScoreDiff_b__17_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3bbb148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                               "<AnimateScoreDiff>b__17_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._AnimateHide_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(
    &::GlobalNamespace::MultiplayerScoreDiffText::_AnimateHide_b__18_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3bbb154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                               "<AnimateHide>b__18_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__activeTextColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__activeTextColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTextColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__activeTextColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__normalBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__normalBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__normalBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__leadingBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__leadingBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__leadingBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingBackgroundColor = value;
}
constexpr bool& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__useAutomaticLeadPlayerSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAutomaticLeadPlayerSelection;
}
constexpr bool const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__useAutomaticLeadPlayerSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAutomaticLeadPlayerSelection;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__useAutomaticLeadPlayerSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAutomaticLeadPlayerSelection = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__onPlatformText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__onPlatformText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformText;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__onPlatformText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPlatformText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__backgroundSpriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSpriteRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__backgroundSpriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundSpriteRenderer;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__backgroundSpriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundSpriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider>& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__leadPlayerProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__leadPlayerProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__leadPlayerProvider(::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leadPlayerProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__currentBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__currentBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__currentBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentBackgroundColor = value;
}
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__state(::GlobalNamespace::MultiplayerScoreDiffText_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__onPlatformTextAlphaTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformTextAlphaTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_get__onPlatformTextAlphaTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPlatformTextAlphaTween;
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__cordl_internal_set__onPlatformTextAlphaTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPlatformTextAlphaTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerScoreDiffText::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer(::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition relativePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "SetHorizontalPositionRelativeToLocalPlayer",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relativePosition);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff(int32_t scoreDiff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateScoreDiff",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scoreDiff);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateHide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateHide",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer(bool isLeader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "AnimateIsLeadPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLeader);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "HandleNewLeaderWasSelected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_Start_b__14_0(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(), "<Start>b__14_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_AnimateScoreDiff_b__17_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                             "<AnimateScoreDiff>b__17_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_AnimateHide_b__18_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                                                                             "<AnimateHide>b__18_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerScoreDiffText* GlobalNamespace::MultiplayerScoreDiffText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerScoreDiffText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreDiffText::MultiplayerScoreDiffText() {}
