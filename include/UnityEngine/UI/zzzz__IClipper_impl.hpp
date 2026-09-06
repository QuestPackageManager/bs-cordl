#pragma once
// IWYU pragma private; include "UnityEngine/UI/IClipper.hpp"
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IClipper.PerformClipping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::IClipper::*)()>(&::UnityEngine::UI::IClipper::PerformClipping)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IClipper*>(), { ::i2c::class_of<::UnityEngine::UI::IClipper*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::IClipper::PerformClipping() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IClipper*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
