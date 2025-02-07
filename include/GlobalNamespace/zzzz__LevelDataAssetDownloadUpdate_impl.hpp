#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelDataAssetDownloadUpdate.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState::LevelDataAssetDownloadUpdate_AssetDownloadingState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState::LevelDataAssetDownloadUpdate_AssetDownloadingState() {}
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState::PreparingToDownload{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState::Downloading{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState::Completed{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::LevelDataAssetDownloadUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelDataAssetDownloadUpdate::*)(
    ::StringW, uint32_t, uint32_t, ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState)>(&::GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d4d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred,
                                                                 ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState assetDownloadingState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelDataAssetDownloadUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelID, bytesTotal, bytesTransferred, assetDownloadingState);
}
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetDownloadingState", ty:
// "::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate::LevelDataAssetDownloadUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred,
                                                                                        ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState assetDownloadingState) noexcept {
  this->levelID = levelID;
  this->bytesTotal = bytesTotal;
  this->bytesTransferred = bytesTransferred;
  this->assetDownloadingState = assetDownloadingState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate::LevelDataAssetDownloadUpdate() {}
