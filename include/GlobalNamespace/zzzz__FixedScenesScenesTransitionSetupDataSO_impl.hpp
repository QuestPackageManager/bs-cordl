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
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>& GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__get__sceneInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneInfos;
}
constexpr ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> const& GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__get__sceneInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneInfos;
}
constexpr void GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__set__sceneInfos(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>::get(),
                                                                             "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO* GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::FixedScenesScenesTransitionSetupDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
