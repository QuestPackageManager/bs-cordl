#pragma once
// IWYU pragma private; include "UnityEngine/UnityEngineModuleAssembly.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__UnityEngineModuleAssembly_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnityEngineModuleAssembly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnityEngineModuleAssembly::*)()>(&::UnityEngine::UnityEngineModuleAssembly::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb28d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnityEngineModuleAssembly*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UnityEngineModuleAssembly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnityEngineModuleAssembly*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UnityEngineModuleAssembly* UnityEngine::UnityEngineModuleAssembly::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UnityEngineModuleAssembly*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UnityEngineModuleAssembly::UnityEngineModuleAssembly() {}
