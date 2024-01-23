#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelLoader.LoadStandardLevelSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelInfoSaveData* (*)(::StringW)>(
    &::GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2376238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelLoader*>::get(), "LoadStandardLevelSaveData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::StandardLevelInfoSaveData* GlobalNamespace::StandardLevelLoader::LoadStandardLevelSaveData(::StringW levelInfoFilenamePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelLoader*>::get(), "LoadStandardLevelSaveData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardLevelInfoSaveData*, false>(nullptr, ___internal_method, levelInfoFilenamePath);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelLoader::StandardLevelLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
