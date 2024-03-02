#pragma once
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
//  Writing Method size for method: ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e438c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0._SetGameplayModifiers_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::*)(
    int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::_SetGameplayModifiers_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23e4394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*>::get(), "<SetGameplayModifiers>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*&
GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::__cordl_internal_get_modifierParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParams;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> const&
GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::__cordl_internal_get_modifierParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParams;
}
constexpr void GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::__cordl_internal_set_modifierParams(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modifierParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0* GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*>());
}
inline void GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::_SetGameplayModifiers_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*>::get(),
                                               "<SetGameplayModifiers>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, item);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0::__ModifiersSelectionView____c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::ModifiersSelectionView.SetGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ModifiersSelectionView::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23df2f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModifiersSelectionView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModifiersSelectionView*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModifiersSelectionView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ModifiersSelectionView::*)()>(&::GlobalNamespace::ModifiersSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23df470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModifiersSelectionView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____modifierInfoList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noModifiersText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModifiersSelectionView*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayModifiers);
}
inline ::GlobalNamespace::ModifiersSelectionView* GlobalNamespace::ModifiersSelectionView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ModifiersSelectionView*>());
}
inline void GlobalNamespace::ModifiersSelectionView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModifiersSelectionView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModifiersSelectionView::ModifiersSelectionView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
