#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FillGradient.hpp"
#include "UnityEngine/UIElements/zzzz__AddressMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FillGradient_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
// Ctor Parameters [CppParam { name: "_gradient_k__BackingField", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_gradientType_k__BackingField", ty: "::UnityEngine::UIElements::GradientType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_addressMode_k__BackingField", ty:
// "::UnityEngine::UIElements::AddressMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_start_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_end_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_center_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_focus_k__BackingField", ty: "::UnityEngine::Vector2", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::FillGradient::FillGradient(::UnityEngine::Gradient* _gradient_k__BackingField, ::UnityEngine::UIElements::GradientType _gradientType_k__BackingField,
                                                                ::UnityEngine::UIElements::AddressMode _addressMode_k__BackingField, ::UnityEngine::Vector2 _start_k__BackingField,
                                                                ::UnityEngine::Vector2 _end_k__BackingField, ::UnityEngine::Vector2 _center_k__BackingField,
                                                                ::UnityEngine::Vector2 _focus_k__BackingField, float_t _radius_k__BackingField) noexcept {
  this->_gradient_k__BackingField = _gradient_k__BackingField;
  this->_gradientType_k__BackingField = _gradientType_k__BackingField;
  this->_addressMode_k__BackingField = _addressMode_k__BackingField;
  this->_start_k__BackingField = _start_k__BackingField;
  this->_end_k__BackingField = _end_k__BackingField;
  this->_center_k__BackingField = _center_k__BackingField;
  this->_focus_k__BackingField = _focus_k__BackingField;
  this->_radius_k__BackingField = _radius_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FillGradient::FillGradient() {}
