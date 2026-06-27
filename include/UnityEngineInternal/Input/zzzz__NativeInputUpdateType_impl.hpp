#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputUpdateType.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType::NativeInputUpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType::NativeInputUpdateType()   {
}
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::Dynamic{static_cast<int32_t>(0x1)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::Fixed{static_cast<int32_t>(0x2)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::BeforeRender{static_cast<int32_t>(0x4)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::Editor{static_cast<int32_t>(0x8)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::IgnoreFocus{static_cast<int32_t>(0x80000000)};
