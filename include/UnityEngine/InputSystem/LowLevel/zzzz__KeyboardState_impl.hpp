#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/KeyboardState.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__KeyboardState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__KeyboardState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer::KeyboardState__keys_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer::KeyboardState__keys_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::KeyboardState.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::KeyboardState::get_Format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a89e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::KeyboardState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::KeyboardState::*)(::ArrayW<::UnityEngine::InputSystem::Key>)>(
    &::UnityEngine::InputSystem::LowLevel::KeyboardState::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x65a89ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Key>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::KeyboardState.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::KeyboardState::*)(::UnityEngine::InputSystem::Key, bool)>(
    &::UnityEngine::InputSystem::LowLevel::KeyboardState::Set)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65a8ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(),
                                                                                           { "Set", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::KeyboardState.Press
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::KeyboardState::*)(::UnityEngine::InputSystem::Key)>(
    &::UnityEngine::InputSystem::LowLevel::KeyboardState::Press)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65a8b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "Press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::KeyboardState.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::KeyboardState::*)(::UnityEngine::InputSystem::Key)>(
    &::UnityEngine::InputSystem::LowLevel::KeyboardState::Release)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65a8b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::KeyboardState.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::KeyboardState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::KeyboardState::get_format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a8b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::KeyboardState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::KeyboardState::_ctor(::ArrayW<::UnityEngine::InputSystem::Key> pressedKeys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Key>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pressedKeys);
}
inline void UnityEngine::InputSystem::LowLevel::KeyboardState::Set(::UnityEngine::InputSystem::Key key, bool state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(),
                                                                                         { "Set", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, state);
}
inline void UnityEngine::InputSystem::LowLevel::KeyboardState::Press(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "Press", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
inline void UnityEngine::InputSystem::LowLevel::KeyboardState::Release(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::KeyboardState::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::KeyboardState>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::KeyboardState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::KeyboardState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "keys", ty: "::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::KeyboardState::KeyboardState(::UnityEngine::InputSystem::LowLevel::KeyboardState__keys_e__FixedBuffer keys) noexcept {
  this->keys = keys;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::KeyboardState::KeyboardState() {}
