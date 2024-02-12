#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetupData.get_nextScenesTransitionSetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> (::GlobalNamespace::HealthWarningSceneSetupData::*)()>(
    &::GlobalNamespace::HealthWarningSceneSetupData::get_nextScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2348e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(), "get_nextScenesTransitionSetupData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*)>(
    &::GlobalNamespace::HealthWarningSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2348e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::HealthWarningSceneSetupData::__cordl_internal_get__nextScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::HealthWarningSceneSetupData::__cordl_internal_get__nextScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextScenesTransitionSetupData;
}
constexpr void GlobalNamespace::HealthWarningSceneSetupData::__cordl_internal_set__nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> GlobalNamespace::HealthWarningSceneSetupData::get_nextScenesTransitionSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(), "get_nextScenesTransitionSetupData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningSceneSetupData* GlobalNamespace::HealthWarningSceneSetupData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HealthWarningSceneSetupData*>(nextScenesTransitionSetupData));
}
inline void GlobalNamespace::HealthWarningSceneSetupData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextScenesTransitionSetupData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningSceneSetupData::HealthWarningSceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
