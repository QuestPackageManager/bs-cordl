#pragma once
// IWYU pragma private; include "UnityEngine/PenData.hpp"
#include "UnityEngine/zzzz__PenEventType_impl.hpp"
#include "UnityEngine/zzzz__PenStatus_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__PenData_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "penStatus", ty: "::UnityEngine::PenStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contactType", ty: "::UnityEngine::PenEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PenData::PenData(::UnityEngine::Vector2  position, ::UnityEngine::Vector2  tilt, ::UnityEngine::PenStatus  penStatus, float_t  twist, float_t  pressure, ::UnityEngine::PenEventType  contactType, ::UnityEngine::Vector2  deltaPos) noexcept  {
this->position = position;
this->tilt = tilt;
this->penStatus = penStatus;
this->twist = twist;
this->pressure = pressure;
this->contactType = contactType;
this->deltaPos = deltaPos;
}
// Ctor Parameters []
constexpr ::UnityEngine::PenData::PenData()   {
}
