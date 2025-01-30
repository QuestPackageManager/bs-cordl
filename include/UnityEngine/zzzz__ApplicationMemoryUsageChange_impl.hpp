#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationMemoryUsageChange.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_impl.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsageChange_def.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_def.hpp"
//  Writing Method size for method: ::UnityEngine::ApplicationMemoryUsageChange.set_memoryUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ApplicationMemoryUsageChange::*)(::UnityEngine::ApplicationMemoryUsage)>(
    &::UnityEngine::ApplicationMemoryUsageChange::set_memoryUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4865730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ApplicationMemoryUsageChange>::get(), "set_memoryUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ApplicationMemoryUsage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ApplicationMemoryUsageChange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ApplicationMemoryUsageChange::*)(::UnityEngine::ApplicationMemoryUsage)>(
    &::UnityEngine::ApplicationMemoryUsageChange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4863f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ApplicationMemoryUsageChange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ApplicationMemoryUsage>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ApplicationMemoryUsageChange::set_memoryUsage(::UnityEngine::ApplicationMemoryUsage value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ApplicationMemoryUsageChange>::get(), "set_memoryUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ApplicationMemoryUsage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ApplicationMemoryUsageChange::_ctor(::UnityEngine::ApplicationMemoryUsage usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ApplicationMemoryUsageChange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ApplicationMemoryUsage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
// Ctor Parameters [CppParam { name: "_memoryUsage_k__BackingField", ty: "::UnityEngine::ApplicationMemoryUsage", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ApplicationMemoryUsageChange::ApplicationMemoryUsageChange(::UnityEngine::ApplicationMemoryUsage _memoryUsage_k__BackingField) noexcept {
  this->_memoryUsage_k__BackingField = _memoryUsage_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ApplicationMemoryUsageChange::ApplicationMemoryUsageChange() {}
