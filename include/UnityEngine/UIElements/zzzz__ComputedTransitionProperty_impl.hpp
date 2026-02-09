#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ComputedTransitionProperty.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedTransitionProperty_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ComputedTransitionProperty::ComputedTransitionProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) noexcept  {
this->id = id;
this->durationMs = durationMs;
this->delayMs = delayMs;
this->easingCurve = easingCurve;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ComputedTransitionProperty::ComputedTransitionProperty()   {
}
