#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsInitialization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsInitialization_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsInitialization.InitializeUIElementsManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsInitialization::InitializeUIElementsManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6caff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsInitialization*>(), { "InitializeUIElementsManaged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsInitialization.RegisterBuiltInPropertyBags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsInitialization::RegisterBuiltInPropertyBags)> {
  constexpr static std::size_t size = 0x15f8;
  constexpr static std::size_t addrs = 0x6caff90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsInitialization*>(), { "RegisterBuiltInPropertyBags", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIElementsInitialization::InitializeUIElementsManaged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsInitialization*>(), { "InitializeUIElementsManaged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsInitialization::RegisterBuiltInPropertyBags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsInitialization*>(), { "RegisterBuiltInPropertyBags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsInitialization::UIElementsInitialization() {}
