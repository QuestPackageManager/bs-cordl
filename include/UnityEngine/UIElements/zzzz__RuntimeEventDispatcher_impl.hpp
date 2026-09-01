#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\RuntimeEventDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimeEventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimeEventDispatcher.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventDispatcher* (*)()>(&::UnityEngine::UIElements::RuntimeEventDispatcher::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dadbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimeEventDispatcher*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::RuntimeEventDispatcher::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimeEventDispatcher*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimeEventDispatcher::RuntimeEventDispatcher() {}
