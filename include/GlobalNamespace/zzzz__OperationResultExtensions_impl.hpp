#pragma once
// IWYU pragma private; include "GlobalNamespace/OperationResultExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OperationResultExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OperationResultExtensions.IsSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OperationResultExtensions::IsSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5edbf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OperationResultExtensions*>(),
                                                                                           { "IsSuccess", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OperationResultExtensions.IsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OperationResultExtensions::IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edbf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OperationResultExtensions*>(),
                                                                                           { "IsError", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OperationResultExtensions.IsWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OperationResultExtensions::IsWarning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5edbf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OperationResultExtensions*>(),
                                                                                           { "IsWarning", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OperationResultExtensions::IsSuccess(::GlobalNamespace::OVRSpatialAnchor_OperationResult res) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OperationResultExtensions*>(),
                                                                                         { "IsSuccess", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, res);
}
inline bool GlobalNamespace::OperationResultExtensions::IsError(::GlobalNamespace::OVRSpatialAnchor_OperationResult res) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OperationResultExtensions*>(),
                                                                                         { "IsError", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, res);
}
inline bool GlobalNamespace::OperationResultExtensions::IsWarning(::GlobalNamespace::OVRSpatialAnchor_OperationResult res) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OperationResultExtensions*>(),
                                                                                         { "IsWarning", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, res);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OperationResultExtensions::OperationResultExtensions() {}
