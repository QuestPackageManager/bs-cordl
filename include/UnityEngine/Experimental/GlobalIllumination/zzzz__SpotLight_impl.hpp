#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/SpotLight.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__AngularFalloffType_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__SpotLight_def.hpp"
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: Some("{}") }, CppParam { name: "angularFalloff", ty: "::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::SpotLight::SpotLight(int32_t  instanceID, bool  shadow, ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor, float_t  range, float_t  sphereRadius, float_t  coneAngle, float_t  innerConeAngle, ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff, ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType  angularFalloff) noexcept  {
this->instanceID = instanceID;
this->shadow = shadow;
this->mode = mode;
this->position = position;
this->orientation = orientation;
this->color = color;
this->indirectColor = indirectColor;
this->range = range;
this->sphereRadius = sphereRadius;
this->coneAngle = coneAngle;
this->innerConeAngle = innerConeAngle;
this->falloff = falloff;
this->angularFalloff = angularFalloff;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::SpotLight::SpotLight()   {
}
