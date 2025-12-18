#pragma once
// IWYU pragma private; include "GlobalNamespace/OperationResultExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OperationResultExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OperationResultExtensions.IsSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::OperationResultExtensions::IsSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d2fcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OperationResultExtensions*>::get(), "IsSuccess", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OperationResultExtensions.IsError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::OperationResultExtensions::IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2fcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OperationResultExtensions*>::get(), "IsError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OperationResultExtensions.IsWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::OperationResultExtensions::IsWarning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d2fd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OperationResultExtensions*>::get(), "IsWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OperationResultExtensions::IsSuccess(::GlobalNamespace::OVRSpatialAnchor_OperationResult res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OperationResultExtensions*>::get(), "IsSuccess", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, res);
}
inline bool GlobalNamespace::OperationResultExtensions::IsError(::GlobalNamespace::OVRSpatialAnchor_OperationResult res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OperationResultExtensions*>::get(), "IsError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, res);
}
inline bool GlobalNamespace::OperationResultExtensions::IsWarning(::GlobalNamespace::OVRSpatialAnchor_OperationResult res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OperationResultExtensions*>::get(), "IsWarning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, res);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OperationResultExtensions::OperationResultExtensions() {}
