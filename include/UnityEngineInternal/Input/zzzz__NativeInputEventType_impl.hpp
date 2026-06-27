#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputEventType.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEventType::NativeInputEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputEventType::NativeInputEventType()   {
}
constexpr ::UnityEngineInternal::Input::NativeInputEventType  UnityEngineInternal::Input::NativeInputEventType::DeviceRemoved{static_cast<int32_t>(0x4452454d)};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  UnityEngineInternal::Input::NativeInputEventType::DeviceConfigChanged{static_cast<int32_t>(0x44434647)};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  UnityEngineInternal::Input::NativeInputEventType::Text{static_cast<int32_t>(0x54455854)};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  UnityEngineInternal::Input::NativeInputEventType::State{static_cast<int32_t>(0x53544154)};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  UnityEngineInternal::Input::NativeInputEventType::Delta{static_cast<int32_t>(0x444c5441)};
