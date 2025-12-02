#pragma once
// IWYU pragma private; include "UnityEngine/BatchRendererGroupRuntimeAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/zzzz__BatchRendererGroupRuntimeAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::BatchRendererGroupRuntimeAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::BatchRendererGroupRuntimeAnalytic::*)()>(
    &::UnityEngine::BatchRendererGroupRuntimeAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6835cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BatchRendererGroupRuntimeAnalytic.CreateBatchRendererGroupRuntimeAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BatchRendererGroupRuntimeAnalytic* (*)()>(
    &::UnityEngine::BatchRendererGroupRuntimeAnalytic::CreateBatchRendererGroupRuntimeAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6835d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>::get(),
                                                 "CreateBatchRendererGroupRuntimeAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::BatchRendererGroupRuntimeAnalytic* UnityEngine::BatchRendererGroupRuntimeAnalytic::CreateBatchRendererGroupRuntimeAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>::get(),
                                               "CreateBatchRendererGroupRuntimeAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BatchRendererGroupRuntimeAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::BatchRendererGroupRuntimeAnalytic* UnityEngine::BatchRendererGroupRuntimeAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::BatchRendererGroupRuntimeAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::BatchRendererGroupRuntimeAnalytic::BatchRendererGroupRuntimeAnalytic() {}
