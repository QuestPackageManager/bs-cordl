#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO.get_sceneInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SceneInfo* (::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::get_sceneInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>::get(), "get_sceneInfo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::*)(::GlobalNamespace::SceneSetupData*)>(
    &::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xe23494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneSetupData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe2366c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SceneInfo*& GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::__get__sceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::__get__sceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneInfo;
}
constexpr void GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::__set__sceneInfo(::GlobalNamespace::SceneInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SceneInfo* GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::get_sceneInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>::get(), "get_sceneInfo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SceneInfo*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::Init(::GlobalNamespace::SceneSetupData* sceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneSetupData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneSetupData);
}
inline ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO* GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::SingleFixedSceneScenesTransitionSetupDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
