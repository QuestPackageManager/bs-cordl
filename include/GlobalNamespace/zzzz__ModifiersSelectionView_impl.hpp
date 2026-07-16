#pragma once
// IWYU pragma private; include "GlobalNamespace/ModifiersSelectionView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596c60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0._SetGameplayModifiers_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(
    &::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::_SetGameplayModifiers_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x596c610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0*>(),
                                                             { "<SetGameplayModifiers>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierInfoListItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*&
GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::__cordl_internal_get_modifierParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParams;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const&
GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::__cordl_internal_get_modifierParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParams;
}
constexpr void GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::__cordl_internal_set_modifierParams(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifierParams = value;
}
inline void GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::_SetGameplayModifiers_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0*>(),
                                                           { "<SetGameplayModifiers>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierInfoListItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, item);
}
inline ::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0* GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0::ModifiersSelectionView___c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::ModifiersSelectionView.SetGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModifiersSelectionView::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x596a078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView*>(), { ::i2c::class_of<::GlobalNamespace::ModifiersSelectionView*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModifiersSelectionView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModifiersSelectionView::*)()>(&::GlobalNamespace::ModifiersSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596a238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& GlobalNamespace::ModifiersSelectionView::__cordl_internal_get__modifierInfoList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifierInfoList;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& GlobalNamespace::ModifiersSelectionView::__cordl_internal_get__modifierInfoList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifierInfoList;
}
constexpr void GlobalNamespace::ModifiersSelectionView::__cordl_internal_set__modifierInfoList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifierInfoList = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ModifiersSelectionView::__cordl_internal_get__noModifiersText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noModifiersText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ModifiersSelectionView::__cordl_internal_get__noModifiersText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noModifiersText;
}
constexpr void GlobalNamespace::ModifiersSelectionView::__cordl_internal_set__noModifiersText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noModifiersText = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::ModifiersSelectionView::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::ModifiersSelectionView::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::ModifiersSelectionView::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
inline void GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ModifiersSelectionView*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::ModifiersSelectionView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModifiersSelectionView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModifiersSelectionView* GlobalNamespace::ModifiersSelectionView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModifiersSelectionView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModifiersSelectionView::ModifiersSelectionView() {}
