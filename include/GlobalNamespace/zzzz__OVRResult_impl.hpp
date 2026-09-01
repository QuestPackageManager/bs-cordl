#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult::From(TStatus status) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult*>(), { "From", { ::i2c::class_of<TStatus>() }, { ::i2c::type_of<TStatus>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStatus>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>>(nullptr, ___internal_method, status);
}
template <typename TResult, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TResult, TStatus> GlobalNamespace::OVRResult::From(TResult result, TStatus status) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult*>(),
                                                           { "From", { ::i2c::class_of<TResult>(), ::i2c::class_of<TStatus>() }, { ::i2c::type_of<TResult>(), ::i2c::type_of<TStatus>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>(), ::i2c::class_of<TStatus>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TResult, TStatus>>(nullptr, ___internal_method, result, status);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRResult::OVRResult() {}
