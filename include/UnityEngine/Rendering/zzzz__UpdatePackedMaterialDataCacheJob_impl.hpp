#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UpdatePackedMaterialDataCacheJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__UpdatePackedMaterialDataCacheJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob.ProcessMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::*)(int32_t)>(
    &::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::ProcessMaterial)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x681cbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>(), { "ProcessMaterial", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::*)()>(&::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::Execute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x681cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::ProcessMaterial(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>(), { "ProcessMaterial", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
inline void UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
