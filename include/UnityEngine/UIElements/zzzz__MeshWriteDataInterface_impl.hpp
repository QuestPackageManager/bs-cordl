#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshWriteDataInterface.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteDataInterface_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshWriteDataInterface::MeshWriteDataInterface(::System::IntPtr  vertices, ::System::IntPtr  indices, int32_t  vertexCount, int32_t  indexCount) noexcept  {
this->vertices = vertices;
this->indices = indices;
this->vertexCount = vertexCount;
this->indexCount = indexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshWriteDataInterface::MeshWriteDataInterface()   {
}
