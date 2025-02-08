#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentOverrideSettingsPanelController.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_impl.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* (
    ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c07f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>::get(),
                                                 "get_environmentInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements.set_environmentInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::set_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c07f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>::get(), "set_environmentInfos",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c07f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___simpleTextDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfos_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::get_environmentInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>::get(),
                                               "get_environmentInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::set_environmentInfos(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>::get(), "set_environmentInfos",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements* GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements::EnvironmentOverrideSettingsPanelController_Elements() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c07fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c._SetData_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::*)(
    ::GlobalNamespace::EnvironmentInfoSO*)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_SetData_b__10_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c07fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get(), "<SetData>b__10_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::setStaticF___9(::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get>(
      std::forward<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>(value));
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c* GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get>();
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::setStaticF___9__10_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get>();
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::_SetData_b__10_0(::GlobalNamespace::EnvironmentInfoSO* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>::get(), "<SetData>b__10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c* GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentOverrideSettingsPanelController___c::EnvironmentOverrideSettingsPanelController___c() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(
    ::GlobalNamespace::OverrideEnvironmentSettings*)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3c074a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3c07744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3c078d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "Refresh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleDropDownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3c07a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                                                 "HandleDropDownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleOverrideEnvironmentsToggleValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3c07cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "HandleOverrideEnvironmentsToggleValueChanged",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c07f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._HandleOverrideEnvironmentsToggleValueChanged_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__14_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c07f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                                                 "<HandleOverrideEnvironmentsToggleValueChanged>b__14_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideEnvironmentsToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementsGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*, ::Array<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>*>&
GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*, ::Array<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>*> const&
GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__cordl_internal_set__elements(
    ::ArrayW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*, ::Array<::GlobalNamespace::EnvironmentOverrideSettingsPanelController_Elements*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____presentPanelAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dismissPanelAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentListModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideEnvironmentSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrideEnvironmentSettings);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "Refresh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                                               "HandleDropDownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropDownWithTableView, idx);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), "HandleOverrideEnvironmentsToggleValueChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__14_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                                               "<HandleOverrideEnvironmentsToggleValueChanged>b__14_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController* GlobalNamespace::EnvironmentOverrideSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>());
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
