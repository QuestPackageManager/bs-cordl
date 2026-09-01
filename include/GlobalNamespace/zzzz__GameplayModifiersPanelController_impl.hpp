#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayModifiersPanelController.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierToggle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierToggle_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5945768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0._Awake_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::*)(bool)>(
    &::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::_Awake_b__0)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5945c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0*>(), { "<Awake>b__0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifierToggle>& GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::__cordl_internal_get_gameplayModifierToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifierToggle;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierToggle> const& GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::__cordl_internal_get_gameplayModifierToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifierToggle;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::__cordl_internal_set_gameplayModifierToggle(::UnityW<::GlobalNamespace::GameplayModifierToggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifierToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>& GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> const& GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameplayModifiersPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::_Awake_b__0(bool on) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0*>(), { "<Awake>b__0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline ::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0* GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersPanelController___c__DisplayClass16_0::GameplayModifiersPanelController___c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.add_didChangeGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::GameplayModifiersPanelController::add_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5945438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                                                           { "add_didChangeGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.remove_didChangeGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::GameplayModifiersPanelController::remove_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59454e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                                                           { "remove_didChangeGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::GameplayModifiersPanelController::*)()>(
    &::GlobalNamespace::GameplayModifiersPanelController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5945590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiersPanelController::SetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5945598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)()>(&::GlobalNamespace::GameplayModifiersPanelController::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x59455a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)()>(&::GlobalNamespace::GameplayModifiersPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x594576c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.SetToggleValueWithGameplayModifierParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)(::GlobalNamespace::GameplayModifierParamsSO*, bool)>(
    &::GlobalNamespace::GameplayModifiersPanelController::SetToggleValueWithGameplayModifierParams)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5945780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                { "SetToggleValueWithGameplayModifierParams", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.GetToggleValueWithGameplayModifierParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifiersPanelController::*)(::GlobalNamespace::GameplayModifierParamsSO*)>(
    &::GlobalNamespace::GameplayModifiersPanelController::GetToggleValueWithGameplayModifierParams)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5945824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                             { "GetToggleValueWithGameplayModifierParams", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.RefreshTotalMultiplierAndRankUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)()>(
    &::GlobalNamespace::GameplayModifiersPanelController::RefreshTotalMultiplierAndRankUI)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x59458b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "RefreshTotalMultiplierAndRankUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController.IRefreshable_Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)()>(&::GlobalNamespace::GameplayModifiersPanelController::IRefreshable_Refresh)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5945a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "IRefreshable.Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersPanelController::*)()>(&::GlobalNamespace::GameplayModifiersPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5945ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__totalMultiplierValueText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalMultiplierValueText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__totalMultiplierValueText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalMultiplierValueText;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__totalMultiplierValueText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalMultiplierValueText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__maxRankValueText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRankValueText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__maxRankValueText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRankValueText;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__maxRankValueText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxRankValueText = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__positiveColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__positiveColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveColor;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__positiveColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positiveColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__negativeColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negativeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__negativeColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negativeColor;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__negativeColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____negativeColor = value;
}
constexpr ::System::Action*& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get_didChangeGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeGameplayModifiersEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get_didChangeGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeGameplayModifiersEvent;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set_didChangeGameplayModifiersEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeGameplayModifiersEvent = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>>& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__gameplayModifierToggles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierToggles;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>> const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__gameplayModifierToggles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierToggles;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__gameplayModifierToggles(::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierToggle>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifierToggles = value;
}
constexpr bool& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__changingGameplayModifierToggles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____changingGameplayModifierToggles;
}
constexpr bool const& GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__changingGameplayModifierToggles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____changingGameplayModifierToggles;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__changingGameplayModifierToggles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____changingGameplayModifierToggles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>*&
GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__toggleForGameplayModifierParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleForGameplayModifierParam;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>* const&
GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_get__toggleForGameplayModifierParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleForGameplayModifierParam;
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__cordl_internal_set__toggleForGameplayModifierParam(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::UnityW<::UnityEngine::UI::Toggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleForGameplayModifierParam = value;
}
inline void GlobalNamespace::GameplayModifiersPanelController::add_didChangeGameplayModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                                                         { "add_didChangeGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayModifiersPanelController::remove_didChangeGameplayModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                                                         { "remove_didChangeGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiersPanelController::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersPanelController::SetData(::GlobalNamespace::GameplayModifiers* newGameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameplayModifiers);
}
inline void GlobalNamespace::GameplayModifiersPanelController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersPanelController::SetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                              { "SetToggleValueWithGameplayModifierParams", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifierParams, value);
}
inline bool GlobalNamespace::GameplayModifiersPanelController::GetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(),
                                                           { "GetToggleValueWithGameplayModifierParams", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierParamsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayModifierParams);
}
inline void GlobalNamespace::GameplayModifiersPanelController::RefreshTotalMultiplierAndRankUI() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "RefreshTotalMultiplierAndRankUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersPanelController::IRefreshable_Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { "IRefreshable.Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiersPanelController* GlobalNamespace::GameplayModifiersPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersPanelController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr GlobalNamespace::GameplayModifiersPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRefreshable"
constexpr ::GlobalNamespace::IRefreshable* GlobalNamespace::GameplayModifiersPanelController::i___GlobalNamespace__IRefreshable() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersPanelController::GameplayModifiersPanelController() {}
