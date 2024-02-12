#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CenterStageLobbyViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CenterStageLobbyViewController.SetLevelGameplaySetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CenterStageLobbyViewController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x22fc2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(), "SetLevelGameplaySetupData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageLobbyViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CenterStageLobbyViewController::*)()>(
    &::GlobalNamespace::CenterStageLobbyViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fc450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__beatmapSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__beatmapSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapSelectionView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__modifiersSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__modifiersSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____modifiersSelectionView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(), "SetLevelGameplaySetupData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelGameplaySetupData);
}
inline ::GlobalNamespace::CenterStageLobbyViewController* GlobalNamespace::CenterStageLobbyViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CenterStageLobbyViewController*>());
}
inline void GlobalNamespace::CenterStageLobbyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CenterStageLobbyViewController::CenterStageLobbyViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
