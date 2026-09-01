#pragma once
// IWYU pragma private; include "UnityEngine\UI\IMaskable.hpp"
#include "UnityEngine/UI/zzzz__IMaskable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IMaskable.RecalculateMasking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::IMaskable::*)()>(&::UnityEngine::UI::IMaskable::RecalculateMasking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IMaskable*>(), { ::i2c::class_of<::UnityEngine::UI::IMaskable*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::IMaskable::RecalculateMasking() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IMaskable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
