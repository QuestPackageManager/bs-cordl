#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/IUpdateReceiver.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::IUpdateReceiver.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::IUpdateReceiver::*)(float_t)>(&::UnityEngine::ResourceManagement::IUpdateReceiver::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>(), { ::i2c::class_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::IUpdateReceiver::Update(float_t unscaledDeltaTime) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
