#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidInputSource.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidInputSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::AndroidInputSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::AndroidInputSource()   {
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Keyboard{static_cast<int32_t>(0x101)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Dpad{static_cast<int32_t>(0x201)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Gamepad{static_cast<int32_t>(0x401)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Touchscreen{static_cast<int32_t>(0x1002)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Mouse{static_cast<int32_t>(0x2002)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Stylus{static_cast<int32_t>(0x4002)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Trackball{static_cast<int32_t>(0x10004)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Touchpad{static_cast<int32_t>(0x100008)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Joystick{static_cast<int32_t>(0x1000010)};
