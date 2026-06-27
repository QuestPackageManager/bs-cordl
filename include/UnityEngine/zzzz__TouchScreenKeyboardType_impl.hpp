#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboardType.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchScreenKeyboardType::TouchScreenKeyboardType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TouchScreenKeyboardType::TouchScreenKeyboardType()   {
}
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::ASCIICapable{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NumbersAndPunctuation{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::URL{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NumberPad{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::PhonePad{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NamePhonePad{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::EmailAddress{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NintendoNetworkAccount{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::Social{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::Search{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::DecimalPad{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::OneTimeCode{static_cast<int32_t>(0xc)};
