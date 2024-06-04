#pragma once
// IWYU pragma private; include "GlobalNamespace/GetAssetBundleFileResult.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetAssetBundleFileResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetAssetBundleFileResult::*)(bool, ::StringW)>(
    &::GlobalNamespace::GetAssetBundleFileResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x14ce894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetAssetBundleFileResult.Sucess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GetAssetBundleFileResult (*)(::StringW)>(&::GlobalNamespace::GetAssetBundleFileResult::Sucess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14ce8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get(), "Sucess", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GetAssetBundleFileResult::setStaticF_Error(::GlobalNamespace::GetAssetBundleFileResult value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GetAssetBundleFileResult, "Error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get>(
      std::forward<::GlobalNamespace::GetAssetBundleFileResult>(value));
}
inline ::GlobalNamespace::GetAssetBundleFileResult GlobalNamespace::GetAssetBundleFileResult::getStaticF_Error() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GetAssetBundleFileResult, "Error",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get>();
}
inline void GlobalNamespace::GetAssetBundleFileResult::_ctor(bool isError, ::StringW assetBundlePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isError, assetBundlePath);
}
inline ::GlobalNamespace::GetAssetBundleFileResult GlobalNamespace::GetAssetBundleFileResult::Sucess(::StringW assetBundlePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetAssetBundleFileResult>::get(), "Sucess", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetAssetBundleFileResult, false>(nullptr, ___internal_method, assetBundlePath);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept {
  this->isError = isError;
  this->assetBundlePath = assetBundlePath;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult() {}
