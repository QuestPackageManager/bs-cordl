#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentOverrideSettingsPanelController.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__PanelAnimationSO_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements.get_environmentInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* (
    ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5921cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>(), { "get_environmentInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements.set_environmentInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::set_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5921cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>(),
                                                { "set_environmentInfos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5921d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___label;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___label;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_set_label(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___label = value;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___simpleTextDropdown;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_set_simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___simpleTextDropdown = value;
}
constexpr ::GlobalNamespace::EnvironmentType& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_environmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr ::GlobalNamespace::EnvironmentType const& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_environmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentType;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_set_environmentType(::GlobalNamespace::EnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentType = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_localizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get_localizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_set_localizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizationKey = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*&
GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get__environmentInfos_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfos_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const&
GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_get__environmentInfos_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfos_k__BackingField;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::__cordl_internal_set__environmentInfos_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentInfos_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::get_environmentInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>(), { "get_environmentInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::set_environmentInfos(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>(),
                                              { "set_environmentInfos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements* GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::EnvironmentOverrideSettingsPanelController_Elements() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5921d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c._SetData_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_SetData_b__10_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5921d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(),
                                                                                           { "<SetData>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::setStaticF___9(::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*, "<>9", ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(
      std::forward<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(value));
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c* GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*, "<>9", ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>();
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::setStaticF___9__10_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>*, "<>9__10_0", ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>*, "<>9__10_0",
                                           ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>();
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_SetData_b__10_0(::GlobalNamespace::EnvironmentInfoSO* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(),
                                                                                         { "<SetData>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c* GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::EnvironmentOverrideSettingsPanelController___c() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x59210a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(),
                                                                                           { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x59213cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x59215b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleDropDownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5921714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(),
                                                             { "HandleDropDownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleOverrideEnvironmentsToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x59219fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(),
                                                                                           { "HandleOverrideEnvironmentsToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5921cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._HandleOverrideEnvironmentsToggleValueChanged_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__14_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5921cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { "<HandleOverrideEnvironmentsToggleValueChanged>b__14_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__overrideEnvironmentsToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentsToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__overrideEnvironmentsToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentsToggle;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__overrideEnvironmentsToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideEnvironmentsToggle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__elementsGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementsGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__elementsGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementsGO;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__elementsGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementsGO = value;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__elements(::ArrayW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elements = value;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO>& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__presentPanelAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presentPanelAnimation;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__presentPanelAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presentPanelAnimation;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__presentPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presentPanelAnimation = value;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO>& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__dismissPanelAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissPanelAnimation;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__dismissPanelAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissPanelAnimation;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__dismissPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dismissPanelAnimation = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__environmentListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__environmentListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentListModel;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__environmentListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentListModel = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings*& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__overrideEnvironmentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentSettings;
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings* const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__overrideEnvironmentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentSettings;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideEnvironmentSettings = value;
}
constexpr bool& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData(::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(),
                                                                                         { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideEnvironmentSettings);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(),
                                                           { "HandleDropDownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropDownWithTableView, idx);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(),
                                                                                         { "HandleOverrideEnvironmentsToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__14_0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>(), { "<HandleOverrideEnvironmentsToggleValueChanged>b__14_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController* GlobalNamespace::EnvironmentOverrideSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr GlobalNamespace::EnvironmentOverrideSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRefreshable"
constexpr ::GlobalNamespace::IRefreshable* GlobalNamespace::EnvironmentOverrideSettingsPanelController::i___GlobalNamespace__IRefreshable() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentOverrideSettingsPanelController::EnvironmentOverrideSettingsPanelController() {}
