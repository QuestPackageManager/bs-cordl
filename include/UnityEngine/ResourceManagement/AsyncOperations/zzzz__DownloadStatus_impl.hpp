#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/DownloadStatus.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus.get_Percent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69218d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(), { "get_Percent", {}, {} })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(), { "get_Percent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TotalBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DownloadedBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "IsDone", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::DownloadStatus(int64_t TotalBytes, int64_t DownloadedBytes, bool IsDone) noexcept {
  this->TotalBytes = TotalBytes;
  this->DownloadedBytes = DownloadedBytes;
  this->IsDone = IsDone;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::DownloadStatus() {}
