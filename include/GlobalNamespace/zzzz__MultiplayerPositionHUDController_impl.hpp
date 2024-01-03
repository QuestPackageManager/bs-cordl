#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPositionHUDController_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.set_alpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerPositionHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c1f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(), "set_alpha",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(
    &::GlobalNamespace::MultiplayerPositionHUDController::Start)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23c1f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(
    &::GlobalNamespace::MultiplayerPositionHUDController::Update)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23c2078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(
    &::GlobalNamespace::MultiplayerPositionHUDController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c2228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::MultiplayerPositionHUDController::__get__playerCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCountText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__playerCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCountText;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__playerCountText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerCountText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::MultiplayerPositionHUDController::__get__positionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__positionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionText;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__positionText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::MultiplayerPositionHUDController::__get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__canvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::MultiplayerPositionHUDController::__get__firstPlayerAnimationGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerAnimationGo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__firstPlayerAnimationGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerAnimationGo;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__firstPlayerAnimationGo(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstPlayerAnimationGo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider*& GlobalNamespace::MultiplayerPositionHUDController::__get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerPlayersManager*& GlobalNamespace::MultiplayerPositionHUDController::__get__playersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__playersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__playersManager(::GlobalNamespace::MultiplayerPlayersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& GlobalNamespace::MultiplayerPositionHUDController::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& GlobalNamespace::MultiplayerPositionHUDController::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MultiplayerPositionHUDController::__get__prevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr int32_t const& GlobalNamespace::MultiplayerPositionHUDController::__get__prevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__prevPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPosition = value;
}
inline void GlobalNamespace::MultiplayerPositionHUDController::set_alpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(), "set_alpha",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                                                                             "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPositionHUDController* GlobalNamespace::MultiplayerPositionHUDController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerPositionHUDController*>());
}
inline void GlobalNamespace::MultiplayerPositionHUDController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPositionHUDController::MultiplayerPositionHUDController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
