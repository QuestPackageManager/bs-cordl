#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\LowLevel\AndroidSensorState.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer::AndroidSensorState__data_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer::AndroidSensorState__data_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.WithData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)(
    ::ArrayW<float_t>)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65ad088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>(), { "WithData", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65ad148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::getStaticF_kFormat() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>();
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData(::ArrayW<float_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>(), { "WithData", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>(*this, ___internal_method, data);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::AndroidSensorState(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::AndroidSensorState() {}
