#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CoreGameHUDController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CoreGameHUDController__InitData::*)(bool, bool, bool)>(
    &::GlobalNamespace::__CoreGameHUDController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x244b660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CoreGameHUDController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_get_hide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hide;
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_get_hide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hide;
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_set_hide(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hide = value;
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_get_showEnergyPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEnergyPanel;
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_get_showEnergyPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEnergyPanel;
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_set_showEnergyPanel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showEnergyPanel = value;
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_get_advancedHUD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHUD;
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_get_advancedHUD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHUD;
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__cordl_internal_set_advancedHUD(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___advancedHUD = value;
}
inline ::GlobalNamespace::__CoreGameHUDController__InitData* GlobalNamespace::__CoreGameHUDController__InitData::New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CoreGameHUDController__InitData*>(hide, showEnergyPanel, advancedHUD));
}
inline void GlobalNamespace::__CoreGameHUDController__InitData::_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CoreGameHUDController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide, showEnergyPanel, advancedHUD);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData::__CoreGameHUDController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_songProgressPanelGO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_songProgressPanelGO", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_relativeScoreGo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_relativeScoreGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_relativeScoreGo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_immediateRankGo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_immediateRankGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_immediateRankGo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_energyPanelGo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_energyPanelGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_energyPanelGo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.set_alpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(float_t)>(&::GlobalNamespace::CoreGameHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x244b5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "set_alpha", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(::GlobalNamespace::__CoreGameHUDController__InitData*)>(
    &::GlobalNamespace::CoreGameHUDController::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x244b5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CoreGameHUDController__InitData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songProgressPanelGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeScoreGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____immediateRankGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____energyPanelGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_songProgressPanelGO", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_relativeScoreGo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_relativeScoreGo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_immediateRankGo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_immediateRankGo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CoreGameHUDController::get_energyPanelGo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_energyPanelGo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void GlobalNamespace::CoreGameHUDController::set_alpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "set_alpha",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::CoreGameHUDController::Initialize(::GlobalNamespace::__CoreGameHUDController__InitData* initData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CoreGameHUDController__InitData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData);
}
inline ::GlobalNamespace::CoreGameHUDController* GlobalNamespace::CoreGameHUDController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CoreGameHUDController*>());
}
inline void GlobalNamespace::CoreGameHUDController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreGameHUDController::CoreGameHUDController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
