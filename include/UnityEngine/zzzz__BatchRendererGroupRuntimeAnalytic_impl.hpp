#pragma once
// IWYU pragma private; include "UnityEngine\BatchRendererGroupRuntimeAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/zzzz__BatchRendererGroupRuntimeAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::BatchRendererGroupRuntimeAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BatchRendererGroupRuntimeAnalytic::*)()>(&::UnityEngine::BatchRendererGroupRuntimeAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a6a84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BatchRendererGroupRuntimeAnalytic.CreateBatchRendererGroupRuntimeAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BatchRendererGroupRuntimeAnalytic* (*)()>(
    &::UnityEngine::BatchRendererGroupRuntimeAnalytic::CreateBatchRendererGroupRuntimeAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6a8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>(), { "CreateBatchRendererGroupRuntimeAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::BatchRendererGroupRuntimeAnalytic::__cordl_internal_get_brgRuntimeStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brgRuntimeStatus;
}
constexpr int32_t const& UnityEngine::BatchRendererGroupRuntimeAnalytic::__cordl_internal_get_brgRuntimeStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brgRuntimeStatus;
}
constexpr void UnityEngine::BatchRendererGroupRuntimeAnalytic::__cordl_internal_set_brgRuntimeStatus(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___brgRuntimeStatus = value;
}
inline void UnityEngine::BatchRendererGroupRuntimeAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::BatchRendererGroupRuntimeAnalytic* UnityEngine::BatchRendererGroupRuntimeAnalytic::CreateBatchRendererGroupRuntimeAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>(), { "CreateBatchRendererGroupRuntimeAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEngine::BatchRendererGroupRuntimeAnalytic* UnityEngine::BatchRendererGroupRuntimeAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::BatchRendererGroupRuntimeAnalytic::BatchRendererGroupRuntimeAnalytic() {}
