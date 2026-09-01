#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerPositionHUDController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPositionHUDController_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.set_alpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)(float_t)>(&::GlobalNamespace::MultiplayerPositionHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59acac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { "set_alpha", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(&::GlobalNamespace::MultiplayerPositionHUDController::Start)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x59acadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(&::GlobalNamespace::MultiplayerPositionHUDController::Update)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x59acc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(&::GlobalNamespace::MultiplayerPositionHUDController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ace14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__playerCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__playerCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCountText;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__playerCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__positionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__positionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionText;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__positionText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionText = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasGroup = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__firstPlayerAnimationGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerAnimationGo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__firstPlayerAnimationGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerAnimationGo;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__firstPlayerAnimationGo(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstPlayerAnimationGo = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__playersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__playersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__playersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersManager = value;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData*& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData* const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__initData(::GlobalNamespace::CoreGameHUDController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__prevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr int32_t const& GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_get__prevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__cordl_internal_set__prevPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPosition = value;
}
inline void GlobalNamespace::MultiplayerPositionHUDController::set_alpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { "set_alpha", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionHUDController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPositionHUDController* GlobalNamespace::MultiplayerPositionHUDController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerPositionHUDController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPositionHUDController::MultiplayerPositionHUDController() {}
