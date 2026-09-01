#pragma once
// IWYU pragma private; include "UnityEngine\ClassLibraryInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ClassLibraryInitializer_def.hpp"
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ClassLibraryInitializer::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6adcba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ClassLibraryInitializer*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ClassLibraryInitializer::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ClassLibraryInitializer*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ClassLibraryInitializer::ClassLibraryInitializer() {}
