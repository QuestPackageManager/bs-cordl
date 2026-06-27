#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/NotificationFlags.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::NotificationFlags::NotificationFlags(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::NotificationFlags::NotificationFlags()   {
}
constexpr ::UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::TriggerInEditMode{static_cast<int16_t>(0x1)};
constexpr ::UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::Retroactive{static_cast<int16_t>(0x2)};
constexpr ::UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::TriggerOnce{static_cast<int16_t>(0x4)};
