#pragma once
// IWYU pragma private; include "UnityEngine/UIVertex.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
inline void UnityEngine::UIVertex::setStaticF_s_DefaultColor(::UnityEngine::Color32  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color32, "s_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIVertex>::get>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::UIVertex::getStaticF_s_DefaultColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color32, "s_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIVertex>::get>();
}
inline void UnityEngine::UIVertex::setStaticF_s_DefaultTangent(::UnityEngine::Vector4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_DefaultTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIVertex>::get>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIVertex::getStaticF_s_DefaultTangent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_DefaultTangent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIVertex>::get>();
}
inline void UnityEngine::UIVertex::setStaticF_simpleVert(::UnityEngine::UIVertex  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIVertex, "simpleVert", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIVertex>::get>(std::forward<::UnityEngine::UIVertex>(value));
}
inline ::UnityEngine::UIVertex UnityEngine::UIVertex::getStaticF_simpleVert()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIVertex, "simpleVert", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIVertex>::get>();
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangent", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIVertex::UIVertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector4  tangent, ::UnityEngine::Color32  color, ::UnityEngine::Vector4  uv0, ::UnityEngine::Vector4  uv1, ::UnityEngine::Vector4  uv2, ::UnityEngine::Vector4  uv3) noexcept  {
this->position = position;
this->normal = normal;
this->tangent = tangent;
this->color = color;
this->uv0 = uv0;
this->uv1 = uv1;
this->uv2 = uv2;
this->uv3 = uv3;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIVertex::UIVertex()   {
}
