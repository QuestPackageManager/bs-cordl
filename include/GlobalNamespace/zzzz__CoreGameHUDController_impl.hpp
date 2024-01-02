#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CoreGameHUDController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CoreGameHUDController__InitData::*)(bool, bool, bool)>(
    &::GlobalNamespace::__CoreGameHUDController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23c0068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CoreGameHUDController__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__get_hide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hide;
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__get_hide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hide;
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__set_hide(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hide = value;
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__get_showEnergyPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEnergyPanel;
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__get_showEnergyPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEnergyPanel;
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__set_showEnergyPanel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showEnergyPanel = value;
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__get_advancedHUD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHUD;
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__get_advancedHUD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHUD;
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__set_advancedHUD(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___advancedHUD = value;
}
inline ::GlobalNamespace::__CoreGameHUDController__InitData* GlobalNamespace::__CoreGameHUDController__InitData::New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CoreGameHUDController__InitData*>(hide, showEnergyPanel, advancedHUD));
}
inline void GlobalNamespace::__CoreGameHUDController__InitData::_ctor(bool hide, bool showEnergyPanel, bool advancedHUD) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CoreGameHUDController__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide, showEnergyPanel, advancedHUD);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData::__CoreGameHUDController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_songProgressPanelGO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bff94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_songProgressPanelGO", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_relativeScoreGo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_relativeScoreGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_relativeScoreGo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_immediateRankGo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_immediateRankGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bffa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_immediateRankGo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_energyPanelGo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(
    &::GlobalNamespace::CoreGameHUDController::get_energyPanelGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                               "get_energyPanelGo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.set_alpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(float_t)>(&::GlobalNamespace::CoreGameHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23bffb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "set_alpha", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(::GlobalNamespace::__CoreGameHUDController__InitData*)>(
    &::GlobalNamespace::CoreGameHUDController::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23bffd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CoreGameHUDController__InitData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::CoreGameHUDController::__get__songProgressPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProgressPanelGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::CoreGameHUDController::__get__songProgressPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProgressPanelGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__songProgressPanelGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songProgressPanelGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::CoreGameHUDController::__get__relativeScoreGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::CoreGameHUDController::__get__relativeScoreGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__relativeScoreGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeScoreGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::CoreGameHUDController::__get__immediateRankGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateRankGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::CoreGameHUDController::__get__immediateRankGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____immediateRankGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__immediateRankGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____immediateRankGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::CoreGameHUDController::__get__energyPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyPanelGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::CoreGameHUDController::__get__energyPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyPanelGO;
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__energyPanelGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____energyPanelGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::CoreGameHUDController::__get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::CoreGameHUDController::__get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__canvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_songProgressPanelGO", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_relativeScoreGo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_relativeScoreGo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_immediateRankGo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_immediateRankGo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_energyPanelGo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                                                                             "get_energyPanelGo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline void GlobalNamespace::CoreGameHUDController::set_alpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "set_alpha", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::CoreGameHUDController::Initialize(::GlobalNamespace::__CoreGameHUDController__InitData* initData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CoreGameHUDController__InitData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData);
}
inline ::GlobalNamespace::CoreGameHUDController* GlobalNamespace::CoreGameHUDController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CoreGameHUDController*>());
}
inline void GlobalNamespace::CoreGameHUDController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreGameHUDController::CoreGameHUDController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
