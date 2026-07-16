#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/IntegerControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::IntegerControl::*)()>(&::UnityEngine::InputSystem::Controls::IntegerControl::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64f6518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::IntegerControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::IntegerControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64f659c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::IntegerControl::*)(int32_t, void*)>(
    &::UnityEngine::InputSystem::Controls::IntegerControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64f6648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl.CalculateOptimizedControlDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Controls::IntegerControl::*)()>(
    &::UnityEngine::InputSystem::Controls::IntegerControl::CalculateOptimizedControlDataType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x64f66fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Controls::IntegerControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Controls::IntegerControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::IntegerControl::WriteValueIntoState(int32_t value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Controls::IntegerControl::CalculateOptimizedControlDataType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::IntegerControl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::Controls::IntegerControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::IntegerControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl::IntegerControl() {}
