#pragma once
// IWYU pragma private; include "UnityEngine\ApplicationMemoryUsageChange.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_impl.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsageChange_def.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_def.hpp"
//  Writing Method size for method: ::UnityEngine::ApplicationMemoryUsageChange.set_memoryUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ApplicationMemoryUsageChange::*)(::UnityEngine::ApplicationMemoryUsage)>(
    &::UnityEngine::ApplicationMemoryUsageChange::set_memoryUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a69638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ApplicationMemoryUsageChange>(), { "set_memoryUsage", {}, { ::i2c::type_of<::UnityEngine::ApplicationMemoryUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ApplicationMemoryUsageChange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ApplicationMemoryUsageChange::*)(::UnityEngine::ApplicationMemoryUsage)>(
    &::UnityEngine::ApplicationMemoryUsageChange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a68148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ApplicationMemoryUsageChange>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ApplicationMemoryUsage>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ApplicationMemoryUsageChange::set_memoryUsage(::UnityEngine::ApplicationMemoryUsage value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ApplicationMemoryUsageChange>(), { "set_memoryUsage", {}, { ::i2c::type_of<::UnityEngine::ApplicationMemoryUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ApplicationMemoryUsageChange::_ctor(::UnityEngine::ApplicationMemoryUsage usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ApplicationMemoryUsageChange>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ApplicationMemoryUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage);
}
// Ctor Parameters [CppParam { name: "_memoryUsage_k__BackingField", ty: "::UnityEngine::ApplicationMemoryUsage", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ApplicationMemoryUsageChange::ApplicationMemoryUsageChange(::UnityEngine::ApplicationMemoryUsage _memoryUsage_k__BackingField) noexcept {
  this->_memoryUsage_k__BackingField = _memoryUsage_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ApplicationMemoryUsageChange::ApplicationMemoryUsageChange() {}
