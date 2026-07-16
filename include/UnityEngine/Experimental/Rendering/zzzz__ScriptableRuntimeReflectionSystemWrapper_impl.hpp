#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/ScriptableRuntimeReflectionSystemWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ScriptableRuntimeReflectionSystemWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper.get_implementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* (
    ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)()>(&::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(), { "get_implementation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper.set_implementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)(
    ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)>(&::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2d7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(),
                                                             { "set_implementation", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper.Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)(::by_ref<bool>)>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b2d7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(),
                                                             { "Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)()>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2d7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*&
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::__cordl_internal_get__implementation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementation_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* const&
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::__cordl_internal_get__implementation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementation_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::__cordl_internal_set__implementation_k__BackingField(
    ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementation_k__BackingField = value;
}
inline ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(), { "get_implementation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(),
                                                           { "set_implementation", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(::by_ref<bool> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(),
                                                           { "Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::ScriptableRuntimeReflectionSystemWrapper() {}
