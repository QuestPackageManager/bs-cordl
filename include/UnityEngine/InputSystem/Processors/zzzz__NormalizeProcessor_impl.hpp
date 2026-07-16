#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/NormalizeProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__NormalizeProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Processors::NormalizeProcessor::*)(float_t, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::Processors::NormalizeProcessor::Process)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b93c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeProcessor.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::InputSystem::Processors::NormalizeProcessor::Normalize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65b93d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(),
                                                             { "Normalize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeProcessor.Denormalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::InputSystem::Processors::NormalizeProcessor::Denormalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65b94b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(),
                                                             { "Denormalize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeProcessor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::NormalizeProcessor::*)()>(
    &::UnityEngine::InputSystem::Processors::NormalizeProcessor::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65b94f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::NormalizeProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::NormalizeProcessor::*)()>(&::UnityEngine::InputSystem::Processors::NormalizeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65b95d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
constexpr float_t& UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_get_zero() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zero;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_get_zero() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zero;
}
constexpr void UnityEngine::InputSystem::Processors::NormalizeProcessor::__cordl_internal_set_zero(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zero = value;
}
inline float_t UnityEngine::InputSystem::Processors::NormalizeProcessor::Process(float_t value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, control);
}
inline float_t UnityEngine::InputSystem::Processors::NormalizeProcessor::Normalize(float_t value, float_t min, float_t max, float_t zero) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(),
                                                           { "Normalize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, min, max, zero);
}
inline float_t UnityEngine::InputSystem::Processors::NormalizeProcessor::Denormalize(float_t value, float_t min, float_t max, float_t zero) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(),
                                                           { "Denormalize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, min, max, zero);
}
inline ::StringW UnityEngine::InputSystem::Processors::NormalizeProcessor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::NormalizeProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::NormalizeProcessor* UnityEngine::InputSystem::Processors::NormalizeProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::NormalizeProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::NormalizeProcessor::NormalizeProcessor() {}
