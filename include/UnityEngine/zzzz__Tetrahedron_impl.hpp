#pragma once
// IWYU pragma private; include "UnityEngine/Tetrahedron.hpp"
#include "UnityEngine/zzzz__Matrix3x4f_impl.hpp"
#include "UnityEngine/zzzz__Tetrahedron_def.hpp"
#include "UnityEngine/zzzz__Tetrahedron_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Tetrahedron__indices_e__FixedBuffer::Tetrahedron__indices_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tetrahedron__indices_e__FixedBuffer::Tetrahedron__indices_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer::Tetrahedron__neighbors_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer::Tetrahedron__neighbors_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "indices", ty: "::UnityEngine::Tetrahedron__indices_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "neighbors", ty:
// "::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrix", ty: "::UnityEngine::Matrix3x4f", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Tetrahedron::Tetrahedron(::UnityEngine::Tetrahedron__indices_e__FixedBuffer indices, ::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer neighbors,
                                                  ::UnityEngine::Matrix3x4f matrix, bool isValid) noexcept {
  this->indices = indices;
  this->neighbors = neighbors;
  this->matrix = matrix;
  this->isValid = isValid;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tetrahedron::Tetrahedron() {}
