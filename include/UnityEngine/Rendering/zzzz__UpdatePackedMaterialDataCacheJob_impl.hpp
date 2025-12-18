#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UpdatePackedMaterialDataCacheJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__UpdatePackedMaterialDataCacheJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob.ProcessMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::*)(int32_t)>(
    &::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::ProcessMaterial)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6665a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>::get(), "ProcessMaterial",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::*)()>(
    &::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::Execute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6665b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::ProcessMaterial(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>::get(), "ProcessMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedMaterialDatas", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedMaterialHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::UpdatePackedMaterialDataCacheJob(
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas,
    ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash) noexcept {
  this->materialIDs = materialIDs;
  this->packedMaterialDatas = packedMaterialDatas;
  this->packedMaterialHash = packedMaterialHash;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::UpdatePackedMaterialDataCacheJob() {}
