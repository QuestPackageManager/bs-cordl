#pragma once
// IWYU pragma private; include "GlobalNamespace\GetAssetBundleFileResult.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetAssetBundleFileResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetAssetBundleFileResult::*)(bool, ::StringW)>(&::GlobalNamespace::GetAssetBundleFileResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetAssetBundleFileResult>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetAssetBundleFileResult.Success
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GetAssetBundleFileResult (*)(::StringW)>(&::GlobalNamespace::GetAssetBundleFileResult::Success)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372f684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetAssetBundleFileResult>(), { "Success", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GetAssetBundleFileResult::setStaticF_Error(::GlobalNamespace::GetAssetBundleFileResult value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GetAssetBundleFileResult, "Error", ::GlobalNamespace::GetAssetBundleFileResult>(
      std::forward<::GlobalNamespace::GetAssetBundleFileResult>(value));
}
inline ::GlobalNamespace::GetAssetBundleFileResult GlobalNamespace::GetAssetBundleFileResult::getStaticF_Error() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GetAssetBundleFileResult, "Error", ::GlobalNamespace::GetAssetBundleFileResult>();
}
inline void GlobalNamespace::GetAssetBundleFileResult::_ctor(bool isError, ::StringW assetBundlePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetAssetBundleFileResult>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isError, assetBundlePath);
}
inline ::GlobalNamespace::GetAssetBundleFileResult GlobalNamespace::GetAssetBundleFileResult::Success(::StringW assetBundlePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetAssetBundleFileResult>(), { "Success", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetAssetBundleFileResult>(nullptr, ___internal_method, assetBundlePath);
}
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept {
  this->isError = isError;
  this->assetBundlePath = assetBundlePath;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult() {}
