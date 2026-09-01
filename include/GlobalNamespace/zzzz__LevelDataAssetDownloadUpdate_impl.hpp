#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelDataAssetDownloadUpdate.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelDataAssetDownloadUpdate::*)(
    ::StringW, uint32_t, uint32_t, ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState)>(&::GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372f6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelDataAssetDownloadUpdate>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred,
                                                                 ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState assetDownloadingState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelDataAssetDownloadUpdate>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, levelID, bytesTotal, bytesTransferred, assetDownloadingState);
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
