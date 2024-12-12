#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitScenesTransitionSetupDataContainerSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO>& GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__cordl_internal_get_appInitScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appInitScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> const&
GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__cordl_internal_get_appInitScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appInitScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__cordl_internal_set_appInitScenesTransitionSetupData(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appInitScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::AppInitScenesTransitionSetupDataContainerSO() {}
