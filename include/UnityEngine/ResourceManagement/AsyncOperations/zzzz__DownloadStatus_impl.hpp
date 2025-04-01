#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/DownloadStatus.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus.get_Percent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x479ff94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>::get(), "get_Percent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>::get(), "get_Percent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
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
