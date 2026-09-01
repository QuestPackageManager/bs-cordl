#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Processors\InvertVector3Processor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__InvertVector3Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)(
    ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::InvertVector3Processor::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65bea84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::InvertVector3Processor::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65beab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::InvertVector3Processor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65beb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertX;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertX;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_set_invertX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertX = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertY;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertY;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_set_invertY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertY = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertZ;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_get_invertZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertZ;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__cordl_internal_set_invertZ(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertZ = value;
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::InvertVector3Processor::Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::InvertVector3Processor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::InvertVector3Processor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::InvertVector3Processor* UnityEngine::InputSystem::Processors::InvertVector3Processor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::InvertVector3Processor::InvertVector3Processor() {}
