#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcPurchaseResult.hpp"
#include "GlobalNamespace/zzzz__GameDlcPurchaseResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameDlcPurchaseResult::GameDlcPurchaseResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcPurchaseResult::GameDlcPurchaseResult() {}
constexpr ::GlobalNamespace::GameDlcPurchaseResult GlobalNamespace::GameDlcPurchaseResult::Purchased{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameDlcPurchaseResult GlobalNamespace::GameDlcPurchaseResult::NotPurchased{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameDlcPurchaseResult GlobalNamespace::GameDlcPurchaseResult::Failed{ static_cast<int32_t>(0x2) };
