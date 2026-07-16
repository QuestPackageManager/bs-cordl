#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRGraphicsAutomatedTests.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__XRGraphicsAutomatedTests_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayout_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::XRGraphicsAutomatedTests.get_activatedFromCommandLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRGraphicsAutomatedTests::get_activatedFromCommandLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(), { "get_activatedFromCommandLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRGraphicsAutomatedTests.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRGraphicsAutomatedTests::get_enabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67c9d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRGraphicsAutomatedTests.OverrideLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::XRGraphicsAutomatedTests::OverrideLayout)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x67c9dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(),
                                                { "OverrideLayout", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::XRGraphicsAutomatedTests::setStaticF__enabled_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<enabled>k__BackingField", ::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::getStaticF__enabled_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<enabled>k__BackingField", ::UnityEngine::Rendering::XRGraphicsAutomatedTests*>();
}
inline void UnityEngine::Rendering::XRGraphicsAutomatedTests::setStaticF_running(bool value) {
  ::cordl_internals::setStaticField<bool, "running", ::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::getStaticF_running() {
  return ::cordl_internals::getStaticField<bool, "running", ::UnityEngine::Rendering::XRGraphicsAutomatedTests*>();
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::get_activatedFromCommandLine() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(), { "get_activatedFromCommandLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::XRGraphicsAutomatedTests::OverrideLayout(::UnityEngine::Experimental::Rendering::XRLayout* layout, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>(),
                                              { "OverrideLayout", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRLayout*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, layout, camera);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::XRGraphicsAutomatedTests::XRGraphicsAutomatedTests() {}
