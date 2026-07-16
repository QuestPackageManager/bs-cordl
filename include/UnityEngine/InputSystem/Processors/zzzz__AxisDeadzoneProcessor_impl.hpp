#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/AxisDeadzoneProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__AxisDeadzoneProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.get_minOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_minOrDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65b8834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), { "get_minOrDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.get_maxOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_maxOrDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65b88a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), { "get_maxOrDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)(float_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::Process)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65b891c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65b898c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65b8a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_minOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), { "get_minOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_maxOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), { "get_maxOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::Process(float_t value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor* UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::AxisDeadzoneProcessor() {}
