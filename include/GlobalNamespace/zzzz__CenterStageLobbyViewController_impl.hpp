#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CenterStageLobbyViewController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CenterStageLobbyViewController.SetLevelGameplaySetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CenterStageLobbyViewController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22cc804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(), "SetLevelGameplaySetupData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageLobbyViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CenterStageLobbyViewController::*)()>(
    &::GlobalNamespace::CenterStageLobbyViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22cc940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapSelectionView*& GlobalNamespace::CenterStageLobbyViewController::__get__beatmapSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapSelectionView*> const& GlobalNamespace::CenterStageLobbyViewController::__get__beatmapSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__set__beatmapSelectionView(::GlobalNamespace::BeatmapSelectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapSelectionView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ModifiersSelectionView*& GlobalNamespace::CenterStageLobbyViewController::__get__modifiersSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ModifiersSelectionView*> const& GlobalNamespace::CenterStageLobbyViewController::__get__modifiersSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__set__modifiersSelectionView(::GlobalNamespace::ModifiersSelectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____modifiersSelectionView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(), "SetLevelGameplaySetupData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelGameplaySetupData);
}
inline ::GlobalNamespace::CenterStageLobbyViewController* GlobalNamespace::CenterStageLobbyViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CenterStageLobbyViewController*>());
}
inline void GlobalNamespace::CenterStageLobbyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CenterStageLobbyViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CenterStageLobbyViewController::CenterStageLobbyViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
