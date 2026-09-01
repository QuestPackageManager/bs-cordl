#pragma once
// IWYU pragma private; include "GlobalNamespace\IRenderingParamsApplicator.hpp"
#include "GlobalNamespace/zzzz__IRenderingParamsApplicator_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRenderingParamsApplicator.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IRenderingParamsApplicator::*)(::GlobalNamespace::SceneType, ::StringW)>(
    &::GlobalNamespace::IRenderingParamsApplicator::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IRenderingParamsApplicator*>(), { ::i2c::class_of<::GlobalNamespace::IRenderingParamsApplicator*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IRenderingParamsApplicator::Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IRenderingParamsApplicator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneType, optionalEnvironmentSerializedName);
}
