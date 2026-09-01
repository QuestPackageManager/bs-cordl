#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Processors\ScaleVector2Processor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__ScaleVector2Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector2Processor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Processors::ScaleVector2Processor::*)(
    ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::ScaleVector2Processor::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65bf1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector2Processor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::ScaleVector2Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::ScaleVector2Processor::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65bf1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector2Processor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::ScaleVector2Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::ScaleVector2Processor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65bf278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void UnityEngine::InputSystem::Processors::ScaleVector2Processor::__cordl_internal_set_x(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void UnityEngine::InputSystem::Processors::ScaleVector2Processor::__cordl_internal_set_y(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Processors::ScaleVector2Processor::Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::ScaleVector2Processor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::ScaleVector2Processor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::ScaleVector2Processor* UnityEngine::InputSystem::Processors::ScaleVector2Processor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::ScaleVector2Processor::ScaleVector2Processor() {}
