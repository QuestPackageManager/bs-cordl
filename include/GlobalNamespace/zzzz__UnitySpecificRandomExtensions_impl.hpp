#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySpecificRandomExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnitySpecificRandomExtensions_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnitySpecificRandomExtensions.InsideUnitSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::UnitySpecificRandomExtensions::InsideUnitSphere)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x33256f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySpecificRandomExtensions*>(), { "InsideUnitSphere", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnitySpecificRandomExtensions.OnUnitSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::UnitySpecificRandomExtensions::OnUnitSphere)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3325784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySpecificRandomExtensions*>(), { "OnUnitSphere", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::UnitySpecificRandomExtensions::InsideUnitSphere(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySpecificRandomExtensions*>(), { "InsideUnitSphere", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, random);
}
inline ::UnityEngine::Vector3 GlobalNamespace::UnitySpecificRandomExtensions::OnUnitSphere(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnitySpecificRandomExtensions*>(), { "OnUnitSphere", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, random);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnitySpecificRandomExtensions::UnitySpecificRandomExtensions() {}
