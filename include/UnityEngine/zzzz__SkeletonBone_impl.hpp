#pragma once
// IWYU pragma private; include "UnityEngine/SkeletonBone.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__SkeletonBone_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SkeletonBone::SkeletonBone(::StringW  name, ::StringW  parentName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) noexcept  {
this->name = name;
this->parentName = parentName;
this->position = position;
this->rotation = rotation;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::UnityEngine::SkeletonBone::SkeletonBone()   {
}
