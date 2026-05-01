#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionSharedPropertyState.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionSharedPropertyState_def.hpp"
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsReadOnly", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::IndexedCollectionSharedPropertyState::IndexedCollectionSharedPropertyState(int32_t Index, bool IsReadOnly) noexcept {
  this->Index = Index;
  this->IsReadOnly = IsReadOnly;
}
// Ctor Parameters []
constexpr ::Unity::Properties::IndexedCollectionSharedPropertyState::IndexedCollectionSharedPropertyState() {}
