#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__FixedScenesScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe23684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>::get(), "Init",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe236a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>&
GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__cordl_internal_get__sceneInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneInfos;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> const&
GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__cordl_internal_get__sceneInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneInfos;
}
constexpr void
GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__cordl_internal_set__sceneInfos(::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO* GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::FixedScenesScenesTransitionSetupDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
