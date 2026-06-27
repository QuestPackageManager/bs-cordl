#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueType.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueType::StyleValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueType::StyleValueType()   {
}
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Invalid{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Keyword{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Float{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Dimension{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Color{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::ResourcePath{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::AssetReference{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Enum{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Variable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::String{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::Function{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::CommaSeparator{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::ScalableImage{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::UIElements::StyleValueType  UnityEngine::UIElements::StyleValueType::MissingAssetReference{static_cast<int32_t>(0xd)};
