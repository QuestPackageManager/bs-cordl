#pragma once
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetAssetBundleFileResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetAssetBundleFileResult::*)(bool, ::StringW)>(
    &::GlobalNamespace::GetAssetBundleFileResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x234cdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GetAssetBundleFileResult::_ctor(bool isError, ::StringW assetBundlePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isError, assetBundlePath);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept {
  this->isError = isError;
  this->assetBundlePath = assetBundlePath;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
