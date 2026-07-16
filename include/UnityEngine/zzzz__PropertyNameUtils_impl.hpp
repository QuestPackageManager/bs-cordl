#pragma once
// IWYU pragma private; include "UnityEngine/PropertyNameUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PropertyNameUtils_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::PropertyNameUtils.PropertyNameFromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PropertyName (*)(::StringW)>(&::UnityEngine::PropertyNameUtils::PropertyNameFromString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6ad4dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PropertyNameUtils*>(), { "PropertyNameFromString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PropertyNameUtils.PropertyNameFromString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::PropertyName>)>(
    &::UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ad4ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::PropertyNameUtils*>(),
            { "PropertyNameFromString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::PropertyName UnityEngine::PropertyNameUtils::PropertyNameFromString(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PropertyNameUtils*>(), { "PropertyNameFromString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName>(nullptr, ___internal_method, name);
}
inline void UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::PropertyName> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::PropertyNameUtils*>(),
          { "PropertyNameFromString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::PropertyNameUtils::PropertyNameUtils() {}
