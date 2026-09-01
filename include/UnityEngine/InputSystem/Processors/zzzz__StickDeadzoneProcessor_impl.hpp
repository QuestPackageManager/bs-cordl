#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Processors\StickDeadzoneProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__StickDeadzoneProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor.get_minOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_minOrDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65bf400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { "get_minOrDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor.get_maxOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_maxOrDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65bf474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { "get_maxOrDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)(
    ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::Process)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65bf4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor.GetDeadZoneAdjustedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)(float_t)>(
    &::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::GetDeadZoneAdjustedValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65bf5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { "GetDeadZoneAdjustedValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65bf630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65bf6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline float_t UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_minOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { "get_minOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_maxOrDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { "get_maxOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, value, control);
}
inline float_t UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::GetDeadZoneAdjustedValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { "GetDeadZoneAdjustedValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor* UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::StickDeadzoneProcessor() {}
