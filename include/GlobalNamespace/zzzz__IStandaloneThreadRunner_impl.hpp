#pragma once
// IWYU pragma private; include "GlobalNamespace/IStandaloneThreadRunner.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStandaloneThreadRunner.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IStandaloneThreadRunner::*)(::GlobalNamespace::IStandaloneThreadRunnable*)>(
    &::GlobalNamespace::IStandaloneThreadRunner::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStandaloneThreadRunner*>(), { ::i2c::class_of<::GlobalNamespace::IStandaloneThreadRunner*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IStandaloneThreadRunner::Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStandaloneThreadRunner*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runnable);
}
