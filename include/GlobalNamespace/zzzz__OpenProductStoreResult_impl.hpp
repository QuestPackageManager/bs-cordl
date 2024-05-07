#pragma once
// IWYU pragma private; include "GlobalNamespace/OpenProductStoreResult.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OpenProductStoreResult::OpenProductStoreResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenProductStoreResult::OpenProductStoreResult() {}
constexpr ::GlobalNamespace::OpenProductStoreResult GlobalNamespace::OpenProductStoreResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OpenProductStoreResult GlobalNamespace::OpenProductStoreResult::Failed{ static_cast<int32_t>(0x1) };
