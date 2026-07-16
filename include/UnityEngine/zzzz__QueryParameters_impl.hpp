#pragma once
// IWYU pragma private; include "UnityEngine/QueryParameters.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
//  Writing Method size for method: ::UnityEngine::QueryParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::QueryParameters::*)(int32_t, bool, ::UnityEngine::QueryTriggerInteraction, bool)>(&::UnityEngine::QueryParameters::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b92900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::QueryParameters>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QueryParameters.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryParameters (*)()>(&::UnityEngine::QueryParameters::get_Default)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b92914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QueryParameters>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::QueryParameters::_ctor(int32_t layerMask, bool hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction hitTriggers, bool hitBackfaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::QueryParameters>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerMask, hitMultipleFaces, hitTriggers, hitBackfaces);
}
inline ::UnityEngine::QueryParameters UnityEngine::QueryParameters::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QueryParameters>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryParameters>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hitMultipleFaces", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "hitTriggers", ty: "::UnityEngine::QueryTriggerInteraction", modifiers: "", def_value: Some("{}") }, CppParam { name: "hitBackfaces", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::QueryParameters::QueryParameters(int32_t layerMask, bool hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction hitTriggers, bool hitBackfaces) noexcept {
  this->layerMask = layerMask;
  this->hitMultipleFaces = hitMultipleFaces;
  this->hitTriggers = hitTriggers;
  this->hitBackfaces = hitBackfaces;
}
// Ctor Parameters []
constexpr ::UnityEngine::QueryParameters::QueryParameters() {}
