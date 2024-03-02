#pragma once
#include "Zenject/zzzz__LoadSceneRelationship_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::LoadSceneRelationship::LoadSceneRelationship(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::LoadSceneRelationship::LoadSceneRelationship() {}
constexpr ::Zenject::LoadSceneRelationship Zenject::LoadSceneRelationship::None{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::LoadSceneRelationship Zenject::LoadSceneRelationship::Child{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::LoadSceneRelationship Zenject::LoadSceneRelationship::Sibling{ static_cast<int32_t>(0x2) };
