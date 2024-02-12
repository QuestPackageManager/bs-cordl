#pragma once
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__PS4NetworkPlayerModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4NetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4NetworkPlayerModel::*)()>(&::GlobalNamespace::PS4NetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265deb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4NetworkPlayerModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PS4NetworkPlayerModel* GlobalNamespace::PS4NetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PS4NetworkPlayerModel*>());
}
inline void GlobalNamespace::PS4NetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4NetworkPlayerModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4NetworkPlayerModel::PS4NetworkPlayerModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
