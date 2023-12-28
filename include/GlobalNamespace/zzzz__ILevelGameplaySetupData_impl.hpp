#pragma once
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILevelGameplaySetupData.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PreviewDifficultyBeatmap* (::GlobalNamespace::ILevelGameplaySetupData::*)()>(
    &::GlobalNamespace::ILevelGameplaySetupData::get_beatmapLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelGameplaySetupData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelGameplaySetupData*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILevelGameplaySetupData.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::ILevelGameplaySetupData::*)()>(
    &::GlobalNamespace::ILevelGameplaySetupData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelGameplaySetupData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelGameplaySetupData*>::get(), 1));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PreviewDifficultyBeatmap* GlobalNamespace::ILevelGameplaySetupData::get_beatmapLevel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelGameplaySetupData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PreviewDifficultyBeatmap*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::ILevelGameplaySetupData::get_gameplayModifiers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILevelGameplaySetupData*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
