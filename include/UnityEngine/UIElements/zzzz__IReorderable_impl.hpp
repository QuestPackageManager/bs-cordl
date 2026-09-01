#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IReorderable.hpp"
#include "UnityEngine/UIElements/zzzz__IReorderable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IReorderable.get_enableReordering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IReorderable::*)()>(&::UnityEngine::UIElements::IReorderable::get_enableReordering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IReorderable*>(), { ::i2c::class_of<::UnityEngine::UIElements::IReorderable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IReorderable.set_enableReordering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IReorderable::*)(bool)>(&::UnityEngine::UIElements::IReorderable::set_enableReordering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IReorderable*>(), { ::i2c::class_of<::UnityEngine::UIElements::IReorderable*>(), 1 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IReorderable::get_enableReordering() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IReorderable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IReorderable::set_enableReordering(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IReorderable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
