#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwapCapsLockState.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ButtonSpriteSwapCapsLockState_def.hpp"
#include "HMUI/zzzz__CapsLockState_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)()>(&::HMUI::ButtonSpriteSwapCapsLockState::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56cd51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)()>(&::HMUI::ButtonSpriteSwapCapsLockState::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56cd74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.OnCapsLockStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)(::HMUI::CapsLockState)>(
    &::HMUI::ButtonSpriteSwapCapsLockState::OnCapsLockStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56cd7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "OnCapsLockStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::CapsLockState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.UpdateSprites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)(::HMUI::CapsLockState)>(
    &::HMUI::ButtonSpriteSwapCapsLockState::UpdateSprites)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x56cd5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "UpdateSprites", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::CapsLockState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)()>(&::HMUI::ButtonSpriteSwapCapsLockState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56cd7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseSprite;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__lowercaseSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lowercaseSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceSprite;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseOnceSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uppercaseOnceSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseSprite;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uppercaseSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseColor;
}
constexpr ::UnityEngine::Color const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseColor;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__lowercaseColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lowercaseColor = value;
}
constexpr ::UnityEngine::Color& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceColor;
}
constexpr ::UnityEngine::Color const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceColor;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseOnceColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uppercaseOnceColor = value;
}
constexpr ::UnityEngine::Color& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseColor;
}
constexpr ::UnityEngine::Color const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseColor;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uppercaseColor = value;
}
constexpr ::UnityW<::HMUI::UIKeyboard>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__keyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboard;
}
constexpr ::UnityW<::HMUI::UIKeyboard> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__keyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboard;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__keyboard(::UnityW<::HMUI::UIKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__images() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____images;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__images() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____images;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__images(::ArrayW<::UnityW<::UnityEngine::UI::Image>, ::Array<::UnityW<::UnityEngine::UI::Image>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____images)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ButtonSpriteSwapCapsLockState::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::OnCapsLockStateChanged(::HMUI::CapsLockState capsLockState) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "OnCapsLockStateChanged",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::CapsLockState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capsLockState);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::UpdateSprites(::HMUI::CapsLockState capsLockState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), "UpdateSprites", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::CapsLockState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capsLockState);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapCapsLockState*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ButtonSpriteSwapCapsLockState* HMUI::ButtonSpriteSwapCapsLockState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ButtonSpriteSwapCapsLockState*>());
}
// Ctor Parameters []
constexpr ::HMUI::ButtonSpriteSwapCapsLockState::ButtonSpriteSwapCapsLockState() {}
