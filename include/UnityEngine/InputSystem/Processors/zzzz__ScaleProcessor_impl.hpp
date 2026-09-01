#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Processors\ScaleProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__ScaleProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::ScaleProcessor::*)(float_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Processors::ScaleProcessor::Process)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bf0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleProcessor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::ScaleProcessor::*)()>(&::UnityEngine::InputSystem::Processors::ScaleProcessor::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65bf0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::ScaleProcessor::*)()>(&::UnityEngine::InputSystem::Processors::ScaleProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65bf16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleProcessor::__cordl_internal_get_factor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factor;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleProcessor::__cordl_internal_get_factor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factor;
}
constexpr void UnityEngine::InputSystem::Processors::ScaleProcessor::__cordl_internal_set_factor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factor = value;
}
inline float_t UnityEngine::InputSystem::Processors::ScaleProcessor::Process(float_t value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::ScaleProcessor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::ScaleProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::ScaleProcessor* UnityEngine::InputSystem::Processors::ScaleProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::ScaleProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::ScaleProcessor::ScaleProcessor() {}
