#pragma once
// IWYU pragma private; include "GlobalNamespace/OpenXRRuntimeBasedActionBindingComposite.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "GlobalNamespace/zzzz__OpenXRRuntimeBasedActionBindingComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x585e2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.ReadOculusRuntimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadOculusRuntimeValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x585e370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(),
                                                             { "ReadOculusRuntimeValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.ReadOtherRuntimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadOtherRuntimeValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x585e3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(),
                                                             { "ReadOtherRuntimeValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x585e428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585e4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)()>(&::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x585e4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__cordl_internal_get_oculusRuntime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRuntime;
}
constexpr int32_t const& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__cordl_internal_get_oculusRuntime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRuntime;
}
constexpr void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__cordl_internal_set_oculusRuntime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oculusRuntime = value;
}
constexpr int32_t& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__cordl_internal_get_otherRuntimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRuntimes;
}
constexpr int32_t const& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__cordl_internal_get_otherRuntimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRuntimes;
}
constexpr void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__cordl_internal_set_otherRuntimes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherRuntimes = value;
}
inline float_t GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline float_t GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadOculusRuntimeValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(),
                                                           { "ReadOculusRuntimeValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline float_t GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadOtherRuntimeValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(),
                                                           { "ReadOtherRuntimeValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline float_t GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite* GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::OpenXRRuntimeBasedActionBindingComposite() {}
