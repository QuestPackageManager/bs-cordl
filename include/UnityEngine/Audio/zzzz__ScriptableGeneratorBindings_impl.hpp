#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableGeneratorBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__ScriptableGeneratorBindings_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableGeneratorBindings.InstantiateGeneratorFromObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::by_ref<::UnityEngine::Audio::ControlHeader>, ::by_ref<::UnityEngine::Audio::GeneratorInstance>)>(
    &::UnityEngine::Audio::ScriptableGeneratorBindings::InstantiateGeneratorFromObject)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x6eac120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                                                             { "InstantiateGeneratorFromObject",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableGeneratorBindings.InitializeGeneratorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader*, ::UnityEngine::Audio::ControlHeader*, ::UnityEngine::AudioConfiguration*,
                                                                ::UnityEngine::Audio::ProcessorInstance_InitializationFlags)>(
    &::UnityEngine::Audio::ScriptableGeneratorBindings::InitializeGeneratorHandle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6eac8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                                                { "InitializeGeneratorHandle",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_GeneratorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(),
                                                    ::i2c::type_of<::UnityEngine::AudioConfiguration*>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableGeneratorBindings.InternalInitializeGeneratorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, ::UnityEngine::AudioConfiguration*, ::UnityEngine::Audio::ProcessorInstance_InitializationFlags)>(
    &::UnityEngine::Audio::ScriptableGeneratorBindings::InternalInitializeGeneratorHandle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6eac91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                                                                                           { "InternalInitializeGeneratorHandle",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::AudioConfiguration*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::ScriptableGeneratorBindings::InstantiateGeneratorFromObject(::UnityEngine::Object* generatorObjectDefinition, ::by_ref<::UnityEngine::Audio::ControlHeader> control,
                                                                                            ::by_ref<::UnityEngine::Audio::GeneratorInstance> runtimeHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                                                                                         { "InstantiateGeneratorFromObject",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, generatorObjectDefinition, control, runtimeHandle);
}
inline void UnityEngine::Audio::ScriptableGeneratorBindings::InitializeGeneratorHandle(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader* header, ::UnityEngine::Audio::ControlHeader* control,
                                                                                       ::UnityEngine::AudioConfiguration* nestedConfiguration,
                                                                                       ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                                              { "InitializeGeneratorHandle",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_GeneratorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(),
                                                  ::i2c::type_of<::UnityEngine::AudioConfiguration*>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, control, nestedConfiguration, flags);
}
inline void UnityEngine::Audio::ScriptableGeneratorBindings::InternalInitializeGeneratorHandle(void* header, void* control, ::UnityEngine::AudioConfiguration* nestedConfiguration,
                                                                                               ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableGeneratorBindings*>(),
                                                                                         { "InternalInitializeGeneratorHandle",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::AudioConfiguration*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, control, nestedConfiguration, flags);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ScriptableGeneratorBindings::ScriptableGeneratorBindings() {}
