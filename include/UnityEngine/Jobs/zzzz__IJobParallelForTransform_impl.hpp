#pragma once
// IWYU pragma private; include "UnityEngine\Jobs\IJobParallelForTransform.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::UnityEngine::Jobs::IJobParallelForTransform.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::IJobParallelForTransform::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::UnityEngine::Jobs::IJobParallelForTransform::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransform*>(), { ::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransform*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Jobs::IJobParallelForTransform::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Jobs::IJobParallelForTransform*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, transform);
}
