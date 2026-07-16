#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/BatchRenderGroupUsageAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__BatchRenderGroupUsageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::*)()>(&::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b04610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic.CreateBatchRenderGroupUsageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* (*)()>(
    &::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::CreateBatchRenderGroupUsageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b04688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>(), { "CreateBatchRenderGroupUsageAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxBRGInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBRGInstance;
}
constexpr int32_t const& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxBRGInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBRGInstance;
}
constexpr void UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_set_maxBRGInstance(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBRGInstance = value;
}
constexpr int32_t& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxMeshCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxMeshCount;
}
constexpr int32_t const& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxMeshCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxMeshCount;
}
constexpr void UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_set_maxMeshCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxMeshCount = value;
}
constexpr int32_t& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxMaterialCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxMaterialCount;
}
constexpr int32_t const& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxMaterialCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxMaterialCount;
}
constexpr void UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_set_maxMaterialCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxMaterialCount = value;
}
constexpr int32_t& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxDrawCommandBatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDrawCommandBatch;
}
constexpr int32_t const& UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_get_maxDrawCommandBatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDrawCommandBatch;
}
constexpr void UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::__cordl_internal_set_maxDrawCommandBatch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDrawCommandBatch = value;
}
inline void UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::CreateBatchRenderGroupUsageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>(), { "CreateBatchRenderGroupUsageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::BatchRenderGroupUsageAnalytic() {}
