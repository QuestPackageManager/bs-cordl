#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/InvertProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__InvertProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::InvertProcessor::*)(float_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Processors::InvertProcessor::Process)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b90c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertProcessor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::InvertProcessor::*)()>(&::UnityEngine::InputSystem::Processors::InvertProcessor::ToString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65b90cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::InvertProcessor::*)()>(&::UnityEngine::InputSystem::Processors::InvertProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65b9110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::InputSystem::Processors::InvertProcessor::Process(float_t value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::InvertProcessor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::InvertProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::InvertProcessor* UnityEngine::InputSystem::Processors::InvertProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::InvertProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::InvertProcessor::InvertProcessor() {}
