#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\RuntimeUIElementsBridge.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsBridge_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimeUIElementsBridge_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimeUIElementsBridge.SetWantsMouseJumping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimeUIElementsBridge::*)(int32_t)>(
    &::UnityEngine::UIElements::RuntimeUIElementsBridge::SetWantsMouseJumping)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimeUIElementsBridge*>(), { ::i2c::class_of<::UnityEngine::UIElements::RuntimeUIElementsBridge*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimeUIElementsBridge._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimeUIElementsBridge::*)()>(&::UnityEngine::UIElements::RuntimeUIElementsBridge::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb3510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimeUIElementsBridge*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RuntimeUIElementsBridge::SetWantsMouseJumping(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RuntimeUIElementsBridge*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RuntimeUIElementsBridge::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimeUIElementsBridge*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RuntimeUIElementsBridge* UnityEngine::UIElements::RuntimeUIElementsBridge::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RuntimeUIElementsBridge*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimeUIElementsBridge::RuntimeUIElementsBridge() {}
