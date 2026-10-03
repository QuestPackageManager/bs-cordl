#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IAudioGenerator.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__IAudioGenerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__IAudioGenerator_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::IAudioGenerator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance (::UnityEngine::Audio::IAudioGenerator::*)(
    ::UnityEngine::Audio::ControlContext, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>, ::UnityEngine::Audio::ProcessorInstance_CreationParameters)>(
    &::UnityEngine::Audio::IAudioGenerator::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator*>(), { ::i2c::class_of<::UnityEngine::Audio::IAudioGenerator*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::GeneratorInstance UnityEngine::Audio::IAudioGenerator::CreateInstance(::UnityEngine::Audio::ControlContext context,
                                                                                                   ::System::Nullable_1<::UnityEngine::Audio::AudioFormat> nestedFormat,
                                                                                                   ::UnityEngine::Audio::ProcessorInstance_CreationParameters creationParameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::IAudioGenerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance>(this, ___internal_method, context, nestedFormat, creationParameters);
}
/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr UnityEngine::Audio::IAudioGenerator::operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept {
  return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* UnityEngine::Audio::IAudioGenerator::i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept {
  return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::Audio::IAudioGenerator_Serializable.get_definition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::IAudioGenerator* (::UnityEngine::Audio::IAudioGenerator_Serializable::*)()>(
    &::UnityEngine::Audio::IAudioGenerator_Serializable::get_definition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6eabf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { "get_definition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::IAudioGenerator_Serializable.set_definition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::IAudioGenerator_Serializable::*)(::UnityEngine::Audio::IAudioGenerator*)>(
    &::UnityEngine::Audio::IAudioGenerator_Serializable::set_definition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6eabfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(),
                                                                                           { "set_definition", {}, { ::i2c::type_of<::UnityEngine::Audio::IAudioGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::IAudioGenerator_Serializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::IAudioGenerator_Serializable::*)(::UnityEngine::Audio::IAudioGenerator*)>(
    &::UnityEngine::Audio::IAudioGenerator_Serializable::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6eac064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::IAudioGenerator*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::IAudioGenerator* UnityEngine::Audio::IAudioGenerator_Serializable::get_definition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { "get_definition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::IAudioGenerator*>(*this, ___internal_method);
}
inline void UnityEngine::Audio::IAudioGenerator_Serializable::set_definition(::UnityEngine::Audio::IAudioGenerator* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { "set_definition", {}, { ::i2c::type_of<::UnityEngine::Audio::IAudioGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Audio::IAudioGenerator*>)
inline T UnityEngine::Audio::IAudioGenerator_Serializable::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { "Get", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Audio::IAudioGenerator*>)
inline void UnityEngine::Audio::IAudioGenerator_Serializable::Set(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { "Set", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::IAudioGenerator_Serializable::_ctor(::UnityEngine::Audio::IAudioGenerator* audioGenerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::IAudioGenerator_Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::IAudioGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, audioGenerator);
}
// Ctor Parameters [CppParam { name: "Reference", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::IAudioGenerator_Serializable::IAudioGenerator_Serializable(::UnityW<::UnityEngine::Object> Reference) noexcept {
  this->Reference = Reference;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::IAudioGenerator_Serializable::IAudioGenerator_Serializable() {}
