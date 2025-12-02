#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/BatchRenderGroupUsageAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__BatchRenderGroupUsageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::*)()>(
    &::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68d394c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic.CreateBatchRenderGroupUsageAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* (*)()>(
    &::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::CreateBatchRenderGroupUsageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68d39c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>::get(),
                                                 "CreateBatchRenderGroupUsageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::CreateBatchRenderGroupUsageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>::get(),
                                               "CreateBatchRenderGroupUsageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic::BatchRenderGroupUsageAnalytic() {}
