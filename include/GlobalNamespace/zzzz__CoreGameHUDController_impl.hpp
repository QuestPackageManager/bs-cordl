#pragma once
// IWYU pragma private; include "GlobalNamespace\CoreGameHUDController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreGameHUDController_InitData::*)(bool, bool, bool)>(&::GlobalNamespace::CoreGameHUDController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59ab4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController_InitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_get_hide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hide;
}
constexpr bool const& GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_get_hide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hide;
}
constexpr void GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_set_hide(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hide = value;
}
constexpr bool& GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_get_showEnergyPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEnergyPanel;
}
constexpr bool const& GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_get_showEnergyPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEnergyPanel;
}
constexpr void GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_set_showEnergyPanel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showEnergyPanel = value;
}
constexpr bool& GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_get_advancedHUD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHUD;
}
constexpr bool const& GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_get_advancedHUD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHUD;
}
constexpr void GlobalNamespace::CoreGameHUDController_InitData::__cordl_internal_set_advancedHUD(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___advancedHUD = value;
}
inline void GlobalNamespace::CoreGameHUDController_InitData::_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController_InitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide, showEnergyPanel, advancedHUD);
}
inline ::GlobalNamespace::CoreGameHUDController_InitData* GlobalNamespace::CoreGameHUDController_InitData::New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CoreGameHUDController_InitData*>(hide, showEnergyPanel, advancedHUD));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreGameHUDController_InitData::CoreGameHUDController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_songProgressPanelGO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ab42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_songProgressPanelGO", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_relativeScoreGo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_relativeScoreGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ab434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_relativeScoreGo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_immediateRankGo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_immediateRankGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ab43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_immediateRankGo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_energyPanelGo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_energyPanelGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ab444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_energyPanelGo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.set_alpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(float_t)>(&::GlobalNamespace::CoreGameHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59ab44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "set_alpha", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(::GlobalNamespace::CoreGameHUDController_InitData*)>(
    &::GlobalNamespace::CoreGameHUDController::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59ab464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::CoreGameHUDController_InitData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ab4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__songProgressPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProgressPanelGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__songProgressPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProgressPanelGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__cordl_internal_set__songProgressPanelGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songProgressPanelGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__relativeScoreGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__relativeScoreGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__cordl_internal_set__relativeScoreGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeScoreGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__immediateRankGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateRankGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__immediateRankGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateRankGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__cordl_internal_set__immediateRankGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____immediateRankGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__energyPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyPanelGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__energyPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyPanelGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__cordl_internal_set__energyPanelGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____energyPanelGO = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::CoreGameHUDController::__cordl_internal_get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::CoreGameHUDController::__cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasGroup = value;
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_songProgressPanelGO", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_relativeScoreGo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_relativeScoreGo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_immediateRankGo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_immediateRankGo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_energyPanelGo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "get_energyPanelGo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::CoreGameHUDController::set_alpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "set_alpha", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CoreGameHUDController::Initialize(::GlobalNamespace::CoreGameHUDController_InitData* initData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::CoreGameHUDController_InitData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData);
}
inline void GlobalNamespace::CoreGameHUDController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreGameHUDController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CoreGameHUDController* GlobalNamespace::CoreGameHUDController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CoreGameHUDController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreGameHUDController::CoreGameHUDController() {}
