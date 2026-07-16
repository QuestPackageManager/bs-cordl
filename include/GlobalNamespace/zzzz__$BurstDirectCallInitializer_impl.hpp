#pragma once
// IWYU pragma private; include "GlobalNamespace/$BurstDirectCallInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__$BurstDirectCallInitializer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::$BurstDirectCallInitializer.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::$BurstDirectCallInitializer::Initialize)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x64cab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::$BurstDirectCallInitializer*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::$BurstDirectCallInitializer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::$BurstDirectCallInitializer*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::$BurstDirectCallInitializer::$BurstDirectCallInitializer() {}
