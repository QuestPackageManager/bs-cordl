#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderWarmupSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetupData.get_nextScenesTransitionSetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> (::GlobalNamespace::ShaderWarmupSceneSetupData::*)()>(
    &::GlobalNamespace::ShaderWarmupSceneSetupData::get_nextScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bbba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData*>::get(), "get_nextScenesTransitionSetupData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetupData.set_nextScenesTransitionSetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*)>(
    &::GlobalNamespace::ShaderWarmupSceneSetupData::set_nextScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bbbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData*>::get(), "set_nextScenesTransitionSetupData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*)>(
    &::GlobalNamespace::ShaderWarmupSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26bbbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::ShaderWarmupSceneSetupData::__cordl_internal_get__nextScenesTransitionSetupData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextScenesTransitionSetupData_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::ShaderWarmupSceneSetupData::__cordl_internal_get__nextScenesTransitionSetupData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextScenesTransitionSetupData_k__BackingField;
}
constexpr void GlobalNamespace::ShaderWarmupSceneSetupData::__cordl_internal_set__nextScenesTransitionSetupData_k__BackingField(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextScenesTransitionSetupData_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> GlobalNamespace::ShaderWarmupSceneSetupData::get_nextScenesTransitionSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData*>::get(), "get_nextScenesTransitionSetupData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShaderWarmupSceneSetupData::set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData*>::get(), "set_nextScenesTransitionSetupData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ShaderWarmupSceneSetupData* GlobalNamespace::ShaderWarmupSceneSetupData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShaderWarmupSceneSetupData*>(nextScenesTransitionSetupData));
}
inline void GlobalNamespace::ShaderWarmupSceneSetupData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextScenesTransitionSetupData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderWarmupSceneSetupData::ShaderWarmupSceneSetupData() {}
