#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vertex.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
inline void UnityEngine::UIElements::Vertex::setStaticF_nearZ(float_t  value)  {
::cordl_internals::setStaticField<float_t, "nearZ", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vertex>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::Vertex::getStaticF_nearZ()  {
return ::cordl_internals::getStaticField<float_t, "nearZ", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vertex>::get>();
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "ids", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "opacityColorPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "settingIndex", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "circle", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Vertex::Vertex(::UnityEngine::Vector3  position, ::UnityEngine::Color32  tint, ::UnityEngine::Vector2  uv, ::UnityEngine::Color32  xformClipPages, ::UnityEngine::Color32  ids, ::UnityEngine::Color32  flags, ::UnityEngine::Color32  opacityColorPages, ::UnityEngine::Color32  settingIndex, ::UnityEngine::Vector4  circle, float_t  textureId) noexcept  {
this->position = position;
this->tint = tint;
this->uv = uv;
this->xformClipPages = xformClipPages;
this->ids = ids;
this->flags = flags;
this->opacityColorPages = opacityColorPages;
this->settingIndex = settingIndex;
this->circle = circle;
this->textureId = textureId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vertex::Vertex()   {
}
