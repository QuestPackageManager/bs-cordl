#pragma once
// IWYU pragma private; include "UnityEngine/DrivenTransformProperties.hpp"
#include "UnityEngine/zzzz__DrivenTransformProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DrivenTransformProperties::DrivenTransformProperties(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::DrivenTransformProperties::DrivenTransformProperties()   {
}
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::All{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPositionX{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPositionY{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPositionZ{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Rotation{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::ScaleX{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::ScaleY{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::ScaleZ{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMinX{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMinY{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMaxX{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMaxY{static_cast<int32_t>(0x800)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::SizeDeltaX{static_cast<int32_t>(0x1000)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::SizeDeltaY{static_cast<int32_t>(0x2000)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::PivotX{static_cast<int32_t>(0x4000)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::PivotY{static_cast<int32_t>(0x8000)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPosition{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchoredPosition3D{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Scale{static_cast<int32_t>(0xe0)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMin{static_cast<int32_t>(0x300)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::AnchorMax{static_cast<int32_t>(0xc00)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Anchors{static_cast<int32_t>(0xf00)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::SizeDelta{static_cast<int32_t>(0x3000)};
constexpr ::UnityEngine::DrivenTransformProperties  UnityEngine::DrivenTransformProperties::Pivot{static_cast<int32_t>(0xc000)};
