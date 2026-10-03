#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AnimateCrossFadeJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AnimateCrossFadeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AnimateCrossFadeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AnimateCrossFadeJob::*)(int32_t)>(&::UnityEngine::Rendering::AnimateCrossFadeJob::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c48458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimateCrossFadeJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AnimateCrossFadeJob::Execute(int32_t instanceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimateCrossFadeJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::AnimateCrossFadeJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::AnimateCrossFadeJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "crossFadeArray", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::AnimateCrossFadeJob::AnimateCrossFadeJob(float_t deltaTime, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> crossFadeArray) noexcept {
  this->deltaTime = deltaTime;
  this->crossFadeArray = crossFadeArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AnimateCrossFadeJob::AnimateCrossFadeJob() {}
